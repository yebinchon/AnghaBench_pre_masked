
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int lock; } ;
struct lruhash_bin {int lock; } ;
struct lruhash {size_t size_mask; int lock; struct lruhash_bin* array; int compfunc; } ;
typedef size_t hashvalue_type ;


 struct lruhash_entry* FUNC_0 (struct lruhash*,struct lruhash_bin*,size_t,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct lruhash*,struct lruhash_entry*) ;

struct lruhash_entry*
FUNC_8(struct lruhash* VAR_0, hashvalue_type VAR_1, void* VAR_2, int VAR_3)
{
 struct lruhash_entry* VAR_4;
 struct lruhash_bin* VAR_5;
 FUNC_1(FUNC_2(VAR_0->compfunc));

 FUNC_3(&VAR_0->lock);
 VAR_5 = &VAR_0->array[VAR_1 & VAR_0->size_mask];
 FUNC_3(&VAR_5->lock);
 if((VAR_4=FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2)))
  FUNC_7(VAR_0, VAR_4);
 FUNC_4(&VAR_0->lock);

 if(VAR_4) {
  if(VAR_3) { FUNC_6(&VAR_4->lock); }
  else { FUNC_5(&VAR_4->lock); }
 }
 FUNC_4(&VAR_5->lock);
 return VAR_4;
}
