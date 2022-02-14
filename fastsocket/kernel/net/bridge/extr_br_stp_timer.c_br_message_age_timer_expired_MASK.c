
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * addr; int * prio; } ;
struct net_bridge_port {scalar_t__ state; TYPE_2__* dev; int port_no; TYPE_3__ designated_bridge; struct net_bridge* br; } ;
struct net_bridge {int lock; TYPE_1__* dev; } ;
typedef TYPE_3__ bridge_id ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1)
{
 struct net_bridge_port *VAR_2 = (struct net_bridge_port *) VAR_1;
 struct net_bridge *VAR_3 = VAR_2->br;
 const bridge_id *VAR_4 = &VAR_2->designated_bridge;
 int VAR_5;

 if (VAR_2->state == VAR_0)
  return;


 FUNC_5("%s: neighbor %.2x%.2x.%.2x:%.2x:%.2x:%.2x:%.2x:%.2x lost on port %d(%s)\n",
  VAR_3->dev->name,
  VAR_4->prio[0], VAR_4->prio[1],
  VAR_4->addr[0], VAR_4->addr[1], VAR_4->addr[2],
  VAR_4->addr[3], VAR_4->addr[4], VAR_4->addr[5],
  VAR_2->port_no, VAR_2->dev->name);






 FUNC_6(&VAR_3->lock);
 if (VAR_2->state == VAR_0)
  goto unlock;
 VAR_5 = FUNC_3(VAR_3);

 FUNC_0(VAR_2);
 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 if (FUNC_3(VAR_3) && !VAR_5)
  FUNC_1(VAR_3);
 unlock:
 FUNC_7(&VAR_3->lock);
}
