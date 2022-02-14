
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* go_neg_peer; scalar_t__ drv_in_listen; } ;
struct TYPE_2__ {int connect_reqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_data*,TYPE_1__*) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 int FUNC_2 (struct p2p_data*,int) ;
 int FUNC_3 (struct p2p_data*,int ) ;

__attribute__((used)) static void FUNC_4(struct p2p_data *VAR_2)
{
 if (VAR_2->go_neg_peer) {
  if (VAR_2->drv_in_listen) {
   FUNC_1(VAR_2, "Driver is still in Listen state; wait for it to complete");
   return;
  }

  if (VAR_2->go_neg_peer->connect_reqs >= 120) {
   FUNC_1(VAR_2, "Timeout on sending GO Negotiation Request without getting response");
   FUNC_2(VAR_2, -1);
   return;
  }

  FUNC_3(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_2->go_neg_peer);
 } else
  FUNC_3(VAR_2, VAR_1);
}
