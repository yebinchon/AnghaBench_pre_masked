
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_3__ {scalar_t__ base_ptr_div128; } ;
typedef TYPE_1__ __cvmx_cmd_queue_state_t ;


 TYPE_1__* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

void *FUNC_2(cvmx_cmd_queue_id_t VAR_0)
{
    __cvmx_cmd_queue_state_t *VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 && VAR_1->base_ptr_div128)
        return FUNC_1((uint64_t)VAR_1->base_ptr_div128<<7);
    else
        return ((void*)0);
}
