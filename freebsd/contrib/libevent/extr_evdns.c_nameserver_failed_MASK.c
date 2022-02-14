
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct request {scalar_t__ tx_count; struct request* next; struct nameserver* const ns; } ;
struct nameserver {int failed_times; int address; int timeout_event; scalar_t__ state; struct evdns_base* base; } ;
struct evdns_base {scalar_t__ global_good_nameservers; int n_req_heads; struct request** req_heads; int global_nameserver_probe_initial_timeout; } ;
typedef int addrbuf ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct sockaddr*,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct evdns_base*) ;
 int FUNC_6 (struct request*,int ) ;

__attribute__((used)) static void
FUNC_7(struct nameserver *const VAR_2, const char *VAR_3) {
 struct request *VAR_4, *VAR_5;
 struct evdns_base *VAR_6 = VAR_2->base;
 int VAR_7;
 char VAR_8[128];

 FUNC_0(VAR_6);


 if (!VAR_2->state) return;

 FUNC_4(VAR_0, "Nameserver %s has failed: %s",
     FUNC_3(
      (struct sockaddr *)&VAR_2->address,
      VAR_8, sizeof(VAR_8)),
     VAR_3);

 VAR_6->global_good_nameservers--;
 FUNC_1(VAR_6->global_good_nameservers >= 0);
 if (VAR_6->global_good_nameservers == 0) {
  FUNC_4(VAR_0, "All nameservers have failed");
 }

 VAR_2->state = 0;
 VAR_2->failed_times = 1;

 if (FUNC_2(&VAR_2->timeout_event,
  &VAR_6->global_nameserver_probe_initial_timeout) < 0) {
  FUNC_4(VAR_1,
      "Error from libevent when adding timer event for %s",
      FUNC_3(
       (struct sockaddr *)&VAR_2->address,
       VAR_8, sizeof(VAR_8)));

 }







 if (!VAR_6->global_good_nameservers) return;

 for (VAR_7 = 0; VAR_7 < VAR_6->n_req_heads; ++VAR_7) {
  VAR_4 = VAR_5 = VAR_6->req_heads[VAR_7];
  if (VAR_4) {
   do {
    if (VAR_4->tx_count == 0 && VAR_4->ns == VAR_2) {


     FUNC_6(VAR_4, FUNC_5(VAR_6));
    }
    VAR_4 = VAR_4->next;
   } while (VAR_4 != VAR_5);
  }
 }
}
