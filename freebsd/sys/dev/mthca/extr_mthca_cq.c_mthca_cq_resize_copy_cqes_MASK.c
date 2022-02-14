
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cqe; int device; } ;
struct mthca_cq {int cons_index; TYPE_2__ ibcq; TYPE_1__* resize_buf; } ;
struct TYPE_3__ {int cqe; int buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_cq*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct mthca_cq *VAR_1)
{
 int VAR_2;







 if (!FUNC_4(FUNC_5(VAR_1->ibcq.device)) &&
     VAR_1->ibcq.cqe < VAR_1->resize_buf->cqe) {
  VAR_1->cons_index &= VAR_1->ibcq.cqe;
  if (FUNC_0(FUNC_1(VAR_1, VAR_1->ibcq.cqe)))
   VAR_1->cons_index -= VAR_1->ibcq.cqe + 1;
 }

 for (VAR_2 = VAR_1->cons_index; FUNC_0(FUNC_1(VAR_1, VAR_2 & VAR_1->ibcq.cqe)); ++VAR_2)
  FUNC_3(FUNC_2(&VAR_1->resize_buf->buf,
     VAR_2 & VAR_1->resize_buf->cqe),
         FUNC_1(VAR_1, VAR_2 & VAR_1->ibcq.cqe), VAR_0);
}
