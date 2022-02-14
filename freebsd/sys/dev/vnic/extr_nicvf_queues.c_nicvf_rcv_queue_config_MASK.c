
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qs_num; int rq_num; int cfg; int msg; } ;
union nic_mbx {TYPE_1__ rq; } ;
typedef int uint64_t ;
struct rq_cfg {int ena; scalar_t__ tcp_ena; } ;
struct lro_ctrl {struct ifnet* ifp; } ;
struct rcv_queue {int enable; int cq_qs; int cq_idx; int start_rbdr_qs; int start_qs_rbdr_idx; int cont_rbdr_qs; int cont_qs_rbdr_idx; int caching; void* lro_enabled; struct lro_ctrl lro; } ;
struct queue_set {int vnic_id; int rbdr_cnt; struct rcv_queue* rq; } ;
struct nicvf {struct ifnet* ifp; int dev; } ;
struct ifnet {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct nicvf*,int ,int,int) ;
 int FUNC_3 (struct nicvf*,struct queue_set*,int) ;
 int FUNC_4 (struct nicvf*,union nic_mbx*) ;
 int FUNC_5 (struct lro_ctrl*) ;
 scalar_t__ FUNC_6 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_7(struct nicvf *VAR_9, struct queue_set *VAR_10,
    int VAR_11, bool VAR_12)
{
 union nic_mbx VAR_13 = {};
 struct rcv_queue *VAR_14;
 struct rq_cfg VAR_15;
 struct ifnet *VAR_16;
 struct lro_ctrl *VAR_17;

 VAR_16 = VAR_9->ifp;

 VAR_14 = &VAR_10->rq[VAR_11];
 VAR_14->enable = VAR_12;

 VAR_17 = &VAR_14->lro;


 FUNC_2(VAR_9, VAR_5, VAR_11, 0);

 if (!VAR_14->enable) {
  FUNC_3(VAR_9, VAR_10, VAR_11);

  FUNC_5(VAR_17);
  VAR_14->lro_enabled = VAR_0;
  return;
 }


 VAR_14->lro_enabled = VAR_0;
 if ((FUNC_1(VAR_16) & VAR_1) != 0) {
  if (FUNC_6(VAR_17) != 0) {
   FUNC_0(VAR_9->dev,
       "Failed to initialize LRO for RXQ%d\n", VAR_11);
  } else {
   VAR_14->lro_enabled = VAR_8;
   VAR_17->ifp = VAR_9->ifp;
  }
 }

 VAR_14->cq_qs = VAR_10->vnic_id;
 VAR_14->cq_idx = VAR_11;
 VAR_14->start_rbdr_qs = VAR_10->vnic_id;
 VAR_14->start_qs_rbdr_idx = VAR_10->rbdr_cnt - 1;
 VAR_14->cont_rbdr_qs = VAR_10->vnic_id;
 VAR_14->cont_qs_rbdr_idx = VAR_10->rbdr_cnt - 1;

 VAR_14->caching = 1;


 VAR_13.rq.msg = VAR_3;
 VAR_13.rq.qs_num = VAR_10->vnic_id;
 VAR_13.rq.rq_num = VAR_11;
 VAR_13.rq.cfg = (VAR_14->caching << 26) | (VAR_14->cq_qs << 19) |
     (VAR_14->cq_idx << 16) | (VAR_14->cont_rbdr_qs << 9) |
     (VAR_14->cont_qs_rbdr_idx << 8) | (VAR_14->start_rbdr_qs << 1) |
     (VAR_14->start_qs_rbdr_idx);
 FUNC_4(VAR_9, &VAR_13);

 VAR_13.rq.msg = VAR_2;
 VAR_13.rq.cfg = (1UL << 63) | (1UL << 62) | (VAR_10->vnic_id << 0);
 FUNC_4(VAR_9, &VAR_13);





 VAR_13.rq.msg = VAR_4;
 VAR_13.rq.cfg = (1UL << 62) | (VAR_7 << 8);
 FUNC_4(VAR_9, &VAR_13);

 FUNC_2(VAR_9, VAR_6, 0, 0x00);


 VAR_15.ena = 1;
 VAR_15.tcp_ena = 0;
 FUNC_2(VAR_9, VAR_5, VAR_11,
     *(uint64_t *)&VAR_15);
}
