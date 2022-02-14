
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_mr {int lkey; TYPE_2__* pd; } ;
struct c4iw_dev {int lock; int ** mmid2ptr; } ;
struct TYPE_4__ {TYPE_1__* context; } ;
struct TYPE_3__ {int device; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ibv_mr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct c4iw_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct ibv_mr*) ;

int FUNC_7(struct ibv_mr *VAR_0)
{
 int VAR_1;
 struct c4iw_dev *VAR_2 = FUNC_5(VAR_0->pd->context->device);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_3(&VAR_2->lock);
 VAR_2->mmid2ptr[FUNC_0(VAR_0->lkey)] = ((void*)0);
 FUNC_4(&VAR_2->lock);

 FUNC_1(FUNC_6(VAR_0));

 return 0;
}
