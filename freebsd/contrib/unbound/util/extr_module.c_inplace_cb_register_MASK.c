
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int * inplace_cb_lists; scalar_t__ worker; } ;
struct inplace_cb {int id; struct inplace_cb* next; void* cb_arg; void* cb; } ;
typedef enum inplace_cb_list_type { ____Placeholder_inplace_cb_list_type } inplace_cb_list_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(void* VAR_0, enum inplace_cb_list_type VAR_1, void* VAR_2,
 struct module_env* VAR_3, int VAR_4)
{
 struct inplace_cb* VAR_5;
 struct inplace_cb** VAR_6;
 if(VAR_3->worker) {
  FUNC_1("invalid edns callback registration: "
   "trying to register callback after module init phase");
  return 0;
 }

 VAR_5 = (struct inplace_cb*)FUNC_0(1, sizeof(*VAR_5));
 if(VAR_5 == ((void*)0)) {
  FUNC_1("out of memory during edns callback registration.");
  return 0;
 }
 VAR_5->id = VAR_4;
 VAR_5->next = ((void*)0);
 VAR_5->cb = VAR_0;
 VAR_5->cb_arg = VAR_2;

 VAR_6 = (struct inplace_cb**) &VAR_3->inplace_cb_lists[VAR_1];

 while(*VAR_6 != ((void*)0))
  VAR_6 = &((*VAR_6)->next);
 *VAR_6 = VAR_5;
 return 1;
}
