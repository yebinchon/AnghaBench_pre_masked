
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flush_cidx; int cidx; int size; int pidx; struct t4_swsqe* oldest_read; struct t4_swsqe* sw_sq; } ;
struct t4_wq {TYPE_2__ sq; } ;
struct t4_swsqe {int flushed; scalar_t__ opcode; } ;
struct t4_cq {int dummy; } ;
struct TYPE_3__ {int send_cq; } ;
struct c4iw_qp {TYPE_1__ ibv_qp; struct t4_wq wq; } ;
struct c4iw_cq {struct t4_cq cq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct t4_wq*) ;
 int FUNC_2 (struct t4_wq*,struct t4_cq*,struct t4_swsqe*) ;
 struct c4iw_cq* FUNC_3 (int ) ;

void FUNC_4(struct c4iw_qp *VAR_1)
{
 unsigned short VAR_2 = 0;
 struct t4_wq *VAR_3 = &VAR_1->wq;
 struct c4iw_cq *VAR_4 = FUNC_3(VAR_1->ibv_qp.send_cq);
 struct t4_cq *VAR_5 = &VAR_4->cq;
 int VAR_6;
 struct t4_swsqe *VAR_7;

 if (VAR_3->sq.flush_cidx == -1)
  VAR_3->sq.flush_cidx = VAR_3->sq.cidx;
 VAR_6 = VAR_3->sq.flush_cidx;
 FUNC_0(VAR_6 >= VAR_3->sq.size);
 while (VAR_6 != VAR_3->sq.pidx) {
  VAR_7 = &VAR_3->sq.sw_sq[VAR_6];
  FUNC_0(VAR_7->flushed);
  VAR_7->flushed = 1;
  FUNC_2(VAR_3, VAR_5, VAR_7);
  if (VAR_3->sq.oldest_read == VAR_7) {
   FUNC_0(VAR_7->opcode != VAR_0);
   FUNC_1(VAR_3);
  }
  VAR_2++;
  if (++VAR_6 == VAR_3->sq.size)
   VAR_6 = 0;
 }
 VAR_3->sq.flush_cidx += VAR_2;
 if (VAR_3->sq.flush_cidx >= VAR_3->sq.size)
  VAR_3->sq.flush_cidx -= VAR_3->sq.size;
}
