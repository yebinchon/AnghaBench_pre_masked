
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; scalar_t__ len; int pkt_type; int protocol; int network_header; int mac_header; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel {TYPE_2__* dev; } ;
struct TYPE_7__ {scalar_t__ flags; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct TYPE_6__ {int priv_flags; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*,struct sk_buff*) ;
 int VAR_5 ;
 struct ip_tunnel* FUNC_6 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct iphdr*,struct ip_tunnel*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_6)
{
 struct iphdr *VAR_7;
 struct ip_tunnel *VAR_8;

 if (!FUNC_11(VAR_6, sizeof(struct ipv6hdr)))
  goto out;

 VAR_7 = FUNC_4(VAR_6);

 FUNC_12(&VAR_5);
 VAR_8 = FUNC_6(FUNC_1(VAR_6->dev), VAR_6->dev,
         VAR_7->saddr, VAR_7->daddr);
 if (VAR_8 != ((void*)0)) {
  FUNC_14(VAR_6);
  VAR_6->mac_header = VAR_6->network_header;
  FUNC_16(VAR_6);
  FUNC_0(VAR_6)->flags = 0;
  VAR_6->protocol = FUNC_2(VAR_0);
  VAR_6->pkt_type = VAR_4;

  if ((VAR_8->dev->priv_flags & VAR_3) &&
      !FUNC_7(VAR_6, VAR_7, VAR_8)) {
   VAR_8->dev->stats.rx_errors++;
   FUNC_13(&VAR_5);
   FUNC_8(VAR_6);
   return 0;
  }
  VAR_8->dev->stats.rx_packets++;
  VAR_8->dev->stats.rx_bytes += VAR_6->len;
  VAR_6->dev = VAR_8->dev;
  FUNC_15(VAR_6);
  FUNC_10(VAR_6);
  FUNC_5(VAR_7, VAR_6);
  FUNC_9(VAR_6);
  FUNC_13(&VAR_5);
  return 0;
 }

 FUNC_3(VAR_6, VAR_1, VAR_2, 0);
 FUNC_13(&VAR_5);
out:
 FUNC_8(VAR_6);
 return 0;
}
