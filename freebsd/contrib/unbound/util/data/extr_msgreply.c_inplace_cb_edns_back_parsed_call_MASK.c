
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {int dummy; } ;
struct module_env {struct inplace_cb** inplace_cb_lists; } ;
struct inplace_cb {int cb_arg; int id; scalar_t__ cb; struct inplace_cb* next; } ;
typedef int (* inplace_cb_edns_back_parsed_func_type ) (struct module_qstate*,int ,int ) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_qstate*,int ,int )) ;
 size_t VAR_0 ;
 int FUNC_2 (struct module_qstate*,int ,int ) ;

int FUNC_3(struct module_env* VAR_1,
 struct module_qstate* VAR_2)
{
 struct inplace_cb* VAR_3 =
  VAR_1->inplace_cb_lists[VAR_0];
 for(; VAR_3; VAR_3=VAR_3->next) {
  FUNC_0(FUNC_1(
   *(inplace_cb_edns_back_parsed_func_type*)VAR_3->cb));
  (void)(*(inplace_cb_edns_back_parsed_func_type*)VAR_3->cb)(VAR_2,
   VAR_3->id, VAR_3->cb_arg);
 }
 return 1;
}
