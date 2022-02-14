
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccuser {int config; int connq; } ;
struct TYPE_2__ {scalar_t__ cfg; } ;
struct ccconn {int connid; TYPE_1__ bearer; } ;
struct atm_p2p_call_active {int connid; } ;
struct atm_p2mp_call_active {int connid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atm_p2p_call_active*) ;
 struct atm_p2p_call_active* FUNC_1 (int) ;
 struct ccconn* FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ccuser*,int ,struct atm_p2p_call_active*,int) ;
 int FUNC_4 (struct ccuser*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ccuser *VAR_6)
{
 struct ccconn *VAR_7 = FUNC_2(&VAR_6->connq);

 FUNC_4(VAR_6, VAR_3);
 if (VAR_7->bearer.cfg == VAR_2) {
  struct atm_p2p_call_active *VAR_8;

  VAR_6->config = VAR_4;
  VAR_8 = FUNC_1(sizeof(*VAR_8));
  if (VAR_8 == ((void*)0))
   return;
  VAR_8->connid = VAR_7->connid;
  FUNC_3(VAR_6, VAR_1, VAR_8, sizeof(*VAR_8));
  FUNC_0(VAR_8);
 } else {
  struct atm_p2mp_call_active *VAR_9;

  VAR_6->config = VAR_5;
  VAR_9 = FUNC_1(sizeof(*VAR_9));
  if (VAR_9 == ((void*)0))
   return;
  VAR_9->connid = VAR_7->connid;
  FUNC_3(VAR_6, VAR_0, VAR_9, sizeof(*VAR_9));
  FUNC_0(VAR_9);
 }
}
