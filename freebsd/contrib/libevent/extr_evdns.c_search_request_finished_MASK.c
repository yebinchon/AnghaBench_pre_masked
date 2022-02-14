
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_request {int * search_origname; int * search_state; TYPE_1__* current_req; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct evdns_request *const VAR_0) {
 FUNC_0(VAR_0->current_req->base);
 if (VAR_0->search_state) {
  FUNC_2(VAR_0->search_state);
  VAR_0->search_state = ((void*)0);
 }
 if (VAR_0->search_origname) {
  FUNC_1(VAR_0->search_origname);
  VAR_0->search_origname = ((void*)0);
 }
}
