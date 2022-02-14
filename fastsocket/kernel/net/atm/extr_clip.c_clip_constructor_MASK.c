
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neighbour {int nud_state; TYPE_1__* ops; int output; int parms; int type; struct net_device* dev; } ;
struct neigh_parms {int dummy; } ;
struct in_device {struct neigh_parms* arp_parms; } ;
struct atmarp_entry {scalar_t__ expires; int * vccs; struct neighbour* neigh; int ip; } ;
struct TYPE_2__ {int output; int connected_output; } ;


 int VAR_0 ;
 struct atmarp_entry* FUNC_0 (struct neighbour*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct neigh_parms*) ;
 int FUNC_5 (char*,struct neighbour*,struct atmarp_entry*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct neighbour *VAR_6)
{
 struct atmarp_entry *VAR_7 = FUNC_0(VAR_6);
 struct net_device *VAR_8 = VAR_6->dev;
 struct in_device *VAR_9;
 struct neigh_parms *VAR_10;

 FUNC_5("clip_constructor (neigh %p, entry %p)\n", VAR_6, VAR_7);
 VAR_6->type = FUNC_3(&VAR_4, VAR_7->ip);
 if (VAR_6->type != VAR_2)
  return -VAR_0;

 FUNC_6();
 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9) {
  FUNC_7();
  return -VAR_0;
 }

 VAR_10 = VAR_9->arp_parms;
 FUNC_2(VAR_6->parms);
 VAR_6->parms = FUNC_4(VAR_10);
 FUNC_7();

 VAR_6->ops = &VAR_3;
 VAR_6->output = VAR_6->nud_state & VAR_1 ?
     VAR_6->ops->connected_output : VAR_6->ops->output;
 VAR_7->neigh = VAR_6;
 VAR_7->vccs = ((void*)0);
 VAR_7->expires = VAR_5 - 1;
 return 0;
}
