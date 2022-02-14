
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clk_div; int bypass; int bypass_ext; scalar_t__ mux_sel; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_ciu_qlm_jtgc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(void)
{
    cvmx_ciu_qlm_jtgc_t VAR_6;
    int VAR_7 = 0;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_1) / (1000000 *
        (FUNC_0(VAR_5) ? 10 : 25));

    VAR_8 = (VAR_8-1)>>2;

    while (VAR_8)
    {
        VAR_7++;
        VAR_8>>=1;
    }


    VAR_6.u64 = 0;
    VAR_6.s.clk_div = VAR_7;
    VAR_6.s.mux_sel = 0;
    if (FUNC_0(VAR_2))
        VAR_6.s.bypass = 0x3;
    else if (FUNC_0(VAR_3) || FUNC_0(VAR_4))
        VAR_6.s.bypass = 0x7;
    else
        VAR_6.s.bypass = 0xf;
    if (FUNC_0(VAR_5))
        VAR_6.s.bypass_ext = 1;
    FUNC_3(VAR_0, VAR_6.u64);
    FUNC_2(VAR_0);
}
