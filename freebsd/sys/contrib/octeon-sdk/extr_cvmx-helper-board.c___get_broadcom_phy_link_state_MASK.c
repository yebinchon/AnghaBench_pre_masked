
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static cvmx_helper_link_info_t FUNC_1(int VAR_0)
{
    cvmx_helper_link_info_t VAR_1;
    int VAR_2;

    VAR_1.u64 = 0;


    VAR_2 = FUNC_0(VAR_0 >> 8, VAR_0 & 0xff, 0x19);
    switch ((VAR_2>>8) & 0x7)
    {
        case 0:
            VAR_1.u64 = 0;
            break;
        case 1:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 0;
            VAR_1.s.speed = 10;
            break;
        case 2:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 1;
            VAR_1.s.speed = 10;
            break;
        case 3:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 0;
            VAR_1.s.speed = 100;
            break;
        case 4:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 1;
            VAR_1.s.speed = 100;
            break;
        case 5:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 1;
            VAR_1.s.speed = 100;
            break;
        case 6:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 0;
            VAR_1.s.speed = 1000;
            break;
        case 7:
            VAR_1.s.link_up = 1;
            VAR_1.s.full_duplex = 1;
            VAR_1.s.speed = 1000;
            break;
    }
    return VAR_1;
}
