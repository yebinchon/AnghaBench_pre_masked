
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int dfa_memcfg0_base; int dfa_memcfg1_base; int p0_ena; int mrs_dat_p0bunk0; int p1_ena; int mrs_dat_p1bunk0; int bunkport; int mrs_dat_p0bunk1; int mrs_dat_p1bunk1; } ;
typedef TYPE_3__ rldram_csr_config_t ;
struct TYPE_7__ {int silrst; } ;
struct TYPE_10__ {int u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_dfa_memcfg2_t ;
struct TYPE_8__ {int rldck_rst; int rldqck90_rst; } ;
struct TYPE_11__ {int u64; TYPE_2__ s; } ;
typedef TYPE_5__ cvmx_dfa_memcfg0_t ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned long long,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long long,int) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(rldram_csr_config_t *VAR_7)
{
    cvmx_dfa_memcfg0_t VAR_8;
    cvmx_dfa_memcfg2_t VAR_9;

    VAR_8 = VAR_7->dfa_memcfg0_base;

    if ((FUNC_0(VAR_4) || FUNC_0(VAR_5)))
    {
        uint32_t VAR_10;

        if (FUNC_0 (VAR_5)) {

     VAR_8 = 1;
     VAR_8 = 1;
            FUNC_5(VAR_0, VAR_8);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  clk/qk90 reset\n", (uint32_t) VAR_8);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_8);


     VAR_8 = 0;
     VAR_8 = 1;
            FUNC_5(VAR_0, VAR_8);
            FUNC_4(4000000);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  qk90 reset\n", (uint32_t) VAR_8);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_8);


     VAR_8 = 0;
     VAR_8 = 0;
     FUNC_5(VAR_0, VAR_8);
            FUNC_4(4000000);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  DLL out of reset\n", (uint32_t) VAR_8);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_8);
 }



        FUNC_5(VAR_0, VAR_7->dfa_memcfg0_base);
        FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  port enables\n", VAR_7->dfa_memcfg0_base);
        FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_7->dfa_memcfg0_base);
        FUNC_4(4000000);

        FUNC_5(VAR_1, VAR_7->dfa_memcfg1_base);
        FUNC_6("CVMX_DFA_MEMCFG1: 0x%08x\n", VAR_7->dfa_memcfg1_base);
        FUNC_1(FUNC_2(), VAR_1 & ~(1ull<<63), VAR_7->dfa_memcfg1_base);

        if (VAR_7->p0_ena ==1)
        {
            FUNC_5(VAR_3, VAR_7->mrs_dat_p0bunk0);
            FUNC_6("CVMX_DFA_MEMRLD : 0x%08x  p0_ena memrld\n", VAR_7->mrs_dat_p0bunk0);
            FUNC_1(FUNC_2(), VAR_3 & ~(1ull<<63), VAR_7->mrs_dat_p0bunk0);

            VAR_10 = ( VAR_7->dfa_memcfg0_base |
                            (1 << 23) |
                            (1 << 25)
                          );

            FUNC_5(VAR_0, VAR_10);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  p0_init/bunk_init\n", VAR_10);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_10);
            FUNC_4(VAR_6);
            FUNC_6("Delay.....\n");
            FUNC_5(VAR_0, VAR_7->dfa_memcfg0_base);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  back to base\n", VAR_7->dfa_memcfg0_base);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_7->dfa_memcfg0_base);
        }

        if (VAR_7->p1_ena ==1)
        {
            FUNC_5(VAR_3, VAR_7->mrs_dat_p1bunk0);
            FUNC_6("CVMX_DFA_MEMRLD : 0x%08x  p1_ena memrld\n", VAR_7->mrs_dat_p1bunk0);
            FUNC_1(FUNC_2(), VAR_3 & ~(1ull<<63), VAR_7->mrs_dat_p1bunk0);

            VAR_10 = ( VAR_7->dfa_memcfg0_base |
                            (1 << 24) |
                            (1 << 25)
                          );
            FUNC_5(VAR_0, VAR_10);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  p1_init/bunk_init\n", VAR_10);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_10);
            FUNC_4(VAR_6);
            FUNC_6("Delay.....\n");
            FUNC_5(VAR_0, VAR_7->dfa_memcfg0_base);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  back to base\n", VAR_7->dfa_memcfg0_base);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_7->dfa_memcfg0_base);
 }


        if ((VAR_7->p0_ena ==1) && (VAR_7->bunkport == 2))
        {
            FUNC_5(VAR_3, VAR_7->mrs_dat_p0bunk1);
            FUNC_6("CVMX_DFA_MEMRLD : 0x%08x  p0_ena memrld\n", VAR_7->mrs_dat_p0bunk1);
            FUNC_1(FUNC_2(), VAR_3 & ~(1ull<<63), VAR_7->mrs_dat_p0bunk1);

            VAR_10 = ( VAR_7->dfa_memcfg0_base |
                            (1 << 23) |
                            (2 << 25)
                          );
            FUNC_5(VAR_0, VAR_10);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  p0_init/bunk_init\n", VAR_10);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_10);
            FUNC_4(VAR_6);
            FUNC_6("Delay.....\n");

            if (VAR_7->p1_ena == 1)
            {
                FUNC_5(VAR_0, VAR_7->dfa_memcfg0_base);
                FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  px_init rearm\n", VAR_7->dfa_memcfg0_base);
                FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_7->dfa_memcfg0_base);
            }
        }

        if ((VAR_7->p1_ena == 1) && (VAR_7->bunkport == 2))
        {
            FUNC_5(VAR_3, VAR_7->mrs_dat_p1bunk1);
            FUNC_6("CVMX_DFA_MEMRLD : 0x%08x  p1_ena memrld\n", VAR_7->mrs_dat_p1bunk1);
            FUNC_1(FUNC_2(), VAR_3 & ~(1ull<<63), VAR_7->mrs_dat_p1bunk1);

            VAR_10 = ( VAR_7->dfa_memcfg0_base |
                            (1 << 24) |
                            (2 << 25)
                          );
            FUNC_5(VAR_0, VAR_10);
            FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  p1_init/bunk_init\n", VAR_10);
            FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_10);
        }
        FUNC_4(4000000);
        FUNC_6("Delay.....\n");


        VAR_10 = VAR_7->dfa_memcfg0_base |((VAR_7->bunkport >= 1) << 25) | ((VAR_7->bunkport == 2) << 26);
        FUNC_5(VAR_0, VAR_10);
        FUNC_6("CVMX_DFA_MEMCFG0: 0x%08x  enable bunks\n", VAR_10);
        FUNC_1(FUNC_2(), VAR_0 & ~(1ull<<63), VAR_10);
        FUNC_4(VAR_6);
        FUNC_6("Delay.....\n");


        VAR_9 = FUNC_3 (VAR_2);
        VAR_9 = 1;
 FUNC_5 (VAR_2, VAR_9);
        FUNC_6("CVMX_DFA_MEMCFG2: 0x%08x  silo reset start\n", (uint32_t) VAR_9);
        VAR_9 = 0;
 FUNC_5 (VAR_2, VAR_9);
        FUNC_6("CVMX_DFA_MEMCFG2: 0x%08x  silo reset done\n", (uint32_t) VAR_9);
    }
}
