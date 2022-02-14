
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serviced_query {struct service_callback* cblist; } ;
struct service_callback {void* cb_arg; struct service_callback* next; } ;


 int FUNC_0 (struct service_callback*) ;

__attribute__((used)) static void
FUNC_1(struct serviced_query* VAR_0, void* VAR_1)
{
 struct service_callback** VAR_2 = &VAR_0->cblist;
 while(*VAR_2) {
  if((*VAR_2)->cb_arg == VAR_1) {
   struct service_callback* VAR_3 = *VAR_2;
   *VAR_2 = VAR_3->next;
   FUNC_0(VAR_3);
   return;
  }
  VAR_2 = &(*VAR_2)->next;
 }
}
