
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
struct TYPE_8__ {int st_en; } ;
struct TYPE_10__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_stxx_com_ctl_t ;
struct TYPE_7__ {int inf_en; int st_en; } ;
struct TYPE_11__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_5__ cvmx_srxx_com_ctl_t ;
struct TYPE_9__ {scalar_t__ stxcal; } ;
struct TYPE_12__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_6__ cvmx_spxx_clk_stat_t ;
typedef int cvmx_spi_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 unsigned long long FUNC_5 () ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;

int FUNC_8(int VAR_3, cvmx_spi_mode_t VAR_4, int VAR_5)
{
    uint64_t VAR_6 = FUNC_3(VAR_0) / 1000;
    if (VAR_4 & VAR_1) {

        cvmx_srxx_com_ctl_t VAR_7;
        FUNC_4 ("SPI%d: Rx is synchronized, start sending calendar data\n", VAR_3);
        VAR_7.u64 = FUNC_6(FUNC_1(VAR_3));
        VAR_7.s.inf_en = 1;
        VAR_7.s.st_en = 1;
        FUNC_7 (FUNC_1(VAR_3), VAR_7.u64);
    }

    if (VAR_4 & VAR_2) {



        cvmx_spxx_clk_stat_t VAR_8;
        uint64_t VAR_9;
        cvmx_stxx_com_ctl_t VAR_10;
        VAR_10.u64 = 0;
        VAR_10.s.st_en = 1;
        FUNC_7 (FUNC_2(VAR_3), VAR_10.u64);


        FUNC_4 ("SPI%d: Waiting to sync on STX[%d] STAT\n", VAR_3, VAR_3);
        VAR_9 = FUNC_5() + 1000ull * VAR_6 * VAR_5;

        do {
            VAR_8.u64 = FUNC_6 (FUNC_0 (VAR_3));
            if (FUNC_5() > VAR_9)
            {
                FUNC_4 ("SPI%d: Timeout\n", VAR_3);
                return -1;
            }
        } while (VAR_8.s.stxcal == 0);
    }

    return 0;
}
