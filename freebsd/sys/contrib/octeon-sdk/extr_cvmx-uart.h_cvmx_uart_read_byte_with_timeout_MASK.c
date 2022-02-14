
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int dr; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_uart_lsr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline uint8_t FUNC_3(int VAR_0, int *VAR_1, volatile unsigned VAR_2)
{
    cvmx_uart_lsr_t VAR_3;


    *VAR_1 = 0;
    do
    {
        if(VAR_2 == 0)
        {
            *VAR_1 = 1;
            return -1;
        }
        VAR_3.u64 = FUNC_2(FUNC_0(VAR_0));
        VAR_2 --;
    } while (!VAR_3.s.dr);


    return FUNC_2(FUNC_1(VAR_0));
}
