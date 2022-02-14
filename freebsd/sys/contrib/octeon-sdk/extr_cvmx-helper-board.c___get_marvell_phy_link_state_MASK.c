
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_5__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static cvmx_helper_link_info_t FUNC_1(int VAR_0)
{
    cvmx_helper_link_info_t VAR_1;
    int VAR_2;

    VAR_1.u64 = 0;

    VAR_2 = FUNC_0(VAR_0 >> 8, VAR_0 & 0xff, 17);




    if ((VAR_2 & (1<<11)) == 0)
    {
        int VAR_3 = FUNC_0(VAR_0 >> 8, VAR_0 & 0xff, 0);
        if ((VAR_3 & (1<<12)) == 0)
            VAR_2 |= 1<<11;
    }



    if (VAR_2 & (1<<11))
    {
        VAR_1.s.link_up = 1;
        VAR_1.s.full_duplex = ((VAR_2>>13)&1);
        switch ((VAR_2>>14)&3)
        {
            case 0:
                VAR_1.s.speed = 10;
                break;
            case 1:
                VAR_1.s.speed = 100;
                break;
            case 2:
                VAR_1.s.speed = 1000;
                break;
            case 3:
                VAR_1.u64 = 0;
                break;
        }
    }
    return VAR_1;
}
