
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


struct TYPE_8__ {scalar_t__ srio; } ;
struct TYPE_10__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_4__ cvmx_sriox_status_reg_t ;
struct TYPE_9__ {int qlm_spd; int qlm_cfg; } ;
struct TYPE_11__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_5__ cvmx_mio_qlmx_cfg_t ;
struct TYPE_7__ {int speed; scalar_t__ mode; } ;
struct TYPE_12__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_6__ cvmx_gmxx_inf_mode_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

int FUNC_5(int VAR_6)
{
    cvmx_mio_qlmx_cfg_t VAR_7;

    if (FUNC_3(VAR_4))
    {
        VAR_7.u64 = FUNC_4(FUNC_1(VAR_6));

        if (VAR_7.s.qlm_spd == 15)
            return -1;

        switch (VAR_7.s.qlm_cfg)
        {
            case 0:
                return 3;
            case 1:
                return 9;
            case 2:
                return 1;
            case 3:
                return 2;
            case 7:
                return 10;
            default: return -1;
        }
    }
    else if (FUNC_3(VAR_2))
    {
        VAR_7.u64 = FUNC_4(FUNC_1(VAR_6));

        if (VAR_7.s.qlm_spd == 15)
            return -1;

        switch (VAR_7.s.qlm_cfg)
        {
            case 0x9:
                return 1;
            case 0xb:
                return 2;
            case 0x0:
            case 0x8:
            case 0x2:
            case 0xa:
                return 3;
            case 0x1:
            case 0x3:
                return 4;
            case 0x4:
            case 0x6:
                return 5;
            case 0x5:
            case 0x7:
                if (!FUNC_3(VAR_3))
                    return 6;
            default:
                return -1;
        }
    }
    else if (FUNC_3(VAR_1))
    {
        cvmx_sriox_status_reg_t VAR_8;

        if (VAR_6 == 2)
        {
            cvmx_gmxx_inf_mode_t VAR_9;
            VAR_9.u64 = FUNC_4(FUNC_0(0));
            if (VAR_9.s.speed == 15)
                return -1;
            else if(VAR_9.s.mode == 0)
                return 1;
            else
                return 2;
        }
        VAR_8.u64 = FUNC_4(FUNC_2(VAR_6));
        if (VAR_8.s.srio)
            return 4;
        else
            return 3;
    }
    else if (FUNC_3(VAR_0))
    {
        VAR_7.u64 = FUNC_4(FUNC_1(VAR_6));

        if (VAR_7.s.qlm_spd == 15)
            return -1;

        switch(VAR_6)
        {
            case 0:
                switch (VAR_7.s.qlm_cfg)
                {
                    case 0:
                        return 3;
                    case 2:
                        return 1;
                    case 3:
                        return 2;
                    default: return -1;
                }
                break;
            case 1:
                switch (VAR_7.s.qlm_cfg)
                {
                    case 0:
                        return 7;
                    case 1:
                        return 8;
                    default: return -1;
                }
                break;
            case 2:
                switch (VAR_7.s.qlm_cfg)
                {
                    case 2:
                        return 1;
                    case 3:
                        return 2;
                    default: return -1;
                }
                break;
        }
    }
    else if (FUNC_3(VAR_5))
    {
        VAR_7.u64 = FUNC_4(FUNC_1(VAR_6));

        if (VAR_7.s.qlm_spd == 15)
            return -1;

        switch(VAR_6)
        {
            case 0:
                if (VAR_7.s.qlm_cfg == 2)
                    return 1;
                break;
            case 1:
                switch (VAR_7.s.qlm_cfg)
                {
                    case 0:
                        return 7;
                    case 1:
                        return 8;
                    default: return -1;
                }
                break;
        }
    }
    return -1;
}
