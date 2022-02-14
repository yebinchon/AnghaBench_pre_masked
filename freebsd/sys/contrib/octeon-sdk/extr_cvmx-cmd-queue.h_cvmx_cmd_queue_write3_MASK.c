
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_cmd_queue_result_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_5__ {int max_depth; scalar_t__ index; scalar_t__ pool_size_m1; int base_ptr_div128; int fpa_pool; } ;
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

__attribute__((used)) static inline cvmx_cmd_queue_result_t FUNC_9(cvmx_cmd_queue_id_t VAR_6, int VAR_7, uint64_t VAR_8, uint64_t VAR_9, uint64_t VAR_10)
{
    __cvmx_cmd_queue_state_t *VAR_11 = FUNC_0(VAR_6);

    if (VAR_5)
    {
        if (FUNC_8(VAR_11 == ((void*)0)))
            return VAR_2;
    }


    if (FUNC_5(VAR_7))
        FUNC_1(VAR_6, VAR_11);




    if (VAR_0 && FUNC_8(VAR_11->max_depth))
    {
        if (FUNC_8(FUNC_3(VAR_6) > (int)VAR_11->max_depth))
        {
            if (FUNC_5(VAR_7))
                FUNC_2(VAR_11);
            return VAR_1;
        }
    }


    if (FUNC_5(VAR_11->index + 3 < VAR_11->pool_size_m1))
    {
        uint64_t *VAR_12 = (uint64_t *)FUNC_6((uint64_t)VAR_11->base_ptr_div128<<7);
        VAR_12 += VAR_11->index;
        VAR_11->index += 3;
        VAR_12[0] = VAR_8;
        VAR_12[1] = VAR_9;
        VAR_12[2] = VAR_10;
    }
    else
    {
        uint64_t *VAR_13;


        int VAR_14 = VAR_11->pool_size_m1 - VAR_11->index;

        uint64_t *VAR_15 = (uint64_t *)FUNC_4(VAR_11->fpa_pool);
        if (FUNC_8(VAR_15 == ((void*)0)))
        {
            if (FUNC_5(VAR_7))
                FUNC_2(VAR_11);
            return VAR_3;
        }
        VAR_14--;
        VAR_13 = (uint64_t *)FUNC_6((uint64_t)VAR_11->base_ptr_div128<<7);
        VAR_13 += VAR_11->index;
        *VAR_13++ = VAR_8;
        if (VAR_14)
        {
            *VAR_13++ = VAR_9;
            if (VAR_14 > 1)
                *VAR_13++ = VAR_10;
        }
        *VAR_13 = FUNC_7(VAR_15);


        VAR_11->base_ptr_div128 = *VAR_13 >> 7;
        VAR_11->index = 0;
        VAR_13 = VAR_15;
        if (VAR_14 == 0)
        {
            *VAR_13++ = VAR_9;
            VAR_11->index++;
        }
        if (VAR_14 < 2)
        {
            *VAR_13++ = VAR_10;
            VAR_11->index++;
        }
    }


    if (FUNC_5(VAR_7))
        FUNC_2(VAR_11);
    return VAR_4;
}
