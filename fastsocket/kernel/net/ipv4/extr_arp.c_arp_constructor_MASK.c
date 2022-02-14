
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int type; int flags; TYPE_1__* header_ops; int addr_len; int broadcast; int dev_addr; } ;
struct neighbour {int nud_state; TYPE_2__* ops; int output; int ha; int type; int parms; struct net_device* dev; scalar_t__ primary_key; } ;
struct neigh_parms {int dummy; } ;
struct in_device {struct neigh_parms* arp_parms; } ;
typedef int __be32 ;
struct TYPE_7__ {int output; int connected_output; int queue_xmit; } ;
struct TYPE_6__ {scalar_t__ cache; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_2 (int ,int ,struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct neigh_parms*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct neighbour *VAR_12)
{
 __be32 VAR_13 = *(__be32*)VAR_12->primary_key;
 struct net_device *VAR_14 = VAR_12->dev;
 struct in_device *VAR_15;
 struct neigh_parms *VAR_16;

 FUNC_7();
 VAR_15 = FUNC_0(VAR_14);
 if (VAR_15 == ((void*)0)) {
  FUNC_8();
  return -VAR_0;
 }

 VAR_12->type = FUNC_4(FUNC_3(VAR_14), VAR_13);

 VAR_16 = VAR_15->arp_parms;
 FUNC_1(VAR_12->parms);
 VAR_12->parms = FUNC_6(VAR_16);
 FUNC_8();

 if (!VAR_14->header_ops) {
  VAR_12->nud_state = VAR_4;
  VAR_12->ops = &VAR_9;
  VAR_12->output = VAR_12->ops->queue_xmit;
 } else {
  switch (VAR_14->type) {
  default:
   break;
  case 128:
  ;}

  if (VAR_12->type == VAR_7) {
   VAR_12->nud_state = VAR_4;
   FUNC_2(VAR_13, VAR_12->ha, VAR_14, 1);
  } else if (VAR_14->flags&(VAR_2|VAR_1)) {
   VAR_12->nud_state = VAR_4;
   FUNC_5(VAR_12->ha, VAR_14->dev_addr, VAR_14->addr_len);
  } else if (VAR_12->type == VAR_6 || VAR_14->flags&VAR_3) {
   VAR_12->nud_state = VAR_4;
   FUNC_5(VAR_12->ha, VAR_14->broadcast, VAR_14->addr_len);
  }

  if (VAR_14->header_ops->cache)
   VAR_12->ops = &VAR_11;
  else
   VAR_12->ops = &VAR_10;

  if (VAR_12->nud_state&VAR_5)
   VAR_12->output = VAR_12->ops->connected_output;
  else
   VAR_12->output = VAR_12->ops->output;
 }
 return 0;
}
