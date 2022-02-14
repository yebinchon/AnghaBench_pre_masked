
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int q_len; } ;
struct oce_rq {TYPE_2__* cq; int parent; TYPE_1__ cfg; } ;
struct TYPE_6__ {scalar_t__ enable_hwlro; } ;
struct TYPE_5__ {int cq_id; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (struct oce_rq*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

int
FUNC_2(struct oce_rq *VAR_1)
{
 POCE_SOFTC VAR_2 = (POCE_SOFTC) VAR_1->parent;
 int VAR_3;

 if(VAR_2->enable_hwlro)
  VAR_3 = FUNC_0(VAR_1, 960);
 else
  VAR_3 = FUNC_0(VAR_1, VAR_1->cfg.q_len - 1);

 if (VAR_3 == 0)
  FUNC_1(VAR_1->parent, VAR_1->cq->cq_id, 0, VAR_0);

 return VAR_3;
}
