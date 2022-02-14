
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {unsigned int logflags; scalar_t__ level; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
struct nf_loginfo {scalar_t__ type; TYPE_2__ u; } ;
struct net_device {char* name; } ;
struct ipv6hdr {int ihl; scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; int ip_dst; int mac_dst; int ip_src; int mac_src; int nexthdr; int priority; int daddr; int saddr; int protocol; int tos; } ;
struct iphdr {int ihl; scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; int ip_dst; int mac_dst; int ip_src; int mac_src; int nexthdr; int priority; int daddr; int saddr; int protocol; int tos; } ;
struct arppayload {int ihl; scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; int ip_dst; int mac_dst; int ip_src; int mac_src; int nexthdr; int priority; int daddr; int saddr; int protocol; int tos; } ;
struct arphdr {int ihl; scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_op; scalar_t__ ar_hln; int ar_pln; int ip_dst; int mac_dst; int ip_src; int mac_src; int nexthdr; int priority; int daddr; int saddr; int protocol; int tos; } ;
typedef int _iph ;
typedef int _arpp ;
typedef int _arph ;
typedef int __be32 ;
struct TYPE_6__ {scalar_t__ h_proto; int h_dest; int h_source; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff const*,int,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff const*,int ,int) ;
 int FUNC_5 (char*,...) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff const*,int,int,struct ipv6hdr*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(u_int8_t VAR_11, unsigned int VAR_12,
   const struct sk_buff *VAR_13, const struct net_device *VAR_14,
   const struct net_device *VAR_15, const struct nf_loginfo *VAR_16,
   const char *VAR_17)
{
 unsigned int VAR_18;

 FUNC_7(&VAR_10);
 FUNC_5("<%c>%s IN=%s OUT=%s MAC source = %pM MAC dest = %pM proto = 0x%04x",
        '0' + VAR_16->u.log.level, VAR_17,
        VAR_14 ? VAR_14->name : "", VAR_15 ? VAR_15->name : "",
        FUNC_0(VAR_13)->h_source, FUNC_0(VAR_13)->h_dest,
        FUNC_3(FUNC_0(VAR_13)->h_proto));

 if (VAR_16->type == VAR_9)
  VAR_18 = VAR_16->u.log.logflags;
 else
  VAR_18 = VAR_8;

 if ((VAR_18 & VAR_1) && FUNC_0(VAR_13)->h_proto ==
    FUNC_1(VAR_5)){
  const struct iphdr *VAR_19;
  struct iphdr VAR_20;

  VAR_19 = FUNC_6(VAR_13, 0, sizeof(VAR_20), &VAR_20);
  if (VAR_19 == ((void*)0)) {
   FUNC_5(" INCOMPLETE IP header");
   goto out;
  }
  FUNC_5(" IP SRC=%pI4 IP DST=%pI4, IP tos=0x%02X, IP proto=%d",
         &VAR_19->saddr, &VAR_19->daddr, VAR_19->tos, VAR_19->protocol);
  FUNC_4(VAR_13, VAR_19->protocol, VAR_19->ihl*4);
  goto out;
 }
 if ((VAR_18 & VAR_0) &&
     ((FUNC_0(VAR_13)->h_proto == FUNC_1(VAR_4)) ||
      (FUNC_0(VAR_13)->h_proto == FUNC_1(VAR_7)))) {
  const struct arphdr *VAR_21;
  struct arphdr VAR_22;

  VAR_21 = FUNC_6(VAR_13, 0, sizeof(VAR_22), &VAR_22);
  if (VAR_21 == ((void*)0)) {
   FUNC_5(" INCOMPLETE ARP header");
   goto out;
  }
  FUNC_5(" ARP HTYPE=%d, PTYPE=0x%04x, OPCODE=%d",
         FUNC_3(VAR_21->ar_hrd), FUNC_3(VAR_21->ar_pro),
         FUNC_3(VAR_21->ar_op));



  if (VAR_21->ar_hrd == FUNC_1(1) &&
      VAR_21->ar_hln == VAR_3 &&
      VAR_21->ar_pln == sizeof(__be32)) {
   const struct arppayload *VAR_23;
   struct arppayload VAR_24;

   VAR_23 = FUNC_6(VAR_13, sizeof(VAR_22),
      sizeof(VAR_24), &VAR_24);
   if (VAR_23 == ((void*)0)) {
    FUNC_5(" INCOMPLETE ARP payload");
    goto out;
   }
   FUNC_5(" ARP MAC SRC=%pM ARP IP SRC=%pI4 ARP MAC DST=%pM ARP IP DST=%pI4",
     VAR_23->mac_src, VAR_23->ip_src, VAR_23->mac_dst, VAR_23->ip_dst);
  }
 }
out:
 FUNC_5("\n");
 FUNC_8(&VAR_10);

}
