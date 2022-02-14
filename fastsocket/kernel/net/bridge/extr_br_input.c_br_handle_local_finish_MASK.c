
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct net_bridge_port {int br; } ;
struct TYPE_4__ {int h_source; } ;
struct TYPE_3__ {int br_port; } ;


 int FUNC_0 (int ,struct net_bridge_port*,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 struct net_bridge_port* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0)
{
 struct net_bridge_port *VAR_1 = FUNC_2(VAR_0->dev->br_port);

 if (VAR_1)
  FUNC_0(VAR_1->br, VAR_1, FUNC_1(VAR_0)->h_source);
 return 0;
}
