
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {int lock; int super; scalar_t__ num_quar; scalar_t__ quar; } ;


 int FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct alloc_cache* VAR_0)
{
 if(!VAR_0->super) {
  FUNC_1(&VAR_0->lock);
 }
 FUNC_0(VAR_0);
 VAR_0->quar = 0;
 VAR_0->num_quar = 0;
 if(!VAR_0->super) {
  FUNC_2(&VAR_0->lock);
 }
}
