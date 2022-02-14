
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regional {scalar_t__ next; } ;
struct alloc_cache {scalar_t__ num_reg_blocks; struct regional* reg_list; scalar_t__ num_quar; int * quar; TYPE_1__* super; int lock; } ;
typedef int alloc_special_type ;
struct TYPE_2__ {int lock; int num_quar; int * quar; } ;


 int FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (struct regional*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct alloc_cache* VAR_0)
{
 alloc_special_type* VAR_1;
 struct regional* VAR_2, *VAR_3;
 if(!VAR_0)
  return;
 if(!VAR_0->super) {
  FUNC_4(&VAR_0->lock);
 }
 if(VAR_0->super && VAR_0->quar) {

  VAR_1 = VAR_0->quar;
  while(FUNC_2(VAR_1))
   VAR_1 = FUNC_2(VAR_1);
  FUNC_5(&VAR_0->super->lock);
  FUNC_1(VAR_1, VAR_0->super->quar);
  VAR_0->super->quar = VAR_0->quar;
  VAR_0->super->num_quar += VAR_0->num_quar;
  FUNC_6(&VAR_0->super->lock);
 } else {
  FUNC_0(VAR_0);
 }
 VAR_0->quar = 0;
 VAR_0->num_quar = 0;
 VAR_2 = VAR_0->reg_list;
 while(VAR_2) {
  VAR_3 = (struct regional*)VAR_2->next;
  FUNC_3(VAR_2);
  VAR_2 = VAR_3;
 }
 VAR_0->reg_list = ((void*)0);
 VAR_0->num_reg_blocks = 0;
}
