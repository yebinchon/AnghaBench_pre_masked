
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int semaphore; int active_profile_id; int status; } ;
typedef TYPE_1__ ocs_mgmt_get_active_profile_result_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_0, uint32_t VAR_1, void *VAR_2)
{
 ocs_mgmt_get_active_profile_result_t *VAR_3 = VAR_2;

 VAR_3->status = VAR_0;
 VAR_3->active_profile_id = VAR_1;

 FUNC_0(&(VAR_3->semaphore));
}
