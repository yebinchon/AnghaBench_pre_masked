
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx_oe; } ;
struct TYPE_7__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_gpio_xbit_cfgx_t ;
struct TYPE_5__ {int tx_oe; } ;
struct TYPE_8__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_gpio_bit_cfgx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static inline void FUNC_6(int VAR_2, int VAR_3)
{
    if (VAR_2 > 15 && VAR_2 < 20)
    {

        if (FUNC_2(VAR_0) || FUNC_2(VAR_1))
        {
            cvmx_gpio_xbit_cfgx_t VAR_4;
            VAR_4.u64 = FUNC_4(FUNC_1(VAR_2));
            if (VAR_3)
                VAR_4.s.tx_oe = 1;
            else
                VAR_4.s.tx_oe = 0;
            FUNC_5(FUNC_1(VAR_2), VAR_4.u64);
        }
        else
            FUNC_3("cvmx_gpio_cfg: Invalid GPIO bit(%d)\n", VAR_2);
    }
    else
    {
        cvmx_gpio_bit_cfgx_t VAR_5;
        VAR_5.u64 = FUNC_4(FUNC_0(VAR_2));
        if (VAR_3)
            VAR_5.s.tx_oe = 1;
        else
            VAR_5.s.tx_oe = 0;
        FUNC_5(FUNC_0(VAR_2), VAR_5.u64);
    }
}
