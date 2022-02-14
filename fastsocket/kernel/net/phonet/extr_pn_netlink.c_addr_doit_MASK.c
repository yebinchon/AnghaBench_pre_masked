
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifaddrmsg {int ifa_index; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (scalar_t__,struct net_device*,int) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9, void *VAR_10)
{
 struct net *VAR_11 = FUNC_9(VAR_8->sk);
 struct nlattr *VAR_12[VAR_5+1];
 struct net_device *VAR_13;
 struct ifaddrmsg *VAR_14;
 int VAR_15;
 u8 VAR_16;

 if (!FUNC_2(VAR_0))
  return -VAR_3;

 FUNC_0();

 VAR_15 = FUNC_5(VAR_9, sizeof(*VAR_14), VAR_12, VAR_5, VAR_7);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_4(VAR_9);
 if (VAR_12[VAR_4] == ((void*)0))
  return -VAR_1;
 VAR_16 = FUNC_3(VAR_12[VAR_4]);
 if (VAR_16 & 3)

  return -VAR_1;

 VAR_13 = FUNC_1(VAR_11, VAR_14->ifa_index);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 if (VAR_9->nlmsg_type == VAR_6)
  VAR_15 = FUNC_6(VAR_13, VAR_16);
 else
  VAR_15 = FUNC_7(VAR_13, VAR_16);
 if (!VAR_15)
  FUNC_8(VAR_9->nlmsg_type, VAR_13, VAR_16);
 return VAR_15;
}
