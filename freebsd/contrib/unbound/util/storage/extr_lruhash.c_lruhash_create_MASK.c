
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_bin {int dummy; } ;
struct lruhash {size_t size; int size_mask; size_t space_max; struct lruhash* array; int lock; scalar_t__ space_used; scalar_t__ num; int * lru_end; int * lru_start; void* cb_arg; int deldatafunc; int delkeyfunc; int compfunc; int sizefunc; } ;
typedef int lruhash_sizefunc_type ;
typedef int lruhash_delkeyfunc_type ;
typedef int lruhash_deldatafunc_type ;
typedef int lruhash_compfunc_type ;


 int FUNC_0 (struct lruhash*,int) ;
 struct lruhash* FUNC_1 (int,int) ;
 int FUNC_2 (struct lruhash*) ;
 int FUNC_3 (int *,struct lruhash*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct lruhash*
FUNC_6(size_t VAR_0, size_t VAR_1,
 lruhash_sizefunc_type VAR_2, lruhash_compfunc_type VAR_3,
 lruhash_delkeyfunc_type VAR_4,
 lruhash_deldatafunc_type VAR_5, void* VAR_6)
{
 struct lruhash* VAR_7 = (struct lruhash*)FUNC_1(1,
  sizeof(struct lruhash));
 if(!VAR_7)
  return ((void*)0);
 FUNC_5(&VAR_7->lock);
 VAR_7->sizefunc = VAR_2;
 VAR_7->compfunc = VAR_3;
 VAR_7->delkeyfunc = VAR_4;
 VAR_7->deldatafunc = VAR_5;
 VAR_7->cb_arg = VAR_6;
 VAR_7->size = VAR_0;
 VAR_7->size_mask = (int)(VAR_0-1);
 VAR_7->lru_start = ((void*)0);
 VAR_7->lru_end = ((void*)0);
 VAR_7->num = 0;
 VAR_7->space_used = 0;
 VAR_7->space_max = VAR_1;
 VAR_7->array = FUNC_1(VAR_7->size, sizeof(struct lruhash_bin));
 if(!VAR_7->array) {
  FUNC_4(&VAR_7->lock);
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 FUNC_0(VAR_7->array, VAR_7->size);
 FUNC_3(&VAR_7->lock, VAR_7, sizeof(*VAR_7));
 FUNC_3(&VAR_7->lock, VAR_7->array,
  VAR_7->size*sizeof(struct lruhash_bin));
 return VAR_7;
}
