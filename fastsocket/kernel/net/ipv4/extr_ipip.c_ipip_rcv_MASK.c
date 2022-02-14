
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; scalar_t__ len; int pkt_type; int protocol; int network_header; int mac_header; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel {TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct iphdr const*,struct sk_buff*) ;
 int VAR_3 ;
 struct ip_tunnel* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_4)
{
 struct ip_tunnel *VAR_5;
 const struct iphdr *VAR_6 = FUNC_2(VAR_4);

 FUNC_8(&VAR_3);
 if ((VAR_5 = FUNC_4(FUNC_0(VAR_4->dev),
     VAR_6->saddr, VAR_6->daddr)) != ((void*)0)) {
  if (!FUNC_13(((void*)0), VAR_2, VAR_4)) {
   FUNC_9(&VAR_3);
   FUNC_5(VAR_4);
   return 0;
  }

  FUNC_10(VAR_4);

  VAR_4->mac_header = VAR_4->network_header;
  FUNC_12(VAR_4);
  VAR_4->protocol = FUNC_1(VAR_0);
  VAR_4->pkt_type = VAR_1;

  VAR_5->dev->stats.rx_packets++;
  VAR_5->dev->stats.rx_bytes += VAR_4->len;
  VAR_4->dev = VAR_5->dev;
  FUNC_11(VAR_4);
  FUNC_7(VAR_4);
  FUNC_3(VAR_6, VAR_4);
  FUNC_6(VAR_4);
  FUNC_9(&VAR_3);
  return 0;
 }
 FUNC_9(&VAR_3);

 return -1;
}
