
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct lec_vcc_priv {scalar_t__ xoff; int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;


 struct lec_vcc_priv* FUNC_0 (struct atm_vcc*) ;
 scalar_t__ FUNC_1 (struct atm_vcc*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct lec_vcc_priv *VAR_2 = FUNC_0(VAR_0);
 struct net_device *VAR_3 = VAR_1->dev;

 if (VAR_2 == ((void*)0)) {
  FUNC_5("lec_pop(): vpriv = NULL!?!?!?\n");
  return;
 }

 VAR_2->old_pop(VAR_0, VAR_1);

 if (VAR_2->xoff && FUNC_1(VAR_0, 0)) {
  VAR_2->xoff = 0;
  if (FUNC_3(VAR_3) && FUNC_2(VAR_3))
   FUNC_4(VAR_3);
 }
}
