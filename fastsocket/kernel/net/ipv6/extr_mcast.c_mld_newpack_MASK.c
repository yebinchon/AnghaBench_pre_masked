
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct sock* igmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct mld2_report {scalar_t__ mld2r_ngrec; scalar_t__ mld2r_resv2; scalar_t__ mld2r_cksum; scalar_t__ mld2r_resv1; int mld2r_type; } ;
struct in6_addr {int dummy; } ;
typedef int ra ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 struct net* FUNC_2 (struct net_device*) ;
 struct in6_addr VAR_6 ;
 int FUNC_3 (struct sock*,struct sk_buff*,struct net_device*,struct in6_addr const*,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,struct in6_addr*,int ) ;
 int FUNC_5 (int ,int*,int) ;
 int VAR_7 ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (struct sock*,scalar_t__,int,int*) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct net_device *VAR_8, int VAR_9)
{
 struct net *VAR_10 = FUNC_2(VAR_8);
 struct sock *VAR_11 = VAR_10->ipv6.igmp_sk;
 struct sk_buff *VAR_12;
 struct mld2_report *VAR_13;
 struct in6_addr VAR_14;
 const struct in6_addr *VAR_15;
 int VAR_16;
 u8 VAR_17[8] = { VAR_2, 0,
       VAR_4, 2, 0, 0,
       VAR_3, 0 };


 VAR_12 = FUNC_11(VAR_11, VAR_9 + FUNC_0(VAR_8), 1, &VAR_16);

 if (!VAR_12)
  return ((void*)0);

 FUNC_7(VAR_12, FUNC_1(VAR_8));

 if (FUNC_4(VAR_8, &VAR_14, VAR_1)) {




  VAR_15 = &VAR_6;
 } else
  VAR_15 = &VAR_14;

 FUNC_3(VAR_11, VAR_12, VAR_8, VAR_15, &VAR_7, VAR_5, 0);

 FUNC_5(FUNC_6(VAR_12, sizeof(VAR_17)), VAR_17, sizeof(VAR_17));

 FUNC_8(VAR_12, FUNC_9(VAR_12) - VAR_12->data);
 FUNC_6(VAR_12, sizeof(*VAR_13));
 VAR_13 = (struct mld2_report *)FUNC_10(VAR_12);
 VAR_13->mld2r_type = VAR_0;
 VAR_13->mld2r_resv1 = 0;
 VAR_13->mld2r_cksum = 0;
 VAR_13->mld2r_resv2 = 0;
 VAR_13->mld2r_ngrec = 0;
 return VAR_12;
}
