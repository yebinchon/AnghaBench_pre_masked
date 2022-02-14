
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_bridge_port {size_t state; TYPE_3__* dev; int port_no; TYPE_2__* br; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int name; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;

void FUNC_1(const struct net_bridge_port *VAR_1)
{
 FUNC_0("%s: port %d(%s) entering %s state\n",
  VAR_1->br->dev->name, VAR_1->port_no, VAR_1->dev->name,
  VAR_0[VAR_1->state]);

}
