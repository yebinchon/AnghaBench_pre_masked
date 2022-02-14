
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct net_bridge_port {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct net_bridge_port const*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct net_bridge_port *VAR_4, struct sk_buff *VAR_5)
{
 VAR_5->dev = VAR_4->dev;

 if (FUNC_7(FUNC_3(VAR_4->dev))) {
  if (FUNC_4(VAR_5) > VAR_5->dev->mtu && !FUNC_5(VAR_5))
   FUNC_2(VAR_5);
  else {
   FUNC_6(VAR_5, VAR_0);
   FUNC_1(VAR_4, VAR_5);
  }
  return;
 }

 FUNC_0(VAR_1, VAR_2, VAR_5, ((void*)0), VAR_5->dev,
  VAR_3);
}
