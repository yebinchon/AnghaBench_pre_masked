
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ dr; } ;
struct TYPE_4__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_uart_lsr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(int VAR_3, uint64_t VAR_4[32], void *VAR_5)
{
    cvmx_uart_lsr_t VAR_6;



    VAR_6.u64 = FUNC_2(FUNC_0(VAR_0));
    while (VAR_6.s.dr)
    {
        int VAR_7 = FUNC_2(FUNC_1(VAR_0));
        if (VAR_7 == '\003')
        {
            register uint64_t VAR_8;

            FUNC_3(VAR_1);
            FUNC_3(VAR_2);




            asm volatile (
                "dmfc0 %0, $22\n"
                "ori   %0, %0, 0x1110\n"
                "dmtc0 %0, $22\n"
                : "=r" (VAR_8));
        }
        VAR_6.u64 = FUNC_2(FUNC_0(VAR_0));
    }
}
