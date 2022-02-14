
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtable {int dummy; } ;
struct net_device {int br_port; } ;
struct net_bridge_port {TYPE_1__* br; } ;
struct TYPE_2__ {struct rtable fake_rtable; } ;


 struct net_bridge_port* FUNC_0 (int ) ;

__attribute__((used)) static inline struct rtable *FUNC_1(const struct net_device *VAR_0)
{
 struct net_bridge_port *VAR_1 = FUNC_0(VAR_0->br_port);

 return VAR_1 ? &VAR_1->br->fake_rtable : ((void*)0);
}
