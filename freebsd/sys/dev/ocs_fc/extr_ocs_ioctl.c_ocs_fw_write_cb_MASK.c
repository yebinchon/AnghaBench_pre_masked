
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int semaphore; void* change_status; void* actual_xfer; int status; } ;
typedef TYPE_1__ ocs_mgmt_fw_write_result_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_0, uint32_t VAR_1,
     uint32_t VAR_2, void *VAR_3)
{
        ocs_mgmt_fw_write_result_t *VAR_4 = VAR_3;

        VAR_4->status = VAR_0;
        VAR_4->actual_xfer = VAR_1;
        VAR_4->change_status = VAR_2;

        FUNC_0(&(VAR_4->semaphore));
}
