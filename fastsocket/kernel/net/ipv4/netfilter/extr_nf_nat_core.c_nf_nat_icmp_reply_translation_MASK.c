
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct sk_buff {scalar_t__ nfctinfo; scalar_t__ ip_summed; scalar_t__ len; scalar_t__ data; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_l4proto {int dummy; } ;
struct nf_conn {int status; TYPE_1__* tuplehash; } ;
struct iphdr {int ihl; int protocol; } ;
struct icmphdr {scalar_t__ type; scalar_t__ checksum; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_2__ {struct nf_conntrack_tuple tuple; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 struct nf_conntrack_l4proto* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_13 ;
 int FUNC_6 (int ,struct sk_buff*,int,struct nf_conntrack_tuple*,int) ;
 int FUNC_7 (struct sk_buff*,int,int,int ,int ,struct nf_conntrack_tuple*,int ,struct nf_conntrack_l4proto const*) ;
 int FUNC_8 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned int,int,int ) ;
 int FUNC_10 (char*,struct sk_buff*,int,char*) ;
 int FUNC_11 (struct sk_buff*,int,scalar_t__,int ) ;
 int FUNC_12 (struct sk_buff*,int) ;

int FUNC_13(struct nf_conn *VAR_14,
      enum ip_conntrack_info VAR_15,
      unsigned int VAR_16,
      struct sk_buff *VAR_17)
{
 struct {
  struct icmphdr icmp;
  struct iphdr ip;
 } *VAR_18;
 const struct nf_conntrack_l4proto *VAR_19;
 struct nf_conntrack_tuple VAR_20, VAR_21;
 int VAR_22 = FUNC_5(VAR_17);
 enum ip_conntrack_dir VAR_23 = FUNC_0(VAR_15);
 unsigned long VAR_24;
 enum nf_nat_manip_type VAR_25 = FUNC_1(VAR_16);

 if (!FUNC_12(VAR_17, VAR_22 + sizeof(*VAR_18)))
  return 0;

 VAR_18 = (void *)VAR_17->data + FUNC_5(VAR_17);



 if (FUNC_9(VAR_17, VAR_16, VAR_22, 0))
  return 0;


 FUNC_2(VAR_17->nfctinfo == VAR_10 ||
       VAR_17->nfctinfo == VAR_10+VAR_9);




 if (VAR_18->icmp.type == VAR_2) {

  if ((VAR_14->status & VAR_4) != VAR_4)
   return 0;

  if (VAR_14->status & VAR_5)
   return 0;
 }

 FUNC_10("icmp_reply_translation: translating error %p manip %u "
   "dir %s\n", VAR_17, VAR_25,
   VAR_23 == VAR_7 ? "ORIG" : "REPLY");


 VAR_19 = FUNC_3(VAR_12, VAR_18->ip.protocol);

 if (!FUNC_7(VAR_17,
        FUNC_5(VAR_17) + sizeof(struct icmphdr),
        (FUNC_5(VAR_17) +
         sizeof(struct icmphdr) + VAR_18->ip.ihl * 4),
        (u_int16_t)VAR_0,
        VAR_18->ip.protocol,
        &VAR_20, VAR_13, VAR_19))
  return 0;






 if (!FUNC_6(VAR_18->ip.protocol, VAR_17,
         FUNC_5(VAR_17) + sizeof(VAR_18->icmp),
         &VAR_14->tuplehash[!VAR_23].tuple,
         !VAR_25))
  return 0;

 if (VAR_17->ip_summed != VAR_1) {

  VAR_18 = (void *)VAR_17->data + FUNC_5(VAR_17);
  VAR_18->icmp.checksum = 0;
  VAR_18->icmp.checksum =
   FUNC_4(FUNC_11(VAR_17, VAR_22,
            VAR_17->len - VAR_22, 0));
 }



 if (VAR_25 == VAR_11)
  VAR_24 = VAR_6;
 else
  VAR_24 = VAR_3;


 if (VAR_23 == VAR_8)
  VAR_24 ^= VAR_5;

 if (VAR_14->status & VAR_24) {
  FUNC_8(&VAR_21, &VAR_14->tuplehash[!VAR_23].tuple);
  if (!FUNC_6(0, VAR_17, 0, &VAR_21, VAR_25))
   return 0;
 }

 return 1;
}
