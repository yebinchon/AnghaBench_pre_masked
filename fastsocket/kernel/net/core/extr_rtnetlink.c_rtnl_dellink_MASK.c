
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct rtnl_link_ops {int (* dellink ) (struct net_device*) ;} ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {struct rtnl_link_ops* rtnl_link_ops; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 struct net_device* FUNC_1 (struct net*,char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,struct nlattr*,int) ;
 struct ifinfomsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct nlmsghdr *VAR_8, void *VAR_9)
{
 struct net *VAR_10 = FUNC_5(VAR_7->sk);
 const struct rtnl_link_ops *VAR_11;
 struct net_device *VAR_12;
 struct ifinfomsg *VAR_13;
 char VAR_14[VAR_5];
 struct nlattr *VAR_15[VAR_4+1];
 int VAR_16;

 VAR_16 = FUNC_4(VAR_8, sizeof(*VAR_13), VAR_15, VAR_4, VAR_6);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_15[VAR_3])
  FUNC_2(VAR_14, VAR_15[VAR_3], VAR_5);

 VAR_13 = FUNC_3(VAR_8);
 if (VAR_13->ifi_index > 0)
  VAR_12 = FUNC_0(VAR_10, VAR_13->ifi_index);
 else if (VAR_15[VAR_3])
  VAR_12 = FUNC_1(VAR_10, VAR_14);
 else
  return -VAR_0;

 if (!VAR_12)
  return -VAR_1;

 VAR_11 = VAR_12->rtnl_link_ops;
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dellink(VAR_12);
 return 0;
}
