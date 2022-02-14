
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 struct net_bridge_port* FUNC_0 (int) ;
 int FUNC_1 (struct net_bridge_port*,struct sk_buff*,void (*) (struct net_bridge_port const*,struct sk_buff*)) ;
 int FUNC_2 (struct net_bridge_port*,struct sk_buff*) ;

__attribute__((used)) static struct net_bridge_port *FUNC_3(
 struct net_bridge_port *VAR_0, struct net_bridge_port *VAR_1,
 struct sk_buff *VAR_2,
 void (*VAR_3)(const struct net_bridge_port *VAR_4,
         struct sk_buff *VAR_5))
{
 int VAR_6;

 if (!FUNC_2(VAR_1, VAR_2))
  return VAR_0;

 if (!VAR_0)
  goto out;

 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_6)
  return FUNC_0(VAR_6);

out:
 return VAR_1;
}
