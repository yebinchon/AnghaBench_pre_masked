
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int dfa_memcfg0_base; int dfa_memcfg1_base; int mrs_dat_p0bunk0; int mrs_dat_p1bunk0; int mrs_dat_p0bunk1; int mrs_dat_p1bunk1; int p0_ena; int p1_ena; int bunkport; } ;
typedef TYPE_1__ rldram_csr_config_t ;
struct TYPE_6__ {char* addr_rld0_fb_str; char* addr_rld0_bb_str; char* addr_rld1_fb_str; char* addr_rld1_bb_str; int rld1_bunks; int rld0_bunks; int rld0_mbytes; int rld1_mbytes; int cpu_hz; int max_rld_clock_mhz; } ;
typedef TYPE_2__ llm_descriptor_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(llm_descriptor_t *VAR_3, rldram_csr_config_t *VAR_4)
{
    char *VAR_5;
    char *VAR_6;
    char *VAR_7;
    char *VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 20;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16 = 6;
    int VAR_17;
    int VAR_18 = 99;
    int VAR_19 = 0;
    int VAR_20 = 0;
    int VAR_21 = 1;
    uint32_t VAR_22;
    int VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = 0;
    int VAR_27 = 0;
    int VAR_28 = 0;
    int VAR_29 = 0;
    int VAR_30;
    int VAR_31 = 0;
    int VAR_32 = 0;
    int VAR_33 = 32;
    int VAR_34;
    int VAR_35 = 8;
    int VAR_36;
    int VAR_37;
    int VAR_38 = 0;
    int VAR_39 = 1;
    int VAR_40 = 0;
    int VAR_41 = 0;
    int VAR_42 = 0;
    int VAR_43 = 1;
    int VAR_44;
    int VAR_45;
    int VAR_46 = 1;
    int VAR_47 = 1;
    int VAR_48 = 2;
    int VAR_49 = 0x0;

    if (!VAR_3)
        return -1;



    VAR_5 = VAR_3->addr_rld0_fb_str;
    VAR_6 = VAR_3->addr_rld0_bb_str;
    VAR_7 = VAR_3->addr_rld1_fb_str;
    VAR_8 = VAR_3->addr_rld1_bb_str;

    VAR_27 = !!VAR_3->rld1_bunks;
    VAR_28 = !!VAR_3->rld0_bunks;



    if (VAR_27 && VAR_28)
    {
        VAR_29 = FUNC_0(VAR_3->rld0_mbytes, VAR_3->rld1_mbytes);
        VAR_31 = FUNC_0(VAR_3->rld0_bunks, VAR_3->rld1_bunks);
    }
    else if (VAR_27)
    {
        VAR_29 = VAR_3->rld1_mbytes;
        VAR_31 = VAR_3->rld1_bunks;
    }
    else if (VAR_28)
    {
        VAR_29 = VAR_3->rld0_mbytes;
        VAR_31 = VAR_3->rld0_bunks;
    }
    else
        return -1;

    uint32_t VAR_50 = VAR_3->cpu_hz/1000000;




    if (VAR_50 <= 367)
    {
        VAR_38 = 0;
    }
    else
    {
        VAR_38 = 1;
    }


    if (FUNC_1(VAR_0))
    {
        uint32_t VAR_51 = VAR_3->max_rld_clock_mhz;
        if (!VAR_51)
        {
            VAR_51 = 400;
            FUNC_2("Warning, using default max_rld_clock_mhz of: %lu MHz\n", (unsigned long)VAR_51);
        }


        VAR_48 = VAR_50/VAR_51;
        if (VAR_48 * VAR_51 < VAR_50)
            VAR_48++;

        if (VAR_48 > 4)
        {
            FUNC_2("ERROR: CN58XX LLM clock divisor out of range\n");
            goto TERMINATE;
        }
        if (VAR_48 < 2)
            VAR_48 = 2;

        FUNC_2("Using llm clock divisor: %d, llm clock is: %lu MHz\n", VAR_48, (unsigned long)VAR_50/VAR_48);






        if (VAR_48 == 2)
            VAR_49 = 0;
        else
            VAR_49 = VAR_48 - 1;


        if (VAR_48 == 0x3)
            VAR_47 = 2;


        if ((unsigned long)VAR_50/VAR_48 >= 375)
            VAR_38 += 1;
    }

    VAR_9 = (1000000+(VAR_50-1)) / VAR_50;




    if (VAR_10 != 0)
    {
        goto TERMINATE;
    }




    VAR_17 = VAR_9 * VAR_48;
    VAR_12 = ((VAR_11 * 1000)/VAR_17);
    VAR_13 = ((VAR_11 * 1000) % VAR_17);

    if (VAR_13 != 0)
    {
        VAR_12 = VAR_12 + 1;
    }

    if (VAR_12 & 1)
    {
        VAR_12 = VAR_12 + 1;
    }

    if (VAR_12 < 4)
    {
        VAR_12 = 4;
    }
    else if (VAR_12 > 8)
    {
        goto TERMINATE;
    }



    VAR_14 = VAR_12;
    VAR_15 = VAR_14 + 1;

    if (VAR_12 == 4)
    {
        VAR_18 = 1;
    }
    else if (VAR_12 == 6)
    {
        VAR_18 = 2;
    }
    else if (VAR_12 == 8)
    {
        VAR_18 = 3;
    }
    else
    {
        goto TERMINATE;
    }

    VAR_22 = ( (VAR_19 << 9) | (VAR_20 << 8) | (VAR_21 << 7) | VAR_18 );


    if (VAR_31 == 1)
    {
        goto CALC_PBUNK;
    }





    VAR_25 = FUNC_3(VAR_22, VAR_5);
    VAR_26 = FUNC_3(VAR_22, VAR_6);
    VAR_23 = FUNC_3(VAR_22, VAR_7);
    VAR_24 = FUNC_3(VAR_22, VAR_8);



    CALC_PBUNK:




    if (VAR_31 == 2)
    {
        VAR_30 = (VAR_29 / 2);
    }
    else
    {
        VAR_30 = VAR_29;
    }
    if (VAR_30 == 16)
    {
        VAR_32 = 0;
    }
    else if (VAR_30 == 32)
    {
        VAR_32 = 1;
    }
    else if (VAR_30 == 64)
    {
        VAR_32 = 2;
    }
    else if (VAR_30 == 128)
    {
        VAR_32 = 3;
    }
    else if (VAR_30 == 256)
    {
        VAR_32 = 4;
    }
    else if (VAR_30 == 512)
    {
    }




    VAR_34 = (VAR_33 * 1000 * 1000) / (VAR_35 * 1024);
    VAR_36 = ((VAR_34 * 1000) / (VAR_9 * 512));
    VAR_37 = ((VAR_34 * 1000) % (VAR_9 * 512));
    if (VAR_38 > 3)
    {
        goto TERMINATE;
    }

    VAR_43 = 1;


    VAR_44 = ((((VAR_14 + VAR_43) * 2 + VAR_38 + VAR_40) + 1) / 2);
    if (VAR_44 & 1)
    {
        VAR_44 = VAR_44 + 1;
    }
    VAR_44 = VAR_44 - VAR_15 +1 ;
    if (VAR_44 < 0)
    {
        goto TERMINATE;
    }


    VAR_45 = (((VAR_15 + VAR_43) * 2 - VAR_38 + VAR_39) / 2);
    if (VAR_45 & 1)
    {
        VAR_45 = VAR_45 + 1;
    }
    VAR_45 = VAR_45 - VAR_14 + 1;
    if (VAR_45 < 0)
    {
        goto TERMINATE;
    }


    VAR_41 = 0;
    VAR_41 = ( VAR_27 |
                         (VAR_28 << 1) |
                         (VAR_10 << 3) |
                         (VAR_47 << 4) |
                         (VAR_44 << 6) |
                         (VAR_45 << 10) |
                         (VAR_39 << 14) |
                         (VAR_40 << 16) |
                         (0 << 18) |
                         (VAR_32 << 19) |
                         (VAR_46 << 22) |
        (VAR_49 << 28 )
                       );


    VAR_42 = 0;
    VAR_42 = ( VAR_36 |
                         (VAR_38 << 4) |
                         (VAR_14 << 8) |
                         (VAR_15 << 12) |
                         (VAR_12 << 16) |
                         (VAR_16 << 20)
                       );




    VAR_4->dfa_memcfg0_base = VAR_41;
    VAR_4->dfa_memcfg1_base = VAR_42;
    VAR_4->mrs_dat_p0bunk0 = VAR_23;
    VAR_4->mrs_dat_p1bunk0 = VAR_25;
    VAR_4->mrs_dat_p0bunk1 = VAR_24;
    VAR_4->mrs_dat_p1bunk1 = VAR_26;
    VAR_4->p0_ena = VAR_27;
    VAR_4->p1_ena = VAR_28;
    VAR_4->bunkport = VAR_31;


    return(0);
    TERMINATE:
    return(-1);

}
