
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ cvmx_mgmt_port_state_t ;
struct TYPE_5__ {int bcst; int mcst; int cam_mode; } ;
struct TYPE_7__ {int u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_agl_gmx_rxx_adr_ctl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(int VAR_3, int VAR_4)
{
    cvmx_mgmt_port_state_t *VAR_5;
    cvmx_agl_gmx_rxx_adr_ctl_t VAR_6;

    if ((VAR_3 < 0) || (VAR_3 >= FUNC_2()))
        return;

    VAR_5 = VAR_2 + VAR_3;

    FUNC_4(&VAR_5->lock);

    VAR_6.u64 = FUNC_3(FUNC_1(VAR_3));


    if (!VAR_6.s.bcst)
 VAR_6.s.bcst = 1;

    if ((VAR_4 & VAR_0) || (VAR_4 & VAR_1))
 VAR_6.s.mcst = 2;
    else
 VAR_6.s.mcst = 1;

    if (VAR_4 & VAR_1)
 VAR_6.s.cam_mode = 0;
    else
 VAR_6.s.cam_mode = 1;

    FUNC_6(FUNC_1(VAR_3), VAR_6.u64);

    if (VAR_4 & VAR_1)
 FUNC_6(FUNC_0(VAR_3), 0);
    else
 FUNC_6(FUNC_0(VAR_3), 1);

    FUNC_5(&VAR_5->lock);
}
