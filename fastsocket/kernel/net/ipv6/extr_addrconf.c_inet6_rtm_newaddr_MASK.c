
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {int ifa_flags; int ifa_prefixlen; int ifa_index; } ;
struct ifa_cacheinfo {int ifa_prefered; int ifa_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 struct in6_addr* FUNC_1 (struct nlattr*,struct nlattr*) ;
 int VAR_12 ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct net*,int ,struct in6_addr*,int ,int,int ,int ) ;
 int FUNC_4 (struct inet6_ifaddr*,int,int ,int ) ;
 struct inet6_ifaddr* FUNC_5 (struct net*,struct in6_addr*,struct net_device*,int) ;
 struct ifa_cacheinfo* FUNC_6 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_13, struct nlmsghdr *VAR_14, void *VAR_15)
{
 struct net *VAR_16 = FUNC_9(VAR_13->sk);
 struct ifaddrmsg *VAR_17;
 struct nlattr *VAR_18[VAR_8+1];
 struct in6_addr *VAR_19;
 struct inet6_ifaddr *VAR_20;
 struct net_device *VAR_21;
 u32 VAR_22 = VAR_9, VAR_23 = VAR_9;
 u8 VAR_24;
 int VAR_25;

 VAR_25 = FUNC_8(VAR_14, sizeof(*VAR_17), VAR_18, VAR_8, VAR_12);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_17 = FUNC_7(VAR_14);
 VAR_19 = FUNC_1(VAR_18[VAR_3], VAR_18[VAR_7]);
 if (VAR_19 == ((void*)0))
  return -VAR_1;

 if (VAR_18[VAR_4]) {
  struct ifa_cacheinfo *VAR_26;

  VAR_26 = FUNC_6(VAR_18[VAR_4]);
  VAR_22 = VAR_26->ifa_valid;
  VAR_23 = VAR_26->ifa_prefered;
 } else {
  VAR_23 = VAR_9;
  VAR_22 = VAR_9;
 }

 VAR_21 = FUNC_0(VAR_16, VAR_17->ifa_index);
 if (VAR_21 == ((void*)0))
  return -VAR_2;


 VAR_24 = VAR_17->ifa_flags & (VAR_6 | VAR_5);

 VAR_20 = FUNC_5(VAR_16, VAR_19, VAR_21, 1);
 if (VAR_20 == ((void*)0)) {




  return FUNC_3(VAR_16, VAR_17->ifa_index, VAR_19,
          VAR_17->ifa_prefixlen, VAR_24,
          VAR_23, VAR_22);
 }

 if (VAR_14->nlmsg_flags & VAR_10 ||
     !(VAR_14->nlmsg_flags & VAR_11))
  VAR_25 = -VAR_0;
 else
  VAR_25 = FUNC_4(VAR_20, VAR_24, VAR_23, VAR_22);

 FUNC_2(VAR_20);

 return VAR_25;
}
