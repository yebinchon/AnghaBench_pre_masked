
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
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
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_9 (struct sk_buff*,struct net*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, struct nlattr **VAR_9,
     u32 VAR_10, u32 VAR_11, u16 VAR_12)
{
 struct net *VAR_13 = FUNC_2(VAR_8);
 struct sk_buff *VAR_14;
 struct nlmsghdr *VAR_15;
 struct dcbmsg *VAR_16;
 const struct dcbnl_rtnl_ops *VAR_17 = VAR_8->dcbnl_ops;
 int VAR_18;

 if (!VAR_17)
  return -VAR_4;

 VAR_14 = FUNC_7(VAR_6, VAR_5);
 if (!VAR_14)
  return -VAR_3;

 VAR_15 = FUNC_8(VAR_14, VAR_10, VAR_11, VAR_7, sizeof(*VAR_16), VAR_12);
 if (VAR_15 == ((void*)0)) {
  FUNC_6(VAR_14);
  return -VAR_2;
 }

 VAR_16 = FUNC_0(VAR_15);
 VAR_16->dcb_family = VAR_0;
 VAR_16->cmd = VAR_1;

 VAR_18 = FUNC_1(VAR_14, VAR_8);

 if (VAR_18 < 0) {
  FUNC_4(VAR_14, VAR_15);
  FUNC_3(VAR_14);
 } else {
  FUNC_5(VAR_14, VAR_15);
  VAR_18 = FUNC_9(VAR_14, VAR_13, VAR_10);
 }

 return VAR_18;
}
