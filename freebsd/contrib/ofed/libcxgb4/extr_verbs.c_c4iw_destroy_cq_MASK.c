
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_cq {TYPE_1__* context; } ;
struct c4iw_dev {int lock; int ** cqid2ptr; } ;
struct TYPE_4__ {int error; size_t cqid; struct c4iw_cq* sw_queue; int memsize; int queue; int ugts; } ;
struct c4iw_cq {TYPE_2__ cq; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct c4iw_cq*) ;
 int FUNC_2 (struct ibv_cq*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct c4iw_cq* FUNC_6 (struct ibv_cq*) ;
 struct c4iw_dev* FUNC_7 (int ) ;

int FUNC_8(struct ibv_cq *VAR_1)
{
 int VAR_2;
 struct c4iw_cq *VAR_3 = FUNC_6(VAR_1);
 struct c4iw_dev *VAR_4 = FUNC_7(VAR_1->context->device);

 VAR_3->cq.error = 1;
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  return VAR_2;
 }
 FUNC_3(FUNC_0(VAR_3->cq.ugts), VAR_0);
 FUNC_3(VAR_3->cq.queue, VAR_3->cq.memsize);

 FUNC_4(&VAR_4->lock);
 VAR_4->cqid2ptr[VAR_3->cq.cqid] = ((void*)0);
 FUNC_5(&VAR_4->lock);

 FUNC_1(VAR_3->cq.sw_queue);
 FUNC_1(VAR_3);
 return 0;
}
