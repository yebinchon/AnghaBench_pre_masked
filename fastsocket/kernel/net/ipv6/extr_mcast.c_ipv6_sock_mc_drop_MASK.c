
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {int ifindex; int addr; struct ipv6_mc_socklist* next; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inet6_dev*,int *) ;
 struct net_device* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct net_device*) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct ipv6_mc_socklist*,struct inet6_dev*) ;
 scalar_t__ FUNC_7 (int *,struct in6_addr const*) ;
 int VAR_1 ;
 int FUNC_8 (struct sock*,struct ipv6_mc_socklist*,int) ;
 struct net* FUNC_9 (struct sock*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct sock *VAR_2, int VAR_3, const struct in6_addr *VAR_4)
{
 struct ipv6_pinfo *VAR_5 = FUNC_5(VAR_2);
 struct ipv6_mc_socklist *VAR_6, **VAR_7;
 struct net *VAR_8 = FUNC_9(VAR_2);

 FUNC_10(&VAR_1);
 for (VAR_7 = &VAR_5->ipv6_mc_list; (VAR_6 = *VAR_7) !=((void*)0) ; VAR_7 = &VAR_6->next) {
  if ((VAR_3 == 0 || VAR_6->ifindex == VAR_3) &&
      FUNC_7(&VAR_6->addr, VAR_4)) {
   struct net_device *VAR_9;

   *VAR_7 = VAR_6->next;
   FUNC_11(&VAR_1);

   VAR_9 = FUNC_1(VAR_8, VAR_6->ifindex);
   if (VAR_9 != ((void*)0)) {
    struct inet6_dev *VAR_10 = FUNC_3(VAR_9);

    (void) FUNC_6(VAR_2, VAR_6, VAR_10);
    if (VAR_10) {
     FUNC_0(VAR_10, &VAR_6->addr);
     FUNC_4(VAR_10);
    }
    FUNC_2(VAR_9);
   } else
    (void) FUNC_6(VAR_2, VAR_6, ((void*)0));
   FUNC_8(VAR_2, VAR_6, sizeof(*VAR_6));
   return 0;
  }
 }
 FUNC_11(&VAR_1);

 return -VAR_0;
}
