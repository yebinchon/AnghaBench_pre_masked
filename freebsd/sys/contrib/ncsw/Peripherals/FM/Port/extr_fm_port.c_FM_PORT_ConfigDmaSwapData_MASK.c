
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int dma_swap_data; } ;
struct TYPE_5__ {TYPE_1__ dfltCfg; struct TYPE_5__* p_FmPortDriverParam; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;
typedef enum fman_port_dma_swap { ____Placeholder_fman_port_dma_swap } fman_port_dma_swap ;
typedef scalar_t__ e_FmDmaSwapOption ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

t_Error FUNC_1(t_Handle VAR_2, e_FmDmaSwapOption VAR_3)
{
    t_FmPort *VAR_4 = (t_FmPort*)VAR_2;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_FmPortDriverParam, VAR_0);

    VAR_4->p_FmPortDriverParam->dfltCfg.dma_swap_data =
            (enum fman_port_dma_swap)VAR_3;

    return VAR_1;
}
