
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ transmit_me; scalar_t__ trans_id; int timeout_event; int * ns; scalar_t__ reissue_count; scalar_t__ tx_count; struct request* next; } ;
struct nameserver {scalar_t__ socket; int * probe_request; int base; int timeout_event; int event; struct nameserver* next; } ;
struct evdns_base {int n_req_heads; scalar_t__ global_requests_inflight; struct request** req_heads; TYPE_1__* req_waiting_head; int global_requests_waiting; scalar_t__ global_good_nameservers; struct nameserver* server_head; } ;
struct TYPE_2__ {struct TYPE_2__* prev; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct request*,TYPE_1__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct nameserver*) ;

int
FUNC_9(struct evdns_base *VAR_0)
{
 struct nameserver *VAR_1, *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->server_head;
 VAR_2 = VAR_0->server_head;
 if (!VAR_1) {
  FUNC_1(VAR_0);
  return 0;
 }
 while (1) {
  struct nameserver *VAR_4 = VAR_1->next;
  (void) FUNC_4(&VAR_1->event);
  if (FUNC_6(&VAR_1->timeout_event))
   (void) FUNC_5(&VAR_1->timeout_event);
  if (VAR_1->probe_request) {
   FUNC_2(VAR_1->base, VAR_1->probe_request);
   VAR_1->probe_request = ((void*)0);
  }
  if (VAR_1->socket >= 0)
   FUNC_7(VAR_1->socket);
  FUNC_8(VAR_1);
  if (VAR_4 == VAR_2)
   break;
  VAR_1 = VAR_4;
 }
 VAR_0->server_head = ((void*)0);
 VAR_0->global_good_nameservers = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_req_heads; ++VAR_3) {
  struct request *VAR_5, *VAR_6;
  VAR_5 = VAR_6 = VAR_0->req_heads[VAR_3];
  while (VAR_5) {
   struct request *VAR_7 = VAR_5->next;
   VAR_5->tx_count = VAR_5->reissue_count = 0;
   VAR_5->ns = ((void*)0);

   (void) FUNC_5(&VAR_5->timeout_event);
   VAR_5->trans_id = 0;
   VAR_5->transmit_me = 0;

   VAR_0->global_requests_waiting++;
   FUNC_3(VAR_5, &VAR_0->req_waiting_head);




   VAR_0->req_waiting_head = VAR_0->req_waiting_head->prev;

   if (VAR_7 == VAR_6)
    break;
   VAR_5 = VAR_7;
  }
  VAR_0->req_heads[VAR_3] = ((void*)0);
 }

 VAR_0->global_requests_inflight = 0;

 FUNC_1(VAR_0);
 return 0;
}
