
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_7__ {int fp_task; int * fp_taskqueue; } ;
typedef TYPE_2__ qla_tx_fp_t ;
struct TYPE_8__ {int sds_idx; TYPE_5__* ha; } ;
typedef TYPE_3__ qla_ivec_t ;
struct TYPE_9__ {int num_sds_rings; TYPE_1__* sds; } ;
typedef TYPE_4__ qla_hw_t ;
struct TYPE_10__ {TYPE_2__* tx_fp; TYPE_4__ hw; struct ifnet* ifp; } ;
typedef TYPE_5__ qla_host_t ;
struct TYPE_6__ {int intr_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1(void *VAR_1)
{
 qla_ivec_t *VAR_2 = VAR_1;
 qla_host_t *VAR_3 ;
 int VAR_4;
 qla_hw_t *VAR_5;
 struct ifnet *VAR_6;
 qla_tx_fp_t *VAR_7;

 VAR_3 = VAR_2->ha;
 VAR_5 = &VAR_3->hw;
 VAR_6 = VAR_3->ifp;

 if ((VAR_4 = VAR_2->sds_idx) >= VAR_3->hw.num_sds_rings)
  return;

 VAR_7 = &VAR_3->tx_fp[VAR_4];
 VAR_5->sds[VAR_4].intr_count++;

 if ((VAR_7->fp_taskqueue != ((void*)0)) &&
  (VAR_6->if_drv_flags & VAR_0))
  FUNC_0(VAR_7->fp_taskqueue, &VAR_7->fp_task);

 return;
}
