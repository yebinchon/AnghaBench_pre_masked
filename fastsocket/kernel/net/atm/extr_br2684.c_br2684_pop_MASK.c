
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct br2684_vcc {int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;


 struct br2684_vcc* FUNC_0 (struct atm_vcc*) ;
 scalar_t__ FUNC_1 (struct atm_vcc*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,struct atm_vcc*,struct net_device*) ;
 int FUNC_4 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct br2684_vcc *VAR_2 = FUNC_0(VAR_0);
 struct net_device *VAR_3 = VAR_1->dev;

 FUNC_3("br2684_pop(vcc %p ; net_dev %p )\n", VAR_0, VAR_3);
 VAR_2->old_pop(VAR_0, VAR_1);

 if (!VAR_3)
  return;

 if (FUNC_1(VAR_0, 0))
  FUNC_2(VAR_3);

}
