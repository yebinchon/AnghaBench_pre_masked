
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
typedef TYPE_3__ cvmx_mgmt_port_state_t ;
typedef int cvmx_mgmt_port_result_t ;
struct TYPE_7__ {int pre_align; int pad_len; int vlan_len; int pre_free; int ctl_mcst; int ctl_bck; int ctl_drp; int pre_strp; int pre_chk; scalar_t__ ctl_smac; } ;
struct TYPE_10__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_agl_gmx_rxx_frm_ctl_t ;
struct TYPE_8__ {int en; } ;
struct TYPE_11__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_5__ cvmx_agl_gmx_inf_mode_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

cvmx_mgmt_port_result_t FUNC_8(int VAR_5)
{
    cvmx_mgmt_port_state_t *VAR_6;
    cvmx_agl_gmx_inf_mode_t VAR_7;
    cvmx_agl_gmx_rxx_frm_ctl_t VAR_8;

    if ((VAR_5 < 0) || (VAR_5 >= FUNC_2()))
        return VAR_1;

    VAR_6 = VAR_4 + VAR_5;

    FUNC_5(&VAR_6->lock);

    VAR_8.u64 = 0;
    VAR_8.s.pre_align = 1;
    VAR_8.s.pad_len = 1;
    VAR_8.s.vlan_len = 1;
    VAR_8.s.pre_free = 1;
    VAR_8.s.ctl_smac = 0;
    VAR_8.s.ctl_mcst = 1;
    VAR_8.s.ctl_bck = 1;
    VAR_8.s.ctl_drp = 1;
    VAR_8.s.pre_strp = 1;
    VAR_8.s.pre_chk = 1;
    FUNC_7(FUNC_0(VAR_5), VAR_8.u64);


    if (FUNC_1(VAR_3))
    {
        VAR_7.u64 = 0;
        VAR_7.s.en = 1;
        FUNC_7(VAR_0, VAR_7.u64);
    }


    FUNC_4(VAR_5, FUNC_3(VAR_5));

    FUNC_6(&VAR_6->lock);
    return VAR_2;
}
