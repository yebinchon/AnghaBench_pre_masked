
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_tlv_tnl_enc_lim {int encap_limit; } ;
struct TYPE_2__ {scalar_t__ proto; int flags; int encap_limit; } ;
struct ip6_tnl {TYPE_1__ parms; int fl; } ;
struct flowi {int fl6_flowlabel; scalar_t__ proto; } ;
typedef int fl ;
typedef int __u8 ;
typedef size_t __u32 ;
typedef size_t __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,int ,int ,size_t,struct net_device*) ;
 scalar_t__ FUNC_1 (struct ip6_tnl*,struct ipv6hdr*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,struct flowi*,int,size_t*) ;
 int FUNC_3 (struct ip6_tnl*) ;
 int FUNC_4 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct flowi*,int *,int) ;
 struct ip6_tnl* FUNC_7 (struct net_device*) ;
 size_t FUNC_8 (struct sk_buff*,int *) ;
 int * FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_10(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct ip6_tnl *VAR_12 = FUNC_7(VAR_11);
 struct ipv6hdr *VAR_13 = FUNC_5(VAR_10);
 int VAR_14 = -1;
 __u16 VAR_15;
 struct flowi VAR_16;
 __u8 VAR_17;
 __u32 VAR_18;
 int VAR_19;

 if ((VAR_12->parms.proto != VAR_7 && VAR_12->parms.proto != 0) ||
     !FUNC_3(VAR_12) || FUNC_1(VAR_12, VAR_13))
  return -1;

 VAR_15 = FUNC_8(VAR_10, FUNC_9(VAR_10));
 if (VAR_15 > 0) {
  struct ipv6_tlv_tnl_enc_lim *VAR_20;
  VAR_20 = (struct ipv6_tlv_tnl_enc_lim *)&FUNC_9(VAR_10)[VAR_15];
  if (VAR_20->encap_limit == 0) {
   FUNC_0(VAR_10, VAR_2,
        VAR_1, VAR_15 + 2, VAR_10->dev);
   return -1;
  }
  VAR_14 = VAR_20->encap_limit - 1;
 } else if (!(VAR_12->parms.flags & VAR_4))
  VAR_14 = VAR_12->parms.encap_limit;

 FUNC_6(&VAR_16, &VAR_12->fl, sizeof (VAR_16));
 VAR_16.proto = VAR_7;

 VAR_17 = FUNC_4(VAR_13);
 if ((VAR_12->parms.flags & VAR_6))
  VAR_16.fl6_flowlabel |= (*(__be32 *) VAR_13 & VAR_9);
 if ((VAR_12->parms.flags & VAR_5))
  VAR_16.fl6_flowlabel |= (*(__be32 *) VAR_13 & VAR_8);

 VAR_19 = FUNC_2(VAR_10, VAR_11, VAR_17, &VAR_16, VAR_14, &VAR_18);
 if (VAR_19 != 0) {
  if (VAR_19 == -VAR_0)
   FUNC_0(VAR_10, VAR_3, 0, VAR_18, VAR_11);
  return -1;
 }

 return 0;
}
