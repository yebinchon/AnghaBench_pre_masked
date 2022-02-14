
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {scalar_t__ num_quar; int lock; scalar_t__ super; int * quar; } ;
typedef int alloc_special_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct alloc_cache*) ;
 int FUNC_5 (struct alloc_cache*,int *) ;

void
FUNC_6(struct alloc_cache* VAR_1, alloc_special_type* VAR_2)
{
 FUNC_4(VAR_1);
 if(!VAR_2)
  return;
 if(!VAR_1->super) {
  FUNC_2(&VAR_1->lock);
 }

 FUNC_1(VAR_2);
 if(VAR_1->super && VAR_1->num_quar >= VAR_0) {

  FUNC_5(VAR_1, VAR_2);
  return;
 }

 FUNC_0(VAR_2, VAR_1->quar);
 VAR_1->quar = VAR_2;
 VAR_1->num_quar++;
 if(!VAR_1->super) {
  FUNC_3(&VAR_1->lock);
 }
}
