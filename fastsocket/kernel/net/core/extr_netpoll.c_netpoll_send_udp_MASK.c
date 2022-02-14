
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int source; int dest; int len; scalar_t__ check; } ;
struct sk_buff {int len; int protocol; TYPE_1__* dev; } ;
struct netpoll {int local_port; int remote_port; int local_ip; int remote_ip; TYPE_1__* dev; int remote_mac; } ;
struct iphdr {unsigned char tot_len; int ttl; unsigned char saddr; unsigned char daddr; int ihl; scalar_t__ check; int protocol; scalar_t__ frag_off; scalar_t__ id; scalar_t__ tos; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct udphdr*,int,int ) ;
 scalar_t__ FUNC_1 (int,int,int,int ,int ) ;
 struct sk_buff* FUNC_2 (struct netpoll*,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned char*,int ) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct netpoll*,struct sk_buff*) ;
 int FUNC_8 (int,unsigned char*) ;
 int FUNC_9 (struct sk_buff*,char const*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct udphdr* FUNC_14 (struct sk_buff*) ;

void FUNC_15(struct netpoll *VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct sk_buff *VAR_13;
 struct udphdr *VAR_14;
 struct iphdr *VAR_15;
 struct ethhdr *VAR_16;

 VAR_12 = VAR_8 + sizeof(*VAR_14);
 VAR_11 = VAR_10 = VAR_12 + sizeof(*VAR_15);
 VAR_9 = VAR_10 + VAR_2 + VAR_5;

 VAR_13 = FUNC_2(VAR_6, VAR_9, VAR_9 - VAR_8);
 if (!VAR_13)
  return;

 FUNC_9(VAR_13, VAR_7, VAR_8);
 VAR_13->len += VAR_8;

 FUNC_10(VAR_13, sizeof(*VAR_14));
 FUNC_13(VAR_13);
 VAR_14 = FUNC_14(VAR_13);
 VAR_14->source = FUNC_3(VAR_6->local_port);
 VAR_14->dest = FUNC_3(VAR_6->remote_port);
 VAR_14->len = FUNC_3(VAR_12);
 VAR_14->check = 0;
 VAR_14->check = FUNC_1(VAR_6->local_ip,
     VAR_6->remote_ip,
     VAR_12, VAR_4,
     FUNC_0(VAR_14, VAR_12, 0));
 if (VAR_14->check == 0)
  VAR_14->check = VAR_0;

 FUNC_10(VAR_13, sizeof(*VAR_15));
 FUNC_12(VAR_13);
 VAR_15 = FUNC_5(VAR_13);


 FUNC_8(0x45, (unsigned char *)VAR_15);
 VAR_15->tos = 0;
 FUNC_8(FUNC_3(VAR_11), &(VAR_15->tot_len));
 VAR_15->id = 0;
 VAR_15->frag_off = 0;
 VAR_15->ttl = 64;
 VAR_15->protocol = VAR_4;
 VAR_15->check = 0;
 FUNC_8(VAR_6->local_ip, &(VAR_15->saddr));
 FUNC_8(VAR_6->remote_ip, &(VAR_15->daddr));
 VAR_15->check = FUNC_4((unsigned char *)VAR_15, VAR_15->ihl);

 VAR_16 = (struct ethhdr *) FUNC_10(VAR_13, VAR_2);
 FUNC_11(VAR_13);
 VAR_13->protocol = VAR_16->h_proto = FUNC_3(VAR_3);
 FUNC_6(VAR_16->h_source, VAR_6->dev->dev_addr, VAR_1);
 FUNC_6(VAR_16->h_dest, VAR_6->remote_mac, VAR_1);

 VAR_13->dev = VAR_6->dev;

 FUNC_7(VAR_6, VAR_13);
}
