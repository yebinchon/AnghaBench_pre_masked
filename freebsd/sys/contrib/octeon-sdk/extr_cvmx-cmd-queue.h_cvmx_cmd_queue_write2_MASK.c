
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_cmd_queue_result_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_5__ {int max_depth; int index; int pool_size_m1; int base_ptr_div128; int fpa_pool; } ;
typedef TYPE_1__ __cvmx_cmd_queue_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline cvmx_cmd_queue_result_t FUNC_9(cvmx_cmd_queue_id_t VAR_6, int VAR_7, uint64_t VAR_8, uint64_t VAR_9)
{
    __cvmx_cmd_queue_state_t *VAR_10 = FUNC_0(VAR_6);

    if (VAR_5)
    {
        if (FUNC_8(VAR_10 == ((void*)0)))
            return VAR_2;
    }


    if (FUNC_5(VAR_7))
        FUNC_1(VAR_6, VAR_10);




    if (VAR_0 && FUNC_8(VAR_10->max_depth))
    {
        if (FUNC_8(FUNC_3(VAR_6) > (int)VAR_10->max_depth))
        {
            if (FUNC_5(VAR_7))
                FUNC_2(VAR_10);
            return VAR_1;
        }
    }


    if (FUNC_5(VAR_10->index + 2 < VAR_10->pool_size_m1))
    {
        uint64_t *VAR_11 = (uint64_t *)FUNC_6((uint64_t)VAR_10->base_ptr_div128<<7);
        VAR_11 += VAR_10->index;
        VAR_10->index += 2;
        VAR_11[0] = VAR_8;
        VAR_11[1] = VAR_9;
    }
    else
    {
        uint64_t *VAR_12;


        int VAR_13 = VAR_10->pool_size_m1 - VAR_10->index;

        uint64_t *VAR_14 = (uint64_t *)FUNC_4(VAR_10->fpa_pool);
        if (FUNC_8(VAR_14 == ((void*)0)))
        {
            if (FUNC_5(VAR_7))
                FUNC_2(VAR_10);
            return VAR_3;
        }
        VAR_13--;
        VAR_12 = (uint64_t *)FUNC_6((uint64_t)VAR_10->base_ptr_div128<<7);
        VAR_12 += VAR_10->index;
        *VAR_12++ = VAR_8;
        if (FUNC_5(VAR_13))
            *VAR_12++ = VAR_9;
        *VAR_12 = FUNC_7(VAR_14);


        VAR_10->base_ptr_div128 = *VAR_12 >> 7;
        VAR_10->index = 0;
        if (FUNC_8(VAR_13 == 0))
        {
            VAR_10->index = 1;
            VAR_14[0] = VAR_9;
        }
    }


    if (FUNC_5(VAR_7))
        FUNC_2(VAR_10);
    return VAR_4;
}
