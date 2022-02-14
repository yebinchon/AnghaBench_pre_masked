
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {scalar_t__ status; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_set_active_profile_result_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static int32_t
FUNC_6(ocs_t *VAR_4, char *VAR_5, char *VAR_6)
{
 ocs_mgmt_set_active_profile_result_t VAR_7;
 int32_t VAR_8 = 0;
 int32_t VAR_9;

 VAR_9 = FUNC_5(VAR_6, ((void*)0), 0);

 FUNC_3(&(VAR_7.semaphore), 0, "set_active_profile");

 VAR_8 = FUNC_0(&VAR_4->hw, VAR_3, VAR_9, &VAR_7);
 if (VAR_8 == VAR_1) {
  if (FUNC_4(&(VAR_7.semaphore), VAR_2) != 0) {

   FUNC_1(VAR_4, "ocs_sem_p failed\n");
   return -VAR_0;
  }
  if (VAR_7.status == 0) {

   VAR_8 = 0;
  } else {
   VAR_8 = -1;
   FUNC_2(VAR_4, "setting active profile status 0x%x\n", VAR_7.status);
  }
 }

 return VAR_8;
}
