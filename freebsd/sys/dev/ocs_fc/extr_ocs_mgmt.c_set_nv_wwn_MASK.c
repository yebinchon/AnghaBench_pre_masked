
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_9__ {char* status; int semaphore; int preferred_d_id; int hard_alpa; int * wwnn; int * wwpn; } ;
typedef TYPE_2__ ocs_mgmt_get_nvparms_result_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,char*,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static int32_t
FUNC_9(ocs_t *VAR_5, char *VAR_6, char *VAR_7)
{
 ocs_mgmt_get_nvparms_result_t VAR_8;
 uint8_t VAR_9[8];
 uint8_t VAR_10[8];
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 int32_t VAR_13 = -1;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;




 FUNC_4(&(VAR_8.semaphore), 0, "set_nv_wwn1");

 VAR_13 = FUNC_0(&VAR_5->hw, VAR_3, &VAR_8);

 if (VAR_13 == VAR_1) {
  if (FUNC_5(&(VAR_8.semaphore), VAR_2) != 0) {

   FUNC_2(VAR_5, "ocs_sem_p failed\n");
   return -VAR_0;
  }
  if (VAR_8.status != 0) {
   FUNC_3(VAR_5, "getting nvparms status 0x%x\n", VAR_8.status);
   return -1;
  }
 }


 if (VAR_7 != ((void*)0)) {
  VAR_11 = FUNC_8(&VAR_7, "@");
  VAR_12 = VAR_7;
 }

 if (VAR_11 != ((void*)0)) {
  VAR_14 = FUNC_7(VAR_11, "NA");
 }

 if (VAR_12 != ((void*)0)) {
  VAR_15 = FUNC_7(VAR_12, "NA");
 }


 if ((VAR_11 != ((void*)0)) && (VAR_14 != 0)) {
  if (FUNC_6(VAR_11, "%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx",
    &(VAR_9[0]), &(VAR_9[1]), &(VAR_9[2]),
    &(VAR_9[3]), &(VAR_9[4]), &(VAR_9[5]),
    &(VAR_9[6]), &(VAR_9[7])) != 8) {
   FUNC_3(VAR_5, "can't parse WWPN %s\n", VAR_11);
   return -1;
  }
 }


 if ((VAR_12 != ((void*)0)) && (VAR_15 != 0 )) {
  if (FUNC_6(VAR_12, "%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx",
    &(VAR_10[0]), &(VAR_10[1]), &(VAR_10[2]),
    &(VAR_10[3]), &(VAR_10[4]), &(VAR_10[5]),
    &(VAR_10[6]), &(VAR_10[7])) != 8) {
   FUNC_3(VAR_5, "can't parse WWNN %s\n", VAR_12);
   return -1;
  }
 }

 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {

  if (VAR_14 == 0) {
   VAR_9[VAR_16] = VAR_8.wwpn[VAR_16];
  }


  if (VAR_15 == 0) {
   VAR_10[VAR_16] = VAR_8.wwnn[VAR_16];
  }
 }


 FUNC_4(&(VAR_8.semaphore), 0, "set_nv_wwn2");

 VAR_13 = FUNC_1(&VAR_5->hw, VAR_4, VAR_9,
     VAR_10, VAR_8.hard_alpa, VAR_8.preferred_d_id,
     &VAR_8);
 if (VAR_13 == VAR_1) {
  if (FUNC_5(&(VAR_8.semaphore), VAR_2) != 0) {

   FUNC_2(VAR_5, "ocs_sem_p failed\n");
   return -VAR_0;
  }
  if (VAR_8.status != 0) {
   FUNC_3(VAR_5, "setting wwn status 0x%x\n", VAR_8.status);
   return -1;
  }
 }

 return VAR_13;
}
