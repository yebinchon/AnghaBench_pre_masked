
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int if_id; } ;
struct oce_rq {TYPE_2__* ring; scalar_t__ qstate; TYPE_1__ cfg; struct oce_cq* cq; TYPE_3__* parent; } ;
struct oce_nic_rx_cqe {int dummy; } ;
struct oce_eq {size_t cq_valid; struct oce_cq** cq; } ;
struct oce_cq {int cq_handler; struct oce_rq* cb_arg; } ;
struct TYPE_7__ {scalar_t__ enable_hwlro; } ;
struct TYPE_6__ {scalar_t__ pidx; scalar_t__ cidx; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct oce_cq* FUNC_0 (TYPE_3__*,struct oce_eq*,int ,int,int ,int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct oce_rq *VAR_4, uint32_t VAR_5, struct oce_eq *VAR_6)
{
 POCE_SOFTC VAR_7 = VAR_4->parent;
 struct oce_cq *VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6,
          VAR_7->enable_hwlro ? VAR_1 : VAR_0,
   sizeof(struct oce_nic_rx_cqe), 0, 1, 0, 3);

 if (!VAR_8)
  return VAR_2;

 VAR_4->cq = VAR_8;
 VAR_4->cfg.if_id = VAR_5;


 VAR_4->qstate = 0;
 VAR_4->ring->cidx = 0;
 VAR_4->ring->pidx = 0;
 VAR_6->cq[VAR_6->cq_valid] = VAR_8;
 VAR_6->cq_valid++;
 VAR_8->cb_arg = VAR_4;
 VAR_8->cq_handler = VAR_3;

 return 0;

}
