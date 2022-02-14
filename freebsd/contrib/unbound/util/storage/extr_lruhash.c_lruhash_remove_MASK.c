
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int key; void* data; int lock; } ;
struct lruhash_bin {int lock; } ;
struct lruhash {size_t size_mask; int cb_arg; int (* deldatafunc ) (void*,int ) ;int (* delkeyfunc ) (int ,int ) ;int (* markdelfunc ) (int ) ;int lock; scalar_t__ (* sizefunc ) (int ,void*) ;int space_used; int num; struct lruhash_bin* array; int compfunc; } ;
typedef size_t hashvalue_type ;


 struct lruhash_entry* FUNC_0 (struct lruhash*,struct lruhash_bin*,size_t,void*) ;
 int FUNC_1 (struct lruhash_bin*,struct lruhash_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (void*,int )) ;
 int FUNC_5 (int (*) (int ,int )) ;
 int FUNC_6 (int (*) (int )) ;
 int FUNC_7 (scalar_t__ (*) (int ,void*)) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct lruhash*,struct lruhash_entry*) ;
 scalar_t__ FUNC_13 (int ,void*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (void*,int ) ;

void
FUNC_17(struct lruhash* VAR_0, hashvalue_type VAR_1, void* VAR_2)
{
 struct lruhash_entry* VAR_3;
 struct lruhash_bin* VAR_4;
 void *VAR_5;
 FUNC_2(FUNC_7(VAR_0->sizefunc));
 FUNC_2(FUNC_5(VAR_0->delkeyfunc));
 FUNC_2(FUNC_4(VAR_0->deldatafunc));
 FUNC_2(FUNC_3(VAR_0->compfunc));
 FUNC_2(FUNC_6(VAR_0->markdelfunc));

 FUNC_8(&VAR_0->lock);
 VAR_4 = &VAR_0->array[VAR_1 & VAR_0->size_mask];
 FUNC_8(&VAR_4->lock);
 if((VAR_3=FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2))) {
  FUNC_1(VAR_4, VAR_3);
  FUNC_12(VAR_0, VAR_3);
 } else {
  FUNC_9(&VAR_0->lock);
  FUNC_9(&VAR_4->lock);
  return;
 }
 VAR_0->num--;
 VAR_0->space_used -= (*VAR_0->sizefunc)(VAR_3->key, VAR_3->data);
 FUNC_9(&VAR_0->lock);
 FUNC_11(&VAR_3->lock);
 if(VAR_0->markdelfunc)
  (*VAR_0->markdelfunc)(VAR_3->key);
 FUNC_10(&VAR_3->lock);
 FUNC_9(&VAR_4->lock);

 VAR_5 = VAR_3->data;
 (*VAR_0->delkeyfunc)(VAR_3->key, VAR_0->cb_arg);
 (*VAR_0->deldatafunc)(VAR_5, VAR_0->cb_arg);
}
