
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int key; int lock; void* data; struct lruhash_entry* overflow_next; } ;
struct lruhash_bin {int lock; struct lruhash_entry* overflow_list; } ;
struct lruhash {int cb_arg; int (* deldatafunc ) (void*,int ) ;int (* delkeyfunc ) (int ,int ) ;int (* markdelfunc ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ) ;

__attribute__((used)) static void
FUNC_7(struct lruhash* VAR_0, struct lruhash_bin* VAR_1)
{
 struct lruhash_entry* VAR_2, *VAR_3;
 void *VAR_4;
 FUNC_0(&VAR_1->lock);
 VAR_2 = VAR_1->overflow_list;
 while(VAR_2) {
  FUNC_3(&VAR_2->lock);
  VAR_3 = VAR_2->overflow_next;
  VAR_4 = VAR_2->data;
  if(VAR_0->markdelfunc)
   (*VAR_0->markdelfunc)(VAR_2->key);
  FUNC_2(&VAR_2->lock);
  (*VAR_0->delkeyfunc)(VAR_2->key, VAR_0->cb_arg);
  (*VAR_0->deldatafunc)(VAR_4, VAR_0->cb_arg);
  VAR_2 = VAR_3;
 }
 VAR_1->overflow_list = ((void*)0);
 FUNC_1(&VAR_1->lock);
}
