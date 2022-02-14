
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_base {TYPE_1__* global_search_state; } ;
struct TYPE_2__ {int ndots; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 TYPE_1__* FUNC_2 () ;

void
FUNC_3(struct evdns_base *VAR_0, const int VAR_1) {
 FUNC_0(VAR_0);
 if (!VAR_0->global_search_state) VAR_0->global_search_state = FUNC_2();
 if (VAR_0->global_search_state)
  VAR_0->global_search_state->ndots = VAR_1;
 FUNC_1(VAR_0);
}
