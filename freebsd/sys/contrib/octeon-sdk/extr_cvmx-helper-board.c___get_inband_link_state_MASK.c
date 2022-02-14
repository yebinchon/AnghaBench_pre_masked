
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int speed; int full_duplex; int link_up; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_6__ {int speed; int duplex; int status; } ;
struct TYPE_9__ {TYPE_1__ s; int u64; } ;
typedef TYPE_4__ cvmx_gmxx_rxx_rx_inbnd_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static cvmx_helper_link_info_t FUNC_4(int VAR_0)
{
    cvmx_helper_link_info_t VAR_1;
    cvmx_gmxx_rxx_rx_inbnd_t VAR_2;
    int VAR_3 = FUNC_2(VAR_0);
    int VAR_4 = FUNC_1(VAR_0);

    VAR_1.u64 = 0;
    VAR_2.u64 = FUNC_3(FUNC_0(VAR_4, VAR_3));
    VAR_1.s.link_up = VAR_2.s.status;
    VAR_1.s.full_duplex = VAR_2.s.duplex;
    switch (VAR_2.s.speed)
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
    return VAR_1;
}
