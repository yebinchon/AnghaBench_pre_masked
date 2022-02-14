
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_cmd_queue_id_t ;
typedef int __cvmx_cmd_queue_state_t ;
struct TYPE_2__ {int * state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline __cvmx_cmd_queue_state_t *FUNC_2(cvmx_cmd_queue_id_t VAR_3)
{
    if (VAR_1)
    {
        if (FUNC_1(VAR_3 >= VAR_0))
            return ((void*)0);
        if (FUNC_1((VAR_3 & 0xffff) >= 256))
            return ((void*)0);
    }
    return &VAR_2->state[FUNC_0(VAR_3)];
}
