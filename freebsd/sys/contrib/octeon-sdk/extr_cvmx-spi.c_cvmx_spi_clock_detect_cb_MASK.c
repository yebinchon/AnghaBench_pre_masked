
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {scalar_t__ s4clk0; scalar_t__ s4clk1; scalar_t__ d4clk0; scalar_t__ d4clk1; } ;
struct TYPE_4__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_2__ cvmx_spxx_clk_stat_t ;
typedef int cvmx_spi_mode_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 unsigned long long FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

int FUNC_6(int VAR_1, cvmx_spi_mode_t VAR_2, int VAR_3)
{
    int VAR_4;
    cvmx_spxx_clk_stat_t VAR_5;
    uint64_t VAR_6;
    uint64_t VAR_7 = FUNC_1(VAR_0) / 1000;



    FUNC_2 ("SPI%d: Waiting to see TsClk...\n", VAR_1);
    VAR_6 = FUNC_3() + 1000ull * VAR_7 * VAR_3;


    VAR_4 = 100;
    do
    {
        VAR_5.u64 = FUNC_4(FUNC_0(VAR_1));
        if (VAR_5.s.s4clk0 && VAR_5.s.s4clk1 && VAR_4)
        {


            VAR_4--;
            FUNC_5(FUNC_0(VAR_1), VAR_5.u64);
            VAR_5.s.s4clk0 = 0;
            VAR_5.s.s4clk1 = 0;
        }
        if (FUNC_3() > VAR_6)
        {
            FUNC_2 ("SPI%d: Timeout\n", VAR_1);
            return -1;
        }
    } while (VAR_5.s.s4clk0 == 0 || VAR_5.s.s4clk1 == 0);

    FUNC_2 ("SPI%d: Waiting to see RsClk...\n", VAR_1);
    VAR_6 = FUNC_3() + 1000ull * VAR_7 * VAR_3;


    VAR_4 = 100;
    do
    {
        VAR_5.u64 = FUNC_4 (FUNC_0(VAR_1));
        if (VAR_5.s.d4clk0 && VAR_5.s.d4clk1 && VAR_4)
        {


            VAR_4--;
            FUNC_5(FUNC_0(VAR_1), VAR_5.u64);
            VAR_5.s.d4clk0 = 0;
            VAR_5.s.d4clk1 = 0;
        }
        if (FUNC_3() > VAR_6)
        {
            FUNC_2 ("SPI%d: Timeout\n", VAR_1);
            return -1;
        }
    } while (VAR_5.s.d4clk0 == 0 || VAR_5.s.d4clk1 == 0);

    return 0;
}
