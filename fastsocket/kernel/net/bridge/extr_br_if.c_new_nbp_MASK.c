
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int priority; int port_no; int state; scalar_t__ flags; int path_cost; struct net_device* dev; struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_bridge_port* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge_port*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_bridge*) ;
 struct net_bridge_port* FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static struct net_bridge_port *FUNC_8(struct net_bridge *VAR_4,
           struct net_device *VAR_5)
{
 int VAR_6;
 struct net_bridge_port *VAR_7;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_2);

 VAR_7->br = VAR_4;
 FUNC_4(VAR_5);
 VAR_7->dev = VAR_5;
 VAR_7->path_cost = FUNC_7(VAR_5);
 VAR_7->priority = 0x8000 >> VAR_0;
 VAR_7->port_no = VAR_6;
 VAR_7->flags = 0;
 FUNC_1(VAR_7);
 VAR_7->state = VAR_1;
 FUNC_3(VAR_7);
 FUNC_2(VAR_7);

 return VAR_7;
}
