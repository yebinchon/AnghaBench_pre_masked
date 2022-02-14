
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_bridge_port {TYPE_1__* br; void* designated_port; void* port_id; int designated_bridge; int priority; int port_no; } ;
typedef void* port_id ;
struct TYPE_2__ {int bridge_id; } ;


 int FUNC_0 (struct net_bridge_port*) ;
 scalar_t__ FUNC_1 (struct net_bridge_port*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(struct net_bridge_port *VAR_0, u8 VAR_1)
{
 port_id VAR_2 = FUNC_2(VAR_1, VAR_0->port_no);

 if (FUNC_1(VAR_0))
  VAR_0->designated_port = VAR_2;

 VAR_0->port_id = VAR_2;
 VAR_0->priority = VAR_1;
 if (!FUNC_4(&VAR_0->br->bridge_id, &VAR_0->designated_bridge, 8) &&
     VAR_0->port_id < VAR_0->designated_port) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_0->br);
 }
}
