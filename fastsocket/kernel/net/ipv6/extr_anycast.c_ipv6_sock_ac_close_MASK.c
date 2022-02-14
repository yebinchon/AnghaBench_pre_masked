
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct ipv6_ac_socklist {int acl_ifindex; int acl_addr; struct ipv6_ac_socklist* acl_next; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct net_device*,int *) ;
 int VAR_0 ;
 int FUNC_4 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct net* FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct sock *VAR_1)
{
 struct ipv6_pinfo *VAR_2 = FUNC_2(VAR_1);
 struct net_device *VAR_3 = ((void*)0);
 struct ipv6_ac_socklist *VAR_4;
 struct net *VAR_5 = FUNC_5(VAR_1);
 int VAR_6;

 FUNC_6(&VAR_0);
 VAR_4 = VAR_2->ipv6_ac_list;
 VAR_2->ipv6_ac_list = ((void*)0);
 FUNC_7(&VAR_0);

 VAR_6 = 0;
 while (VAR_4) {
  struct ipv6_ac_socklist *VAR_7 = VAR_4->acl_next;

  if (VAR_4->acl_ifindex != VAR_6) {
   if (VAR_3)
    FUNC_1(VAR_3);
   VAR_3 = FUNC_0(VAR_5, VAR_4->acl_ifindex);
   VAR_6 = VAR_4->acl_ifindex;
  }
  if (VAR_3)
   FUNC_3(VAR_3, &VAR_4->acl_addr);
  FUNC_4(VAR_1, VAR_4, sizeof(*VAR_4));
  VAR_4 = VAR_7;
 }
 if (VAR_3)
  FUNC_1(VAR_3);
}
