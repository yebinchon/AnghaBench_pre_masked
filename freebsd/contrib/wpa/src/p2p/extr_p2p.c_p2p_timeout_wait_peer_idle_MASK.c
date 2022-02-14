
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_device {int dummy; } ;
struct p2p_data {struct p2p_device* go_neg_peer; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_1)
{
 struct p2p_device *VAR_2 = VAR_1->go_neg_peer;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, "Unknown GO Neg peer - stop GO Neg wait");
  return;
 }

 FUNC_0(VAR_1, "Go to Listen state while waiting for the peer to become ready for GO Negotiation");
 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_1, 0);
}
