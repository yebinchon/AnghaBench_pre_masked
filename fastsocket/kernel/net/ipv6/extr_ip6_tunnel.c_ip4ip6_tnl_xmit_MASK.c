
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ tos; } ;
struct TYPE_2__ {scalar_t__ proto; int flags; int encap_limit; } ;
struct ip6_tnl {TYPE_1__ parms; int fl; } ;
struct flowi {int fl6_flowlabel; scalar_t__ proto; } ;
typedef int fl ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,struct flowi*,int,int*) ;
 int FUNC_3 (struct ip6_tnl*) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*) ;
 int FUNC_6 (struct flowi*,int *,int) ;
 struct ip6_tnl* FUNC_7 (struct net_device*) ;

__attribute__((used)) static inline int
FUNC_8(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct ip6_tnl *VAR_10 = FUNC_7(VAR_9);
 struct iphdr *VAR_11 = FUNC_4(VAR_8);
 int VAR_12 = -1;
 struct flowi VAR_13;
 __u8 VAR_14;
 __u32 VAR_15;
 int VAR_16;

 if ((VAR_10->parms.proto != VAR_5 && VAR_10->parms.proto != 0) ||
     !FUNC_3(VAR_10))
  return -1;

 if (!(VAR_10->parms.flags & VAR_3))
  VAR_12 = VAR_10->parms.encap_limit;

 FUNC_6(&VAR_13, &VAR_10->fl, sizeof (VAR_13));
 VAR_13.proto = VAR_5;

 VAR_14 = FUNC_5(VAR_11);

 if ((VAR_10->parms.flags & VAR_4))
  VAR_13.fl6_flowlabel |= FUNC_0((__u32)VAR_11->tos << VAR_7)
       & VAR_6;

 VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_14, &VAR_13, VAR_12, &VAR_15);
 if (VAR_16 != 0) {

  if (VAR_16 == -VAR_0)
   FUNC_1(VAR_8, VAR_1, VAR_2,
      FUNC_0(VAR_15));
  return -1;
 }

 return 0;
}
