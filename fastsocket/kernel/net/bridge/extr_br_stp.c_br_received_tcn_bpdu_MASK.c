
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_bridge_port {TYPE_3__* br; TYPE_2__* dev; int port_no; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,int ,int ,int ) ;

void FUNC_4(struct net_bridge_port *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_3("%s: received tcn bpdu on port %i(%s)\n",
         VAR_0->br->dev->name, VAR_0->port_no, VAR_0->dev->name);

  FUNC_2(VAR_0->br);
  FUNC_1(VAR_0);
 }
}
