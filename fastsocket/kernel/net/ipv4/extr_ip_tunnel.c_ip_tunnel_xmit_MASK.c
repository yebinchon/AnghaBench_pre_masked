
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct TYPE_14__ {int header_len; struct net_device* dev; } ;
struct TYPE_10__ {TYPE_7__ dst; } ;
struct rtable {scalar_t__ rt_gateway; TYPE_3__ u; } ;
struct TYPE_13__ {int tx_errors; int tx_dropped; int collisions; int tx_carrier_errors; int tx_fifo_errors; } ;
struct net_device {unsigned int needed_headroom; TYPE_6__ stats; } ;
struct neighbour {int primary_key; } ;
struct ipv6hdr {int hop_limit; } ;
struct iphdr {scalar_t__ daddr; int tos; int frag_off; int ttl; int saddr; } ;
struct TYPE_8__ {int protocol; } ;
struct TYPE_9__ {int link; int o_key; TYPE_1__ iph; } ;
struct ip_tunnel {scalar_t__ err_count; scalar_t__ err_time; TYPE_2__ parms; scalar_t__ hlen; } ;
struct in6_addr {scalar_t__* s6_addr32; } ;
struct flowi {int fl4_dst; int fl4_src; } ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;
struct TYPE_12__ {struct in6_addr daddr; } ;
struct TYPE_11__ {struct neighbour* neighbour; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (int ) ;
 struct rtable* FUNC_8 (int ,struct flowi*,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_9 (struct rtable*) ;
 int FUNC_10 (int,struct iphdr const*,struct sk_buff*) ;
 int FUNC_11 (int ,struct rtable*,struct sk_buff*,int ,int ,int const,int ,int,int,struct iphdr const*) ;
 int FUNC_12 (int,TYPE_6__*) ;
 int FUNC_13 (struct in6_addr const*) ;
 int FUNC_14 (struct ipv6hdr const*) ;
 TYPE_5__* FUNC_15 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_16 (struct neighbour*) ;
 struct ip_tunnel* FUNC_17 (struct net_device*) ;
 scalar_t__ FUNC_18 (struct sk_buff*,unsigned int) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 struct rtable* FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (int ,scalar_t__) ;
 scalar_t__ FUNC_22 (struct net_device*,struct sk_buff*,struct rtable*,int) ;

void FUNC_23(struct sk_buff *VAR_8, struct net_device *VAR_9,
      const struct iphdr *VAR_10, const u8 VAR_11)
{
 struct ip_tunnel *VAR_12 = FUNC_17(VAR_9);
 const struct iphdr *VAR_13;
 struct flowi VAR_14;
 u8 VAR_15, VAR_16;
 __be16 VAR_17;
 struct rtable *VAR_18;
 unsigned int VAR_19;
 __be32 VAR_20;
 int VAR_21;


 VAR_13 = (const struct iphdr *)(VAR_8->data + VAR_12->hlen);

 VAR_20 = VAR_10->daddr;
 if (VAR_20 == 0) {


  if (FUNC_19(VAR_8) == ((void*)0)) {
   VAR_9->stats.tx_fifo_errors++;
   goto tx_error;
  }

  if (VAR_8->protocol == FUNC_7(VAR_0)) {
   VAR_18 = FUNC_20(VAR_8);
   if (VAR_18->rt_gateway)
    VAR_20 = VAR_18->rt_gateway;
   else
    VAR_20 = VAR_13->daddr;
  }
  else
   goto tx_error;
 }

 VAR_15 = VAR_10->tos;
 if (VAR_15 & 0x1) {
  VAR_15 &= ~0x1;
  if (VAR_8->protocol == FUNC_7(VAR_0))
   VAR_15 = VAR_13->tos;
  else if (VAR_8->protocol == FUNC_7(VAR_1))
   VAR_15 = FUNC_14((const struct ipv6hdr *)VAR_13);
 }

 VAR_18 = FUNC_8(FUNC_4(VAR_9), &VAR_14,
        VAR_12->parms.iph.protocol,
        VAR_20, VAR_10->saddr,
        VAR_12->parms.o_key,
        FUNC_2(VAR_15),
        VAR_12->parms.link);
 if (FUNC_0(VAR_18)) {
  VAR_9->stats.tx_carrier_errors++;
  goto tx_error;
 }
 if (VAR_18->u.dst.dev == VAR_9) {
  FUNC_9(VAR_18);
  VAR_9->stats.collisions++;
  goto tx_error;
 }

 if (FUNC_22(VAR_9, VAR_8, VAR_18, VAR_10->frag_off)) {
  FUNC_9(VAR_18);
  goto tx_error;
 }

 if (VAR_12->err_count > 0) {
  if (FUNC_21(VAR_7,
    VAR_12->err_time + VAR_2)) {
   VAR_12->err_count--;

   FUNC_5(VAR_8);
  } else
   VAR_12->err_count = 0;
 }

 VAR_16 = VAR_10->ttl;
 if (VAR_16 == 0) {
  if (VAR_8->protocol == FUNC_7(VAR_0))
   VAR_16 = VAR_13->ttl;




  else
   VAR_16 = FUNC_6(&VAR_18->u.dst, VAR_6);
 }

 VAR_17 = VAR_10->frag_off;
 if (VAR_8->protocol == FUNC_7(VAR_0))
  VAR_17 |= (VAR_13->frag_off&FUNC_7(VAR_5));

 VAR_19 = FUNC_1(VAR_18->u.dst.dev) + sizeof(struct iphdr)
   + VAR_18->u.dst.header_len;
 if (VAR_19 > VAR_9->needed_headroom) {
  VAR_9->needed_headroom = VAR_19;
  if (FUNC_18(VAR_8, VAR_9->needed_headroom)) {
   VAR_9->stats.tx_dropped++;
   FUNC_3(VAR_8);
   return;
  }
 }

 VAR_21 = FUNC_11(FUNC_4(VAR_9), VAR_18, VAR_8,
       VAR_14, VAR_14, VAR_11,
       FUNC_10(VAR_15, VAR_13, VAR_8), VAR_16, VAR_17,
       VAR_13);
 FUNC_12(VAR_21, &VAR_9->stats);
 return;





tx_error:
 VAR_9->stats.tx_errors++;
 FUNC_3(VAR_8);
}
