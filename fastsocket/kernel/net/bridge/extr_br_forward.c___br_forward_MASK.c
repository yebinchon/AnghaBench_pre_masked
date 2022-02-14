
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct sk_buff*,struct net_device*,struct net_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(const struct net_bridge_port *VAR_3, struct sk_buff *VAR_4)
{
 struct net_device *VAR_5;

 if (FUNC_3(VAR_4)) {
  FUNC_1(VAR_4);
  return;
 }

 VAR_5 = VAR_4->dev;
 VAR_4->dev = VAR_3->dev;
 FUNC_2(VAR_4);

 FUNC_0(VAR_1, VAR_0, VAR_4, VAR_5, VAR_4->dev,
   VAR_2);
}
