
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct search_domain {struct search_domain* next; } ;
struct evdns_base {TYPE_1__* global_search_state; } ;
struct TYPE_2__ {struct search_domain* head; } ;


 int FUNC_0 (struct evdns_base*) ;

__attribute__((used)) static void
FUNC_1(struct evdns_base *VAR_0) {
 struct search_domain *VAR_1, *VAR_2 = ((void*)0), *VAR_3;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->global_search_state->head;
 while (VAR_1) {
  VAR_3 = VAR_1->next;
  VAR_1->next = VAR_2;
  VAR_2 = VAR_1;
  VAR_1 = VAR_3;
 }

 VAR_0->global_search_state->head = VAR_2;
}
