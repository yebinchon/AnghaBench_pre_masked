
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int link; int dup; int speed; } ;
struct TYPE_17__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_3__ cvmx_pcsx_sgmx_lp_adv_reg_t ;
struct TYPE_18__ {void* u64; } ;
typedef TYPE_4__ cvmx_pcsx_mrx_status_reg_t ;
struct TYPE_19__ {void* u64; } ;
typedef TYPE_5__ cvmx_pcsx_miscx_ctl_reg_t ;
struct TYPE_20__ {void* u64; } ;
typedef TYPE_6__ cvmx_pcsx_anx_adv_reg_t ;
struct TYPE_16__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_21__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_7__ cvmx_helper_link_info_t ;
struct TYPE_22__ {int board_type; scalar_t__ fdt_addr; } ;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_7__ FUNC_5 (int) ;
 TYPE_7__ FUNC_6 (int) ;
 TYPE_7__ FUNC_7 (int) ;
 TYPE_7__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 TYPE_7__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 TYPE_8__* FUNC_14 () ;

cvmx_helper_link_info_t FUNC_15(int VAR_6)
{
    cvmx_helper_link_info_t VAR_7;
    int VAR_8;
    int VAR_9 = 0;


    if (FUNC_14()->fdt_addr)
    {
        return FUNC_5(VAR_6);
    }



    if (&FUNC_12)
        return FUNC_12(VAR_6);


    VAR_7.u64 = 0;




    switch (FUNC_14()->board_type)
    {
        case 128:

            VAR_7.s.link_up = 1;
            VAR_7.s.full_duplex = 1;
            VAR_7.s.speed = 1000;
            return VAR_7;
        case 133:
        case 131:
        case 132:
            break;
        case 142:
        case 152:
        case 153:

        case 151:


            if (VAR_6 == 1)
            {
                VAR_7.s.link_up = 1;
                VAR_7.s.full_duplex = 1;
                VAR_7.s.speed = 1000;
                return VAR_7;
            }

            break;
        case 135:
        case 139:
        case 138:
        case 137:

            if (VAR_6 == VAR_0)
                VAR_9 = 1;
            break;
        case 141:
        case 140:
        case 136:

            if ((VAR_6 >= VAR_0) && (VAR_6 < (VAR_0 + 2)))
                VAR_9 = 1;
            break;
        case 145:
        case 144:
        case 143:
            if ((VAR_6 >= VAR_0) && (VAR_6 < (VAR_0 + 2))
                && FUNC_9(VAR_6) >= 0 && FUNC_9(VAR_6) <= 1)
                VAR_9 = 1;
            break;
        case 134:
            VAR_9 = 1;
            break;
        case 147:

            if (VAR_6 == 1)
            {
                VAR_7.s.link_up = 1;
                VAR_7.s.full_duplex = 1;
                VAR_7.s.speed = 1000;
                return VAR_7;
            }
            else
                VAR_9 = 1;
            break;
        case 154:

            if (VAR_6 == 2)
            {

                VAR_7.u64 = 0;
                return VAR_7;
            }
            else
            {

                VAR_7.s.link_up = 1;
                VAR_7.s.full_duplex = 1;
                VAR_7.s.speed = 1000;
                return VAR_7;
            }
        case 129:
        case 130:
            VAR_9 = 1;
            break;
    }


    VAR_8 = FUNC_9(VAR_6);


    if (VAR_8 != -1)
    {
        if (VAR_9)
        {
            VAR_7 = FUNC_6(VAR_8);
        }
        else
        {

            VAR_7 = FUNC_8(VAR_8);
        }
    }
    else if (FUNC_4(VAR_1) || FUNC_4(VAR_4)
             || FUNC_4(VAR_2))
    {



        VAR_7 = FUNC_7(VAR_6);
    }
    else
    {



        VAR_7.u64 = 0;
    }


    if (!VAR_7.s.link_up)
        VAR_7.u64 = 0;

    return VAR_7;
}
