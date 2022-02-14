
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {int lock; scalar_t__ topology_change; scalar_t__ topology_change_detected; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct net_bridge *VAR_1 = (struct net_bridge *) VAR_0;

 FUNC_0("%s: topo change timer expired\n", VAR_1->dev->name);
 FUNC_1(&VAR_1->lock);
 VAR_1->topology_change_detected = 0;
 VAR_1->topology_change = 0;
 FUNC_2(&VAR_1->lock);
}
