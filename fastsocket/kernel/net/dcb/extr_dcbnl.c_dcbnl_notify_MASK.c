
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {struct dcbnl_rtnl_ops* dcbnl_ops; } ;
struct net {int dummy; } ;
struct dcbnl_rtnl_ops {int dummy; } ;
struct dcbmsg {int cmd; int dcb_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_10 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_11 (struct net*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_8, int VAR_9, int VAR_10,
   u32 VAR_11, u32 VAR_12, int VAR_13)
{
 struct net *VAR_14 = FUNC_3(VAR_8);
 struct sk_buff *VAR_15;
 struct nlmsghdr *VAR_16;
 struct dcbmsg *VAR_17;
 const struct dcbnl_rtnl_ops *VAR_18 = VAR_8->dcbnl_ops;
 int VAR_19;

 if (!VAR_18)
  return -VAR_4;

 VAR_15 = FUNC_8(VAR_6, VAR_5);
 if (!VAR_15)
  return -VAR_3;

 VAR_16 = FUNC_9(VAR_15, VAR_12, 0, VAR_9, sizeof(*VAR_17), 0);
 if (VAR_16 == ((void*)0)) {
  FUNC_7(VAR_15);
  return -VAR_2;
 }

 VAR_17 = FUNC_0(VAR_16);
 VAR_17->dcb_family = VAR_0;
 VAR_17->cmd = VAR_10;

 if (VAR_13 == VAR_1)
  VAR_19 = FUNC_2(VAR_15, VAR_8);
 else
  VAR_19 = FUNC_1(VAR_15, VAR_8);

 if (VAR_19 < 0) {

  FUNC_5(VAR_15, VAR_16);
  FUNC_4(VAR_15);
  FUNC_11(VAR_14, VAR_7, VAR_19);
 } else {

  FUNC_6(VAR_15, VAR_16);
  FUNC_10(VAR_15, VAR_14, 0, VAR_7, ((void*)0), VAR_5);
 }

 return VAR_19;
}
