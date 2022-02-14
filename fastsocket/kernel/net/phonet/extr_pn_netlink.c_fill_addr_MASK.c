
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int ifindex; } ;
struct ifaddrmsg {int ifa_index; int ifa_scope; int ifa_flags; scalar_t__ ifa_prefixlen; int ifa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifaddrmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, struct net_device *VAR_6, u8 VAR_7,
   u32 VAR_8, u32 VAR_9, int VAR_10)
{
 struct ifaddrmsg *VAR_11;
 struct nlmsghdr *VAR_12;

 VAR_12 = FUNC_4(VAR_5, VAR_8, VAR_9, VAR_10, sizeof(*VAR_11), 0);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_11 = FUNC_2(VAR_12);
 VAR_11->ifa_family = VAR_0;
 VAR_11->ifa_prefixlen = 0;
 VAR_11->ifa_flags = VAR_2;
 VAR_11->ifa_scope = VAR_4;
 VAR_11->ifa_index = VAR_6->ifindex;
 FUNC_0(VAR_5, VAR_3, VAR_7);
 return FUNC_3(VAR_5, VAR_12);

nla_put_failure:
 FUNC_1(VAR_5, VAR_12);
 return -VAR_1;
}
