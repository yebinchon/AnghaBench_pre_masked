
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rld0_bunks; int rld1_bunks; int rld0_mbytes; int rld1_mbytes; int max_rld_clock_mhz; int addr_rld1_bb_str; int addr_rld1_fb_str; int addr_rld0_bb_str; int addr_rld0_fb_str; int cpu_hz; } ;
typedef TYPE_1__ llm_descriptor_t ;
struct TYPE_7__ {scalar_t__ board_type; int board_rev_major; } ;
typedef TYPE_2__ cvmx_sysinfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(llm_descriptor_t *VAR_8)
{
    cvmx_sysinfo_t *VAR_9;
    VAR_9 = FUNC_3();

    if (!VAR_8)
        return -1;

    FUNC_4(VAR_8, 0, sizeof(llm_descriptor_t));

    VAR_8->cpu_hz = FUNC_1(VAR_7);

    if (VAR_9->board_type == VAR_2)
    {
        FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 19 20 08 07 06 05 04 03 02 01 00 09 18 17 16 15 14 13 12 11 10");

        FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 20 00 08 07 06 05 04 13 02 01 03 09 18 17 16 15 14 10 12 11 19");


        VAR_8->rld0_bunks = 2;
        VAR_8->rld1_bunks = 2;
        VAR_8->rld0_mbytes = 128;
        VAR_8->rld1_mbytes = 64;
    }
    else if (VAR_9->board_type == VAR_3)
    {
        FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 20 00 08 07 06 05 04 13 02 01 03 09 18 17 16 15 14 10 12 11 19");
        FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 20 00 08 07 06 05 04 13 02 01 03 09 18 17 16 15 14 10 12 11 19");
        VAR_8->rld0_bunks = 2;
        VAR_8->rld1_bunks = 2;
        VAR_8->rld0_mbytes = 128;
        VAR_8->rld1_mbytes = 128;
        VAR_8->max_rld_clock_mhz = 400;
    }
    else if (VAR_9->board_type == VAR_0)
    {
        FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 19 20 08 07 06 05 04 03 02 01 00 09 18 17 16 15 14 13 12 11 10");
        FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 19 20 08 07 06 05 04 03 02 01 00 09 18 17 16 15 14 13 12 11 10");
        VAR_8->rld0_bunks = 2;
        VAR_8->rld1_bunks = 2;
        VAR_8->rld0_mbytes = 128;
        VAR_8->rld1_mbytes = 128;
    }
    else if (VAR_9->board_type == VAR_6)
    {

        if (VAR_9->board_rev_major >= 4)
        {
            FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 13 11 01 02 07 19 03 18 10 12 20 06 04 08 17 05 14 16 00 09 15");
            FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 11 13 04 08 17 05 14 16 00 09 15 06 01 02 07 19 03 18 10 12 20");
            FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 02 19 18 17 16 09 14 13 20 11 10 01 08 03 06 15 04 07 05 12 00");
            FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 19 02 08 03 06 15 04 07 05 12 00 01 18 17 16 09 14 13 20 11 10");
        }
        else
        {
            FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
            FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
            FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
            FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        }

        VAR_8->rld0_bunks = 2;
        VAR_8->rld1_bunks = 2;
        VAR_8->rld0_mbytes = 128;
        VAR_8->rld1_mbytes = 128;
    }
    else if (VAR_9->board_type == VAR_5)
    {
        FUNC_5(VAR_8->addr_rld0_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld0_bb_str, "22 21 19 20 08 07 06 05 04 03 02 01 00 09 18 17 16 15 14 13 12 11 10");
        FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 19 20 08 07 06 05 04 03 02 01 00 09 18 17 16 15 14 13 12 11 10");
        VAR_8->rld0_bunks = 2;
        VAR_8->rld1_bunks = 2;
        VAR_8->rld0_mbytes = 256;
        VAR_8->rld1_mbytes = 256;
        VAR_8->max_rld_clock_mhz = 400;
    }
    else if (VAR_9->board_type == VAR_1)
    {

        VAR_8->rld0_bunks = 1;
        VAR_8->rld0_mbytes = 256;
    }
    else if (VAR_9->board_type == VAR_4)
    {
        FUNC_5(VAR_8->addr_rld0_fb_str, "");
        FUNC_5(VAR_8->addr_rld0_bb_str, "");
        VAR_8->rld0_bunks = 0;
        VAR_8->rld0_mbytes = 0;
        FUNC_5(VAR_8->addr_rld1_fb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        FUNC_5(VAR_8->addr_rld1_bb_str, "22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00");
        VAR_8->rld1_bunks = 2;
        VAR_8->rld1_mbytes = 64;
    }
    else
    {
        FUNC_2("No default LLM configuration available for board %s (%d)\n", FUNC_0(VAR_9->board_type), VAR_9->board_type);
        return -1;
    }

    return(0);
}
