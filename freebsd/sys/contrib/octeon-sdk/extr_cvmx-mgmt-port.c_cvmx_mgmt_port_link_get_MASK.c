
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int port; } ;
typedef TYPE_2__ cvmx_mgmt_port_state_t ;
struct TYPE_7__ {int full_duplex; int link_up; int speed; } ;
struct TYPE_9__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;


 TYPE_3__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 TYPE_2__* VAR_0 ;

cvmx_helper_link_info_t FUNC_3(int VAR_1)
{
    cvmx_mgmt_port_state_t *VAR_2;
    cvmx_helper_link_info_t VAR_3;

    VAR_2 = VAR_0 + VAR_1;
    VAR_3.u64 = 0;

    if (VAR_1 > FUNC_1())
    {
        FUNC_2("WARNING: Invalid port %d\n", VAR_1);
        return VAR_3;
    }

    if (VAR_2->port != -1)
        return FUNC_0(VAR_2->port);
    else
    {
        VAR_3.s.full_duplex = 1;
        VAR_3.s.link_up = 1;
        VAR_3.s.speed = 100;
        return VAR_3;
    }
    return VAR_3;
}
