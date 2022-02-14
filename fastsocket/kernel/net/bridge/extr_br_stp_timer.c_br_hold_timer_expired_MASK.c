
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_bridge_port {TYPE_3__* br; scalar_t__ config_pending; TYPE_2__* dev; int port_no; } ;
struct TYPE_6__ {int lock; TYPE_1__* dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct net_bridge_port *VAR_1 = (struct net_bridge_port *) VAR_0;

 FUNC_1("%s: %d(%s) hold timer expired\n",
   VAR_1->br->dev->name, VAR_1->port_no, VAR_1->dev->name);

 FUNC_2(&VAR_1->br->lock);
 if (VAR_1->config_pending)
  FUNC_0(VAR_1);
 FUNC_3(&VAR_1->br->lock);
}
