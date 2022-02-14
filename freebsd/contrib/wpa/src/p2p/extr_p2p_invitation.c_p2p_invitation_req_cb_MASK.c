
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* invite_peer; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ,int) ;

void FUNC_3(struct p2p_data *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, "Invitation Request TX callback: success=%d", VAR_3);

 if (VAR_2->invite_peer == ((void*)0)) {
  FUNC_0(VAR_2, "No pending Invite");
  return;
 }

 if (VAR_3)
  VAR_2->invite_peer->flags &= ~VAR_0;





 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, 0, VAR_3 ? 500000 : 100000);
}
