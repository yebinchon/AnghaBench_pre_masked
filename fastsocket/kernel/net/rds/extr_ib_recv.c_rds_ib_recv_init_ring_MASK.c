
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int wr_id; int num_sge; struct ib_sge* sg_list; int * next; } ;
struct rds_ib_recv_work {struct ib_sge* r_sge; TYPE_2__ r_wr; int * r_frag; int * r_ibinc; } ;
struct TYPE_4__ {int w_nr; } ;
struct rds_ib_connection {TYPE_3__* i_mr; scalar_t__ i_recv_hdrs_dma; TYPE_1__ i_recv_ring; struct rds_ib_recv_work* i_recvs; } ;
struct rds_header {int dummy; } ;
struct ib_sge {int length; int lkey; scalar_t__ addr; } ;
struct TYPE_6__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct rds_ib_connection *VAR_2)
{
 struct rds_ib_recv_work *VAR_3;
 u32 VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2->i_recvs; VAR_4 < VAR_2->i_recv_ring.w_nr; VAR_4++, VAR_3++) {
  struct ib_sge *VAR_5;

  VAR_3->r_ibinc = ((void*)0);
  VAR_3->r_frag = ((void*)0);

  VAR_3->r_wr.next = ((void*)0);
  VAR_3->r_wr.wr_id = VAR_4;
  VAR_3->r_wr.sg_list = VAR_3->r_sge;
  VAR_3->r_wr.num_sge = VAR_1;

  VAR_5 = &VAR_3->r_sge[0];
  VAR_5->addr = VAR_2->i_recv_hdrs_dma + (VAR_4 * sizeof(struct rds_header));
  VAR_5->length = sizeof(struct rds_header);
  VAR_5->lkey = VAR_2->i_mr->lkey;

  VAR_5 = &VAR_3->r_sge[1];
  VAR_5->addr = 0;
  VAR_5->length = VAR_0;
  VAR_5->lkey = VAR_2->i_mr->lkey;
 }
}
