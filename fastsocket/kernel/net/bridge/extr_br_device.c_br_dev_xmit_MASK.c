
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char* data; scalar_t__ len; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct net_bridge_mdb_entry {int dummy; } ;
struct net_bridge_fdb_entry {int dst; } ;
struct net_bridge {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {scalar_t__ mrouters_only; struct net_device* brdev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_bridge_fdb_entry* FUNC_1 (struct net_bridge*,unsigned char const*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct net_bridge*,struct sk_buff*) ;
 struct net_bridge_mdb_entry* FUNC_4 (struct net_bridge*,struct sk_buff*) ;
 int FUNC_5 (struct net_bridge_mdb_entry*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct net_bridge*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 scalar_t__ FUNC_8 (unsigned char const*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct net_bridge* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ) ;

netdev_tx_t FUNC_15(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct net_bridge *VAR_4 = FUNC_10(VAR_3);
 const unsigned char *VAR_5 = VAR_2->data;
 struct net_bridge_fdb_entry *VAR_6;
 struct net_bridge_mdb_entry *VAR_7;

 FUNC_0(VAR_2)->brdev = VAR_3;

 VAR_3->stats.tx_packets++;
 VAR_3->stats.tx_bytes += VAR_2->len;

 FUNC_13(VAR_2);
 FUNC_12(VAR_2, VAR_0);

 if (FUNC_7(VAR_5))
  FUNC_3(VAR_4, VAR_2);
 else if (FUNC_8(VAR_5)) {
  if (FUNC_14(FUNC_11(VAR_3))) {
   FUNC_3(VAR_4, VAR_2);
   goto out;
  }
  if (FUNC_6(VAR_4, ((void*)0), VAR_2)) {
   FUNC_9(VAR_2);
   goto out;
  }

  VAR_7 = FUNC_4(VAR_4, VAR_2);
  if (VAR_7 || FUNC_0(VAR_2)->mrouters_only)
   FUNC_5(VAR_7, VAR_2);
  else
   FUNC_3(VAR_4, VAR_2);
 } else if ((VAR_6 = FUNC_1(VAR_4, VAR_5)) != ((void*)0))
  FUNC_2(VAR_6->dst, VAR_2);
 else
  FUNC_3(VAR_4, VAR_2);

out:
 return VAR_1;
}
