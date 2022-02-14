
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {scalar_t__ state; int go_neg_peer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, "GO Negotiation Response TX callback: success=%d",
  VAR_3);
 if (!VAR_2->go_neg_peer && VAR_2->state == VAR_1) {
  FUNC_0(VAR_2, "Ignore TX callback event - GO Negotiation is not running anymore");
  return;
 }
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, 0, 500000);
}
