
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct ipv6_ac_socklist {int acl_ifindex; int acl_addr; struct ipv6_ac_socklist* acl_next; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr*) ;
 int FUNC_4 (struct net_device*,int *) ;
 int VAR_1 ;
 int FUNC_5 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct net* FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct sock *VAR_2, int VAR_3, struct in6_addr *VAR_4)
{
 struct ipv6_pinfo *VAR_5 = FUNC_2(VAR_2);
 struct net_device *VAR_6;
 struct ipv6_ac_socklist *VAR_7, *VAR_8;
 struct net *VAR_9 = FUNC_6(VAR_2);

 FUNC_7(&VAR_1);
 VAR_8 = ((void*)0);
 for (VAR_7 = VAR_5->ipv6_ac_list; VAR_7; VAR_7 = VAR_7->acl_next) {
  if ((VAR_3 == 0 || VAR_7->acl_ifindex == VAR_3) &&
       FUNC_3(&VAR_7->acl_addr, VAR_4))
   break;
  VAR_8 = VAR_7;
 }
 if (!VAR_7) {
  FUNC_8(&VAR_1);
  return -VAR_0;
 }
 if (VAR_8)
  VAR_8->acl_next = VAR_7->acl_next;
 else
  VAR_5->ipv6_ac_list = VAR_7->acl_next;

 FUNC_8(&VAR_1);

 VAR_6 = FUNC_0(VAR_9, VAR_7->acl_ifindex);
 if (VAR_6) {
  FUNC_4(VAR_6, &VAR_7->acl_addr);
  FUNC_1(VAR_6);
 }
 FUNC_5(VAR_2, VAR_7, sizeof(*VAR_7));
 return 0;
}
