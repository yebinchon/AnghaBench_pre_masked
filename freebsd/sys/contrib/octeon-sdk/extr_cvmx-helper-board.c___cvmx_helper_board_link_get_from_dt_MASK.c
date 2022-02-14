
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ phy_addr; scalar_t__ direct_connect; int phy_type; } ;
typedef TYPE_2__ cvmx_phy_info_t ;
struct TYPE_10__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_12__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_13__ {scalar_t__ board_type; } ;



 scalar_t__ VAR_0 ;

 TYPE_3__ FUNC_0 (scalar_t__) ;
 TYPE_3__ FUNC_1 (int) ;
 TYPE_3__ FUNC_2 (scalar_t__) ;
 TYPE_2__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_4__* FUNC_5 () ;

cvmx_helper_link_info_t FUNC_6(int VAR_1)
{
    cvmx_helper_link_info_t VAR_2;
    cvmx_phy_info_t VAR_3;

    VAR_2.u64 = 0;
    if (FUNC_5()->board_type == VAR_0)
    {

        VAR_2.s.link_up = 1;
        VAR_2.s.full_duplex = 1;
        VAR_2.s.speed = 1000;
        return VAR_2;
    }
    VAR_3 = FUNC_3(VAR_1);


    if (VAR_3.phy_addr < 0) return VAR_2;

    if (VAR_3.direct_connect == 0)
        FUNC_4(VAR_1);
    switch(VAR_3.phy_type)
    {
        case 129:
            VAR_2 = FUNC_0(VAR_3.phy_addr);
            break;
        case 128:
            VAR_2 = FUNC_2(VAR_3.phy_addr);
            break;
        default:
            VAR_2 = FUNC_1(VAR_1);
    }
    return VAR_2;

}
