
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {int ifa_prefixlen; int ifa_index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct in6_addr* FUNC_0 (struct nlattr*,struct nlattr*) ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ,struct in6_addr*,int ) ;
 struct ifaddrmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6, void *VAR_7)
{
 struct net *VAR_8 = FUNC_4(VAR_5->sk);
 struct ifaddrmsg *VAR_9;
 struct nlattr *VAR_10[VAR_3+1];
 struct in6_addr *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_6, sizeof(*VAR_9), VAR_10, VAR_3, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9 = FUNC_2(VAR_6);
 VAR_11 = FUNC_0(VAR_10[VAR_1], VAR_10[VAR_2]);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 return FUNC_1(VAR_8, VAR_9->ifa_index, VAR_11, VAR_9->ifa_prefixlen);
}
