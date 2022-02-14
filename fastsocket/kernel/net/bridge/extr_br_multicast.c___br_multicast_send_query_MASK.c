
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net_bridge_port {int dev; } ;
struct net_bridge {int dummy; } ;
struct ethhdr {int dummy; } ;
struct br_ip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (struct net_bridge*,struct br_ip*) ;
 int VAR_2 ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_3,
          struct net_bridge_port *VAR_4,
          struct br_ip *VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_6)
  return;

 if (VAR_4) {
  FUNC_1(VAR_6, sizeof(struct ethhdr));
  VAR_6->dev = VAR_4->dev;
  FUNC_0(VAR_1, VAR_0, VAR_6, ((void*)0), VAR_6->dev,
   VAR_2);
 } else
  FUNC_3(VAR_6);
}
