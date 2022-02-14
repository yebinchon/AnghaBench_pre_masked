
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {struct inplace_cb** inplace_cb_lists; } ;
struct inplace_cb {int id; struct inplace_cb* next; } ;
typedef enum inplace_cb_list_type { ____Placeholder_inplace_cb_list_type } inplace_cb_list_type ;


 int FUNC_0 (struct inplace_cb*) ;

void
FUNC_1(struct module_env* VAR_0, enum inplace_cb_list_type VAR_1,
 int VAR_2)
{
 struct inplace_cb* VAR_3 = VAR_0->inplace_cb_lists[VAR_1];
 struct inplace_cb* VAR_4 = ((void*)0);

 while(VAR_3) {
  if(VAR_3->id == VAR_2) {
   if(!VAR_4) {
    VAR_0->inplace_cb_lists[VAR_1] = VAR_3->next;
    FUNC_0(VAR_3);
    VAR_3 = VAR_0->inplace_cb_lists[VAR_1];
   }
   else {
    VAR_4->next = VAR_3->next;
    FUNC_0(VAR_3);
    VAR_3 = VAR_4->next;
   }
  }
  else {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next;
  }
 }
}
