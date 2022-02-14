
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int majorRev; } ;
struct TYPE_13__ {int portType; TYPE_4__* p_FmPortBmiRegs; TYPE_1__ fmRevInfo; int port; } ;
typedef TYPE_5__ t_FmPort ;
struct TYPE_14__ {int errorsDiscardMask; } ;
typedef TYPE_6__ t_FmPcdCtrlParamsPage ;
typedef int t_Error ;
typedef int fmPortFrameErrSelect_t ;
struct TYPE_11__ {int fmbm_ofsdm; } ;
struct TYPE_10__ {int fmbm_rfsdm; } ;
struct TYPE_12__ {TYPE_3__ ohPortBmiRegs; TYPE_2__ rxPortBmiRegs; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,void**) ;
 int FUNC_2 (int volatile) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int volatile*) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int ) ;

t_Error FUNC_7(t_Handle VAR_8, fmPortFrameErrSelect_t VAR_9)
{
    t_FmPort *VAR_10 = (t_FmPort*)VAR_8;
    volatile uint32_t *VAR_11 = ((void*)0);
    int VAR_12;

    FUNC_4(VAR_11);
    VAR_12 = FUNC_6(&VAR_10->port, (uint32_t)VAR_9);
    if (VAR_12 != 0)
        FUNC_3(VAR_3, VAR_1, ("fman_port_set_err_mask"));
    return VAR_2;
}
