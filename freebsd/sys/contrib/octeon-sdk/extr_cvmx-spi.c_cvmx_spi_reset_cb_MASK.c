
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_20__ {int oddpar; } ;
struct TYPE_23__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_6__ cvmx_stxx_spi4_calx_t ;
struct TYPE_24__ {void* u64; } ;
typedef TYPE_7__ cvmx_stxx_int_msk_t ;
struct TYPE_19__ {int oddpar; } ;
struct TYPE_25__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_8__ cvmx_srxx_spi4_calx_t ;
struct TYPE_22__ {int jitter; int clr_boot; int maxdist; int macro_en; int mux_en; scalar_t__ set_boot; scalar_t__ trntest; } ;
struct TYPE_26__ {void* u64; TYPE_5__ s; } ;
typedef TYPE_9__ cvmx_spxx_trn4_ctl_t ;
struct TYPE_14__ {void* u64; } ;
typedef TYPE_10__ cvmx_spxx_int_msk_t ;
struct TYPE_15__ {void* u64; } ;
typedef TYPE_11__ cvmx_spxx_dbg_deskew_ctl_t ;
struct TYPE_21__ {int runbist; int clkdly; int statrcv; int srxdlck; scalar_t__ rcvtrn; scalar_t__ drptrn; scalar_t__ sndtrn; scalar_t__ statdrv; scalar_t__ seetrn; } ;
struct TYPE_16__ {void* u64; TYPE_4__ s; } ;
typedef TYPE_12__ cvmx_spxx_clk_ctl_t ;
struct TYPE_18__ {scalar_t__ stat2; scalar_t__ stat1; scalar_t__ stat0; } ;
struct TYPE_17__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_13__ cvmx_spxx_bist_stat_t ;
typedef int cvmx_spi_mode_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,void*) ;

int FUNC_18(int VAR_2, cvmx_spi_mode_t VAR_3)
{
    cvmx_spxx_dbg_deskew_ctl_t VAR_4;
    cvmx_spxx_clk_ctl_t VAR_5;
    cvmx_spxx_bist_stat_t VAR_6;
    cvmx_spxx_int_msk_t VAR_7;
    cvmx_stxx_int_msk_t VAR_8;
    cvmx_spxx_trn4_ctl_t VAR_9;
    int VAR_10;
    uint64_t VAR_11 = FUNC_13(VAR_0) / 1000;


    VAR_7.u64 = FUNC_15(FUNC_3(VAR_2));
    FUNC_17(FUNC_3(VAR_2), 0);
    VAR_8.u64 = FUNC_15(FUNC_9(VAR_2));
    FUNC_17(FUNC_9(VAR_2), 0);


    FUNC_17(FUNC_6(VAR_2), 0);
    FUNC_17(FUNC_8(VAR_2), 0);
    VAR_5.u64 = 0;
    VAR_5.s.runbist = 1;
    FUNC_17(FUNC_1(VAR_2), VAR_5.u64);
    FUNC_16 (10 * VAR_11);
    VAR_6.u64 = FUNC_15(FUNC_0(VAR_2));
    if (VAR_6.s.stat0)
        FUNC_14("ERROR SPI%d: BIST failed on receive datapath FIFO\n", VAR_2);
    if (VAR_6.s.stat1)
        FUNC_14("ERROR SPI%d: BIST failed on RX calendar table\n", VAR_2);
    if (VAR_6.s.stat2)
        FUNC_14("ERROR SPI%d: BIST failed on TX calendar table\n", VAR_2);


    for (VAR_10=0; VAR_10<32; VAR_10++)
    {
        cvmx_srxx_spi4_calx_t VAR_12;
        cvmx_stxx_spi4_calx_t VAR_13;

        VAR_12.u64 = 0;
        VAR_12.s.oddpar = 1;
        FUNC_17(FUNC_7(VAR_10, VAR_2), VAR_12.u64);

        VAR_13.u64 = 0;
        VAR_13.s.oddpar = 1;
        FUNC_17(FUNC_11(VAR_10, VAR_2), VAR_13.u64);
    }


    FUNC_17(FUNC_4(VAR_2), FUNC_15(FUNC_4(VAR_2)));
    FUNC_17(FUNC_3(VAR_2), VAR_7.u64);
    FUNC_17(FUNC_10(VAR_2), FUNC_15(FUNC_10(VAR_2)));
    FUNC_17(FUNC_9(VAR_2), VAR_8.u64);


    VAR_5.u64 = 0;
    VAR_5.s.seetrn = 0;
    VAR_5.s.clkdly = 0x10;
    VAR_5.s.runbist = 0;
    VAR_5.s.statdrv = 0;
    VAR_5.s.statrcv = 1;
    VAR_5.s.sndtrn = 0;
    VAR_5.s.drptrn = 0;
    VAR_5.s.rcvtrn = 0;
    VAR_5.s.srxdlck = 0;
    FUNC_17(FUNC_1(VAR_2), VAR_5.u64);
    FUNC_16 (100 * VAR_11);


    VAR_5.s.srxdlck = 1;
    FUNC_17(FUNC_1(VAR_2), VAR_5.u64);


    FUNC_16 (100 * VAR_11);


    VAR_9.s.trntest = 0;
    VAR_9.s.jitter = 1;
    VAR_9.s.clr_boot = 1;
    VAR_9.s.set_boot = 0;
    if (FUNC_12(VAR_1))
        VAR_9.s.maxdist = 3;
    else
        VAR_9.s.maxdist = 8;
    VAR_9.s.macro_en = 1;
    VAR_9.s.mux_en = 1;
    FUNC_17 (FUNC_5(VAR_2), VAR_9.u64);

    VAR_4.u64 = 0;
    FUNC_17 (FUNC_2(VAR_2), VAR_4.u64);

    return 0;
}
