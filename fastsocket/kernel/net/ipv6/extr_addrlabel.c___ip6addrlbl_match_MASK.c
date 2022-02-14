
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6addrlbl_entry {int ifindex; int addrtype; int prefixlen; int prefix; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct ip6addrlbl_entry*) ;
 int FUNC_1 (struct in6_addr const*,int *,int ) ;
 int FUNC_2 (int ,struct net*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_0,
         struct ip6addrlbl_entry *VAR_1,
         const struct in6_addr *VAR_2,
         int VAR_3, int VAR_4)
{
 if (!FUNC_2(FUNC_0(VAR_1), VAR_0))
  return 0;
 if (VAR_1->ifindex && VAR_1->ifindex != VAR_4)
  return 0;
 if (VAR_1->addrtype && VAR_1->addrtype != VAR_3)
  return 0;
 if (!FUNC_1(VAR_2, &VAR_1->prefix, VAR_1->prefixlen))
  return 0;
 return 1;
}
