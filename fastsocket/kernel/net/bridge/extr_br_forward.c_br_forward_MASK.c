
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 int FUNC_0 (struct net_bridge_port const*,struct sk_buff*) ;
 int FUNC_1 (struct net_bridge_port const*,struct sk_buff*,int (*) (struct net_bridge_port const*,struct sk_buff*)) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct net_bridge_port const*,struct sk_buff*) ;

void FUNC_4(const struct net_bridge_port *VAR_0, struct sk_buff *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_3(VAR_0, VAR_1)) {
  if (VAR_2)
   FUNC_1(VAR_0, VAR_1, FUNC_0);
  else
   FUNC_0(VAR_0, VAR_1);
  return;
 }

 if (!VAR_2)
  FUNC_2(VAR_1);
}
