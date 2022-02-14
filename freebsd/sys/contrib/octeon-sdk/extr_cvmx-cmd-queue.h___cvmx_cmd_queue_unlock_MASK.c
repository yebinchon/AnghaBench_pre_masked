
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ now_serving; } ;
typedef TYPE_1__ __cvmx_cmd_queue_state_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(__cvmx_cmd_queue_state_t *VAR_1)
{
    uint8_t VAR_2;

    VAR_2 = VAR_1->now_serving + 1;
    VAR_0;
    VAR_1->now_serving = VAR_2;
    VAR_0;
}
