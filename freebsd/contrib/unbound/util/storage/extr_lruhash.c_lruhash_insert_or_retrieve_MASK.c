
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int key; void* data; struct lruhash_entry* overflow_next; int lock; } ;
struct lruhash_bin {int lock; struct lruhash_entry* overflow_list; } ;
struct lruhash {size_t (* sizefunc ) (int ,void*) ;size_t size_mask; scalar_t__ num; scalar_t__ space_used; scalar_t__ space_max; scalar_t__ size; int (* deldatafunc ) (void*,void*) ;int (* delkeyfunc ) (int ,void*) ;int lock; struct lruhash_bin* array; void* cb_arg; int markdelfunc; int compfunc; } ;
typedef size_t hashvalue_type ;


 struct lruhash_entry* FUNC_0 (struct lruhash*,struct lruhash_bin*,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (void*,void*)) ;
 int FUNC_4 (int (*) (int ,void*)) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t (*) (int ,void*)) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct lruhash*,struct lruhash_entry*) ;
 int FUNC_11 (struct lruhash*,struct lruhash_entry**) ;
 size_t FUNC_12 (int ,void*) ;
 int FUNC_13 (int ,void*) ;
 int FUNC_14 (void*,void*) ;
 int FUNC_15 (struct lruhash*) ;

struct lruhash_entry*
FUNC_16(struct lruhash* VAR_0, hashvalue_type VAR_1,
 struct lruhash_entry* VAR_2, void* VAR_3, void* VAR_4)
{
 struct lruhash_bin* VAR_5;
 struct lruhash_entry* VAR_6, *VAR_7 = ((void*)0);
 size_t VAR_8;
 FUNC_1(FUNC_6(VAR_0->sizefunc));
 FUNC_1(FUNC_4(VAR_0->delkeyfunc));
 FUNC_1(FUNC_3(VAR_0->deldatafunc));
 FUNC_1(FUNC_2(VAR_0->compfunc));
 FUNC_1(FUNC_5(VAR_0->markdelfunc));
 VAR_8 = VAR_0->sizefunc(VAR_2->key, VAR_3);
 if (VAR_4 == ((void*)0)) VAR_4 = VAR_0->cb_arg;


 FUNC_7(&VAR_0->lock);
 VAR_5 = &VAR_0->array[VAR_1 & VAR_0->size_mask];
 FUNC_7(&VAR_5->lock);


 if ((VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2->key)) != ((void*)0)) {

  FUNC_9(&VAR_6->lock);
 }
 else
 {

  VAR_2->overflow_next = VAR_5->overflow_list;
  VAR_5->overflow_list = VAR_2;
  FUNC_10(VAR_0, VAR_2);
  VAR_0->num++;
  VAR_0->space_used += VAR_8;

  VAR_6 = VAR_2;
  FUNC_9(&VAR_6->lock);
 }
 FUNC_8(&VAR_5->lock);
 if (VAR_0->space_used > VAR_0->space_max)
  FUNC_11(VAR_0, &VAR_7);
 if (VAR_0->num >= VAR_0->size)
  FUNC_15(VAR_0);
 FUNC_8(&VAR_0->lock);


 while (VAR_7) {
  struct lruhash_entry* VAR_9 = VAR_7->overflow_next;
  void* VAR_10 = VAR_7->data;
  (*VAR_0->delkeyfunc)(VAR_7->key, VAR_4);
  (*VAR_0->deldatafunc)(VAR_10, VAR_4);
  VAR_7 = VAR_9;
 }


 return VAR_6;
}
