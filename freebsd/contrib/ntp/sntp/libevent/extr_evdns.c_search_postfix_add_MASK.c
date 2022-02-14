
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct search_domain {int len; struct search_domain* next; } ;
struct evdns_base {TYPE_1__* global_search_state; } ;
struct TYPE_2__ {struct search_domain* head; int num_domains; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (int *,char const*,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct evdns_base *VAR_0, const char *VAR_1) {
 size_t VAR_2;
 struct search_domain *VAR_3;
 while (VAR_1[0] == '.') VAR_1++;
 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_0);
 if (!VAR_0->global_search_state) VAR_0->global_search_state = FUNC_3();
 if (!VAR_0->global_search_state) return;
 VAR_0->global_search_state->num_domains++;

 VAR_3 = (struct search_domain *) FUNC_2(sizeof(struct search_domain) + VAR_2);
 if (!VAR_3) return;
 FUNC_1( ((u8 *) VAR_3) + sizeof(struct search_domain), VAR_1, VAR_2);
 VAR_3->next = VAR_0->global_search_state->head;
 VAR_3->len = (int) VAR_2;

 VAR_0->global_search_state->head = VAR_3;
}
