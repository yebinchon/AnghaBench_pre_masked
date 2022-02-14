
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ thre; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_uart_lsr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(int VAR_0, uint8_t VAR_1)
{
    cvmx_uart_lsr_t VAR_2;


    do
    {
        VAR_2.u64 = FUNC_2(FUNC_0(VAR_0));
    }
    while (VAR_2.s.thre == 0);


    FUNC_3(FUNC_1(VAR_0), VAR_1);
}
