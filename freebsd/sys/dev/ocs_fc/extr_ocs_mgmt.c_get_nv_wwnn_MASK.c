
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int result_string ;
typedef int ocs_textbuf_t ;
struct TYPE_7__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {scalar_t__ status; int * wwnn; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_get_nvparms_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_3 (int *,int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(ocs_t *VAR_4, char *VAR_5, ocs_textbuf_t *VAR_6)
{
 char VAR_7[24];
 ocs_mgmt_get_nvparms_result_t VAR_8;

 FUNC_4(&(VAR_8.semaphore), 0, "get_nv_wwnn");

 if(FUNC_0(&VAR_4->hw, VAR_3, &VAR_8) == VAR_1) {
  if (FUNC_5(&(VAR_8.semaphore), VAR_2) != 0) {

   FUNC_1(VAR_4, "ocs_sem_p failed\n");
   return;
  }
  if (VAR_8.status == 0) {

   FUNC_6(VAR_7, sizeof(VAR_7), "%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x",
     VAR_8.wwnn[0], VAR_8.wwnn[1], VAR_8.wwnn[2],
     VAR_8.wwnn[3], VAR_8.wwnn[4], VAR_8.wwnn[5],
     VAR_8.wwnn[6], VAR_8.wwnn[7]);
   FUNC_3(VAR_6, VAR_0, "nv_wwnn", VAR_7);
  } else {
   FUNC_2(VAR_4, "getting wwnn status 0x%x\n", VAR_8.status);
  }
 }
}
