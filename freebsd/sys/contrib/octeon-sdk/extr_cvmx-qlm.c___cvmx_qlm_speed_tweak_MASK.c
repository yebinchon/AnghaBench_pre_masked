
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qlm_spd; } ;
struct TYPE_4__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_mio_qlmx_cfg_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int,char*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
    cvmx_mio_qlmx_cfg_t VAR_2;
    int VAR_3 = 0;
    int VAR_4;

    if (FUNC_1(VAR_1))
        VAR_3 = 5;
    else if (FUNC_1(VAR_0))
        VAR_3 = 3;
    else
        return;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {

 VAR_2.u64 = FUNC_3(FUNC_0(VAR_4));


        if ((VAR_2.s.qlm_spd == 5) || (VAR_2.s.qlm_spd == 12) ||
            (VAR_2.s.qlm_spd == 0) || (VAR_2.s.qlm_spd == 6) ||
            (VAR_2.s.qlm_spd == 11))
        {
            FUNC_2(VAR_4, -1, "rx_cap_gen2", 0x1);
            FUNC_2(VAR_4, -1, "rx_eq_gen2", 0x8);
        }
    }
}
