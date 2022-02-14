
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {scalar_t__ state; int search_delay; scalar_t__ pending_listen_freq; scalar_t__ p2p_scan_running; TYPE_1__* go_neg_peer; scalar_t__ in_listen; scalar_t__ drv_in_listen; } ;
struct TYPE_2__ {int connect_reqs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct p2p_data*,TYPE_1__*) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 int FUNC_2 (struct p2p_data*,int) ;
 int FUNC_3 (struct p2p_data*) ;
 int FUNC_4 (struct p2p_data*,int ) ;
 int FUNC_5 (struct p2p_data*,int,int) ;

int FUNC_6(struct p2p_data *VAR_4, unsigned int VAR_5)
{
 FUNC_1(VAR_4, "Driver ended Listen state (freq=%u)", VAR_5);
 VAR_4->drv_in_listen = 0;
 if (VAR_4->in_listen)
  return 0;

 if (VAR_4->state == VAR_3 && VAR_4->go_neg_peer &&
     VAR_4->pending_listen_freq) {





  FUNC_1(VAR_4,
   "Listen operation did not seem to start - delay idle phase to avoid busy loop");
  FUNC_5(VAR_4, 0, 100000);
  return 1;
 }

 if (VAR_4->state == VAR_1 && VAR_4->go_neg_peer) {
  if (VAR_4->go_neg_peer->connect_reqs >= 120) {
   FUNC_1(VAR_4, "Timeout on sending GO Negotiation Request without getting response");
   FUNC_2(VAR_4, -1);
   return 0;
  }

  FUNC_4(VAR_4, VAR_0);
  FUNC_0(VAR_4, VAR_4->go_neg_peer);
  return 1;
 } else if (VAR_4->state == VAR_2) {
  if (VAR_4->p2p_scan_running) {
   FUNC_1(VAR_4, "p2p_scan already in progress - do not try to start a new one");
   return 1;
  }
  if (VAR_4->pending_listen_freq) {





   FUNC_1(VAR_4, "Listen operation did not seem to start - delay search phase to avoid busy loop");
   FUNC_5(VAR_4, 0, 100000);
   return 1;
  }
  if (VAR_4->search_delay) {
   FUNC_1(VAR_4, "Delay search operation by %u ms",
    VAR_4->search_delay);
   FUNC_5(VAR_4, VAR_4->search_delay / 1000,
     (VAR_4->search_delay % 1000) * 1000);
   return 1;
  }
  FUNC_3(VAR_4);
  return 1;
 }

 return 0;
}
