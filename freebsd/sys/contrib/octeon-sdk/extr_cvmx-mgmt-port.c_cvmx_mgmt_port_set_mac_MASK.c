
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int mac; int lock; } ;
typedef TYPE_2__ cvmx_mgmt_port_state_t ;
typedef int cvmx_mgmt_port_result_t ;
struct TYPE_5__ {int cam_mode; int bcst; scalar_t__ mcst; } ;
struct TYPE_7__ {int u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_agl_gmx_rxx_adr_ctl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

cvmx_mgmt_port_result_t FUNC_12(int VAR_3, uint64_t VAR_4)
{
    cvmx_mgmt_port_state_t *VAR_5;
    cvmx_agl_gmx_rxx_adr_ctl_t VAR_6;

    if ((VAR_3 < 0) || (VAR_3 >= FUNC_8()))
        return VAR_0;

    VAR_5 = VAR_2 + VAR_3;

    FUNC_9(&VAR_5->lock);

    VAR_6.u64 = 0;
    VAR_6.s.cam_mode = 1;
    VAR_6.s.mcst = 0;
    VAR_6.s.bcst = 1;
    FUNC_11(FUNC_7(VAR_3), VAR_6.u64);


    FUNC_11(FUNC_0(VAR_3), (VAR_4 >> 40) & 0xff);
    FUNC_11(FUNC_1(VAR_3), (VAR_4 >> 32) & 0xff);
    FUNC_11(FUNC_2(VAR_3), (VAR_4 >> 24) & 0xff);
    FUNC_11(FUNC_3(VAR_3), (VAR_4 >> 16) & 0xff);
    FUNC_11(FUNC_4(VAR_3), (VAR_4 >> 8) & 0xff);
    FUNC_11(FUNC_5(VAR_3), (VAR_4 >> 0) & 0xff);
    FUNC_11(FUNC_6(VAR_3), 1);
    VAR_5->mac = VAR_4;

    FUNC_10(&VAR_5->lock);
    return VAR_1;
}
