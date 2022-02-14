
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_20__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_21__ {int len; int m; } ;
struct TYPE_22__ {scalar_t__ u64; TYPE_10__ s; } ;
typedef TYPE_11__ cvmx_stxx_spi4_stat_t ;
struct TYPE_39__ {int alpha; int max_t; } ;
struct TYPE_23__ {scalar_t__ u64; TYPE_8__ s; } ;
typedef TYPE_12__ cvmx_stxx_spi4_dat_t ;
struct TYPE_40__ {int oddpar; int prt3; int prt2; int prt1; int prt0; } ;
struct TYPE_24__ {scalar_t__ u64; TYPE_9__ s; } ;
typedef TYPE_13__ cvmx_stxx_spi4_calx_t ;
struct TYPE_35__ {scalar_t__ mintrn; scalar_t__ igntpa; } ;
struct TYPE_25__ {scalar_t__ u64; TYPE_4__ s; } ;
typedef TYPE_14__ cvmx_stxx_arb_ctl_t ;
struct TYPE_34__ {int len; int m; } ;
struct TYPE_26__ {scalar_t__ u64; TYPE_3__ s; } ;
typedef TYPE_15__ cvmx_srxx_spi4_stat_t ;
struct TYPE_33__ {int oddpar; int prt3; int prt2; int prt1; int prt0; } ;
struct TYPE_27__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_16__ cvmx_srxx_spi4_calx_t ;
struct TYPE_31__ {int prts; scalar_t__ inf_en; scalar_t__ st_en; } ;
struct TYPE_28__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_17__ cvmx_srxx_com_ctl_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_37__ {int thresh; } ;
struct TYPE_29__ {scalar_t__ u64; TYPE_6__ s; } ;
typedef TYPE_18__ cvmx_gmxx_tx_spi_thresh_t ;
struct TYPE_36__ {int max1; int max2; scalar_t__ slice; } ;
struct TYPE_30__ {scalar_t__ u64; TYPE_5__ s; } ;
typedef TYPE_19__ cvmx_gmxx_tx_spi_max_t ;
struct TYPE_38__ {scalar_t__ cont_pkt; scalar_t__ tpa_clr; } ;
struct TYPE_32__ {scalar_t__ u64; TYPE_7__ s; } ;
typedef TYPE_20__ cvmx_gmxx_tx_spi_ctl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

int FUNC_12(int VAR_2, cvmx_spi_mode_t VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    if (VAR_3 & VAR_0)
    {
        cvmx_srxx_com_ctl_t VAR_7;
        cvmx_srxx_spi4_stat_t VAR_8;


        VAR_7.u64 = 0;
        VAR_7.s.prts = VAR_4 - 1;
        VAR_7.s.st_en = 0;
        VAR_7.s.inf_en = 0;
        FUNC_11(FUNC_3(VAR_2), VAR_7.u64);


        VAR_5 = 0;
        VAR_6 = 0;
        while (VAR_5 < VAR_4)
        {
            cvmx_srxx_spi4_calx_t VAR_9;
            VAR_9.u64 = 0;
            VAR_9.s.prt0 = VAR_5++;
            VAR_9.s.prt1 = VAR_5++;
            VAR_9.s.prt2 = VAR_5++;
            VAR_9.s.prt3 = VAR_5++;
            VAR_9.s.oddpar = ~(FUNC_10(VAR_9.u64) & 1);
            FUNC_11(FUNC_4(VAR_6, VAR_2), VAR_9.u64);
            VAR_6++;
        }
        VAR_8.u64 = 0;
        VAR_8.s.len = VAR_4;
        VAR_8.s.m = 1;
        FUNC_11(FUNC_5(VAR_2), VAR_8.u64);
    }

    if (VAR_3 & VAR_1)
    {
        cvmx_stxx_arb_ctl_t VAR_10;
        cvmx_gmxx_tx_spi_max_t VAR_11;
        cvmx_gmxx_tx_spi_thresh_t VAR_12;
        cvmx_gmxx_tx_spi_ctl_t VAR_13;
        cvmx_stxx_spi4_stat_t VAR_14;
        cvmx_stxx_spi4_dat_t VAR_15;


        VAR_10.u64 = 0;
        VAR_10.s.igntpa = 0;
        VAR_10.s.mintrn = 0;
        FUNC_11(FUNC_6(VAR_2), VAR_10.u64);

        VAR_11.u64 = 0;
        VAR_11.s.max1 = 8;
        VAR_11.s.max2 = 4;
        VAR_11.s.slice = 0;
        FUNC_11(FUNC_1(VAR_2), VAR_11.u64);

        VAR_12.u64 = 0;
        VAR_12.s.thresh = 4;
        FUNC_11(FUNC_2(VAR_2), VAR_12.u64);

        VAR_13.u64 = 0;
        VAR_13.s.tpa_clr = 0;
        VAR_13.s.cont_pkt = 0;
        FUNC_11(FUNC_0(VAR_2), VAR_13.u64);


        VAR_15.u64 = 0;
        VAR_15.s.alpha = 32;
        VAR_15.s.max_t = 0xFFFF;
        FUNC_11(FUNC_8(VAR_2), VAR_15.u64);


        VAR_5 = 0;
        VAR_6 = 0;
        while (VAR_5 < VAR_4)
        {
            cvmx_stxx_spi4_calx_t VAR_16;
            VAR_16.u64 = 0;
            VAR_16.s.prt0 = VAR_5++;
            VAR_16.s.prt1 = VAR_5++;
            VAR_16.s.prt2 = VAR_5++;
            VAR_16.s.prt3 = VAR_5++;
            VAR_16.s.oddpar = ~(FUNC_10(VAR_16.u64) & 1);
            FUNC_11(FUNC_7(VAR_6, VAR_2), VAR_16.u64);
            VAR_6++;
        }
        VAR_14.u64 = 0;
        VAR_14.s.len = VAR_4;
        VAR_14.s.m = 1;
        FUNC_11(FUNC_9(VAR_2), VAR_14.u64);
    }

    return 0;
}
