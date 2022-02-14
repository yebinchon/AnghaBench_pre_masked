
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {int addr; int ifindex; struct ipv6_mc_socklist* next; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 (struct inet6_dev*,int *) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct ipv6_mc_socklist*,struct inet6_dev*) ;
 int VAR_0 ;
 int FUNC_7 (struct sock*,struct ipv6_mc_socklist*,int) ;
 struct net* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct sock *VAR_1)
{
 struct ipv6_pinfo *VAR_2 = FUNC_5(VAR_1);
 struct ipv6_mc_socklist *VAR_3;
 struct net *VAR_4 = FUNC_8(VAR_1);

 FUNC_9(&VAR_0);
 while ((VAR_3 = VAR_2->ipv6_mc_list) != ((void*)0)) {
  struct net_device *VAR_5;

  VAR_2->ipv6_mc_list = VAR_3->next;
  FUNC_10(&VAR_0);

  VAR_5 = FUNC_1(VAR_4, VAR_3->ifindex);
  if (VAR_5) {
   struct inet6_dev *VAR_6 = FUNC_3(VAR_5);

   (void) FUNC_6(VAR_1, VAR_3, VAR_6);
   if (VAR_6) {
    FUNC_0(VAR_6, &VAR_3->addr);
    FUNC_4(VAR_6);
   }
   FUNC_2(VAR_5);
  } else
   (void) FUNC_6(VAR_1, VAR_3, ((void*)0));

  FUNC_7(VAR_1, VAR_3, sizeof(*VAR_3));

  FUNC_9(&VAR_0);
 }
 FUNC_10(&VAR_0);
}
