
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ cvmx_mgmt_port_state_t ;
typedef int cvmx_mgmt_port_result_t ;
struct TYPE_5__ {scalar_t__ en; } ;
struct TYPE_7__ {int u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_agl_gmx_prtx_cfg_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

cvmx_mgmt_port_result_t FUNC_6(int VAR_3)
{
    cvmx_mgmt_port_state_t *VAR_4;
    cvmx_agl_gmx_prtx_cfg_t VAR_5;

    if ((VAR_3 < 0) || (VAR_3 >= FUNC_1()))
        return VAR_0;

    VAR_4 = VAR_2 + VAR_3;

    FUNC_3(&VAR_4->lock);

    VAR_5.u64 = FUNC_2(FUNC_0(VAR_3));
    VAR_5.s.en = 0;
    FUNC_5(FUNC_0(VAR_3), VAR_5.u64);

    FUNC_4(&VAR_4->lock);
    return VAR_1;
}
