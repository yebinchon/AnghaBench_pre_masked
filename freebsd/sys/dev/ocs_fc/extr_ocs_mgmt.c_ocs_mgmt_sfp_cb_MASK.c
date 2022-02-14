
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_3__ {int running; int cb_lock; int semaphore; int page_data; int bytes_read; int status; } ;
typedef TYPE_1__ ocs_mgmt_sfp_result_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int32_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4, void *VAR_5)
{
 ocs_mgmt_sfp_result_t *VAR_6 = VAR_5;
 ocs_t *VAR_7 = VAR_1;

 FUNC_1(&(VAR_6->cb_lock));
 VAR_6->running++;
 if(VAR_6->running == 2) {

  FUNC_4(&(VAR_6->cb_lock));
  FUNC_0(VAR_7, VAR_6, sizeof(ocs_mgmt_sfp_result_t));
  return;
 }

 VAR_6->status = VAR_2;
 VAR_6->bytes_read = VAR_3;
 FUNC_2(&VAR_6->page_data, VAR_4, VAR_0);

 FUNC_3(&(VAR_6->semaphore));
 FUNC_4(&(VAR_6->cb_lock));
}
