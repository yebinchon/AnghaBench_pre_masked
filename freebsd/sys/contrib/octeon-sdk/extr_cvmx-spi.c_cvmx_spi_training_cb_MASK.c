
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_8__ {int clr_boot; } ;
struct TYPE_10__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_spxx_trn4_ctl_t ;
struct TYPE_9__ {scalar_t__ srxtrn; } ;
struct TYPE_11__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_5__ cvmx_spxx_clk_stat_t ;
struct TYPE_7__ {int clkdly; int statrcv; int sndtrn; int drptrn; int rcvtrn; int srxdlck; scalar_t__ statdrv; scalar_t__ runbist; scalar_t__ seetrn; } ;
struct TYPE_12__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_6__ cvmx_spxx_clk_ctl_t ;
typedef int cvmx_spi_mode_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 unsigned long long FUNC_5 () ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,void*) ;

int FUNC_9(int VAR_1, cvmx_spi_mode_t VAR_2, int VAR_3)
{
    cvmx_spxx_trn4_ctl_t VAR_4;
    cvmx_spxx_clk_stat_t VAR_5;
    uint64_t VAR_6 = FUNC_3(VAR_0) / 1000;
    uint64_t VAR_7 = FUNC_5() + 1000ull * VAR_6 * VAR_3;
    int VAR_8;


    cvmx_spxx_clk_ctl_t VAR_9;
    VAR_9.u64 = 0;
    VAR_9.s.seetrn = 0;
    VAR_9.s.clkdly = 0x10;
    VAR_9.s.runbist = 0;
    VAR_9.s.statdrv = 0;
    VAR_9.s.statrcv = 1;
    VAR_9.s.sndtrn = 1;
    VAR_9.s.drptrn = 1;
    VAR_9.s.rcvtrn = 1;
    VAR_9.s.srxdlck = 1;
    FUNC_8(FUNC_0(VAR_1), VAR_9.u64);
    FUNC_7 (1000 * VAR_6);


    VAR_4.u64 = FUNC_6(FUNC_2(VAR_1));
    VAR_4.s.clr_boot = 1;
    FUNC_8 (FUNC_2(VAR_1), VAR_4.u64);


    FUNC_4 ("SPI%d: Waiting for training\n", VAR_1);
    FUNC_7 (1000 * VAR_6);

    VAR_7 = FUNC_5() + 1000ull * VAR_6 * 600;





    VAR_8 = 500;
    do {
        VAR_5.u64 = FUNC_6 (FUNC_1(VAR_1));
        if (VAR_5.s.srxtrn && VAR_8)
        {
            VAR_8--;
            FUNC_8(FUNC_1(VAR_1), VAR_5.u64);
            VAR_5.s.srxtrn = 0;
        }
        if (FUNC_5() > VAR_7)
        {
            FUNC_4 ("SPI%d: Timeout\n", VAR_1);
            return -1;
        }
    } while (VAR_5.s.srxtrn == 0);

    return 0;
}
