
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_7__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {scalar_t__ status; int active_profile_id; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_get_active_profile_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_3 (int *,int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(ocs_t *VAR_5, char *VAR_6, ocs_textbuf_t *VAR_7)
{
 char VAR_8[VAR_0];
 ocs_mgmt_get_active_profile_result_t VAR_9;

 FUNC_4(&(VAR_9.semaphore), 0, "get_active_profile");

 if(FUNC_0(&VAR_5->hw, VAR_4, &VAR_9) == VAR_2) {
  if (FUNC_5(&(VAR_9.semaphore), VAR_3) != 0) {

   FUNC_1(VAR_5, "ocs_sem_p failed\n");
  }
  if (VAR_9.status == 0) {

   FUNC_6(VAR_8, "0x%02x", VAR_9.active_profile_id);
   FUNC_3(VAR_7, VAR_1, "active_profile", VAR_8);
  } else {
   FUNC_2(VAR_5, "getting active profile status 0x%x\n", VAR_9.status);
  }
 }
}
