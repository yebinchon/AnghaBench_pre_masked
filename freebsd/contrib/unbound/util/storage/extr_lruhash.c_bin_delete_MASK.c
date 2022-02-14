
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int key; void* data; struct lruhash_entry* overflow_next; } ;
struct lruhash_bin {struct lruhash_entry* overflow_list; int lock; } ;
struct lruhash {int cb_arg; int (* deldatafunc ) (void*,int ) ;int (* delkeyfunc ) (int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;

void
FUNC_3(struct lruhash* VAR_0, struct lruhash_bin* VAR_1)
{
 struct lruhash_entry* VAR_2, *VAR_3;
 void *VAR_4;
 if(!VAR_1)
  return;
 FUNC_0(&VAR_1->lock);
 VAR_2 = VAR_1->overflow_list;
 VAR_1->overflow_list = ((void*)0);
 while(VAR_2) {
  VAR_3 = VAR_2->overflow_next;
  VAR_4 = VAR_2->data;
  (*VAR_0->delkeyfunc)(VAR_2->key, VAR_0->cb_arg);
  (*VAR_0->deldatafunc)(VAR_4, VAR_0->cb_arg);
  VAR_2 = VAR_3;
 }
}
