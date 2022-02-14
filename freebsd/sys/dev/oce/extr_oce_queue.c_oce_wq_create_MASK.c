
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int q_len; } ;
struct oce_wq {TYPE_2__* ring; TYPE_1__ cfg; int wq_free; int qstate; struct oce_cq* cq; TYPE_3__* parent; } ;
struct oce_nic_tx_cqe {int dummy; } ;
struct oce_eq {size_t cq_valid; struct oce_cq** cq; } ;
struct oce_cq {int cq_handler; struct oce_wq* cb_arg; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {scalar_t__ pidx; scalar_t__ cidx; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct oce_cq* FUNC_1 (TYPE_3__*,struct oce_eq*,int ,int,int ,int,int ,int) ;
 int FUNC_2 (struct oce_wq*) ;
 int FUNC_3 (struct oce_wq*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct oce_wq *VAR_4, struct oce_eq *VAR_5)
{
 POCE_SOFTC VAR_6 = VAR_4->parent;
 struct oce_cq *VAR_7;
 int VAR_8 = 0;


 VAR_7 = FUNC_1(VAR_6,
      VAR_5,
      VAR_0,
      sizeof(struct oce_nic_tx_cqe), 0, 1, 0, 3);
 if (!VAR_7)
  return VAR_1;


 VAR_4->cq = VAR_7;

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8)
  goto error;

 VAR_4->qstate = VAR_2;
 VAR_4->wq_free = VAR_4->cfg.q_len;
 VAR_4->ring->cidx = 0;
 VAR_4->ring->pidx = 0;

 VAR_5->cq[VAR_5->cq_valid] = VAR_7;
 VAR_5->cq_valid++;
 VAR_7->cb_arg = VAR_4;
 VAR_7->cq_handler = VAR_3;

 return 0;

error:
 FUNC_0(VAR_6->dev, "WQ create failed\n");
 FUNC_3(VAR_4);
 return VAR_8;
}
