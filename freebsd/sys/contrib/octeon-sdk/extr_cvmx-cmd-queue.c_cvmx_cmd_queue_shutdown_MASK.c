
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_cmd_queue_result_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_5__ {scalar_t__ base_ptr_div128; int fpa_pool; } ;
typedef TYPE_1__ __cvmx_cmd_queue_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;

cvmx_cmd_queue_result_t FUNC_7(cvmx_cmd_queue_id_t VAR_3)
{
    __cvmx_cmd_queue_state_t *VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == ((void*)0))
    {
        FUNC_4("ERROR: cvmx_cmd_queue_shutdown: Unable to get queue information.\n");
        return VAR_1;
    }

    if (FUNC_3(VAR_3) > 0)
    {
        FUNC_4("ERROR: cvmx_cmd_queue_shutdown: Queue still has data in it.\n");
        return VAR_0;
    }

    FUNC_1(VAR_3, VAR_4);
    if (VAR_4->base_ptr_div128)
    {
        FUNC_5(FUNC_6((uint64_t)VAR_4->base_ptr_div128<<7), VAR_4->fpa_pool, 0);
        VAR_4->base_ptr_div128 = 0;
    }
    FUNC_2(VAR_4);

    return VAR_2;
}
