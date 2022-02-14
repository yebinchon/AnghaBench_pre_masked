
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct net_bridge_port {scalar_t__ state; struct net_bridge* br; } ;
struct net_bridge_mdb_entry {scalar_t__ mglist; } ;
struct net_bridge_fdb_entry {int dst; scalar_t__ is_local; } ;
struct net_bridge {TYPE_3__* dev; } ;
struct TYPE_10__ {scalar_t__ mrouters_only; TYPE_3__* brdev; } ;
struct TYPE_9__ {unsigned char* h_dest; int h_source; } ;
struct TYPE_7__ {int multicast; } ;
struct TYPE_8__ {int flags; TYPE_2__ stats; } ;
struct TYPE_6__ {int br_port; } ;


 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct net_bridge_fdb_entry* FUNC_1 (struct net_bridge*,unsigned char const*) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,int ) ;
 int FUNC_3 (struct net_bridge*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_4 (int ,struct sk_buff*,struct sk_buff*) ;
 struct net_bridge_mdb_entry* FUNC_5 (struct net_bridge*,struct sk_buff*) ;
 int FUNC_6 (struct net_bridge_mdb_entry*,struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct net_bridge*) ;
 scalar_t__ FUNC_8 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_4__* FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (unsigned char const*) ;
 scalar_t__ FUNC_12 (unsigned char const*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct net_bridge_port* FUNC_14 (int ) ;

int FUNC_15(struct sk_buff *VAR_3)
{
 const unsigned char *VAR_4 = FUNC_10(VAR_3)->h_dest;
 struct net_bridge_port *VAR_5 = FUNC_14(VAR_3->dev->br_port);
 struct net_bridge *VAR_6;
 struct net_bridge_fdb_entry *VAR_7;
 struct net_bridge_mdb_entry *VAR_8;
 struct sk_buff *VAR_9;

 if (!VAR_5 || VAR_5->state == VAR_0)
  goto drop;


 VAR_6 = VAR_5->br;
 FUNC_2(VAR_6, VAR_5, FUNC_10(VAR_3)->h_source);

 if (!FUNC_11(VAR_4) && FUNC_12(VAR_4) &&
     FUNC_8(VAR_6, VAR_5, VAR_3))
  goto drop;

 if (VAR_5->state == VAR_1)
  goto drop;

 FUNC_0(VAR_3)->brdev = VAR_6->dev;


 VAR_9 = ((void*)0);

 if (VAR_6->dev->flags & VAR_2)
  VAR_9 = VAR_3;

 VAR_7 = ((void*)0);

 if (FUNC_11(VAR_4))
  VAR_9 = VAR_3;
 else if (FUNC_12(VAR_4)) {
  VAR_8 = FUNC_5(VAR_6, VAR_3);
  if (VAR_8 || FUNC_0(VAR_3)->mrouters_only) {
   if ((VAR_8 && VAR_8->mglist) ||
       FUNC_7(VAR_6))
    VAR_9 = VAR_3;
   FUNC_6(VAR_8, VAR_3, VAR_9);
   VAR_3 = ((void*)0);
   if (!VAR_9)
    goto out;
  } else
   VAR_9 = VAR_3;

  VAR_6->dev->stats.multicast++;
 } else if ((VAR_7 = FUNC_1(VAR_6, VAR_4)) && VAR_7->is_local) {
  VAR_9 = VAR_3;

  VAR_3 = ((void*)0);
 }

 if (VAR_3) {
  if (VAR_7)
   FUNC_4(VAR_7->dst, VAR_3, VAR_9);
  else
   FUNC_3(VAR_6, VAR_3, VAR_9);
 }

 if (VAR_9)
  return FUNC_9(VAR_9);

out:
 return 0;
drop:
 FUNC_13(VAR_3);
 goto out;
}
