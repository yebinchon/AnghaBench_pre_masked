
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int dst; } ;
struct rt6_info {TYPE_1__ u; struct net_device* rt6i_dev; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {int ifindex; struct ipv6_mc_socklist* next; int * sflist; int sflock; int sfmode; int addr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_6 (int *,struct in6_addr const*) ;
 int FUNC_7 (struct in6_addr const*) ;
 int FUNC_8 (struct net_device*,struct in6_addr const*) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct rt6_info* FUNC_11 (struct net*,struct in6_addr const*,int *,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sock*,struct ipv6_mc_socklist*,int) ;
 struct ipv6_mc_socklist* FUNC_14 (struct sock*,int,int ) ;
 struct net* FUNC_15 (struct sock*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct sock *VAR_7, int VAR_8, const struct in6_addr *VAR_9)
{
 struct net_device *VAR_10 = ((void*)0);
 struct ipv6_mc_socklist *VAR_11;
 struct ipv6_pinfo *VAR_12 = FUNC_4(VAR_7);
 struct net *VAR_13 = FUNC_15(VAR_7);
 int VAR_14;

 if (!FUNC_7(VAR_9))
  return -VAR_1;

 FUNC_9(&VAR_6);
 for (VAR_11=VAR_12->ipv6_mc_list; VAR_11; VAR_11=VAR_11->next) {
  if ((VAR_8 == 0 || VAR_11->ifindex == VAR_8) &&
      FUNC_6(&VAR_11->addr, VAR_9)) {
   FUNC_10(&VAR_6);
   return -VAR_0;
  }
 }
 FUNC_10(&VAR_6);

 VAR_11 = FUNC_14(VAR_7, sizeof(struct ipv6_mc_socklist), VAR_4);

 if (VAR_11 == ((void*)0))
  return -VAR_3;

 VAR_11->next = ((void*)0);
 FUNC_5(&VAR_11->addr, VAR_9);

 if (VAR_8 == 0) {
  struct rt6_info *VAR_15;
  VAR_15 = FUNC_11(VAR_13, VAR_9, ((void*)0), 0, 0);
  if (VAR_15) {
   VAR_10 = VAR_15->rt6i_dev;
   FUNC_1(VAR_10);
   FUNC_3(&VAR_15->u.dst);
  }
 } else
  VAR_10 = FUNC_0(VAR_13, VAR_8);

 if (VAR_10 == ((void*)0)) {
  FUNC_13(VAR_7, VAR_11, sizeof(*VAR_11));
  return -VAR_2;
 }

 VAR_11->ifindex = VAR_10->ifindex;
 VAR_11->sfmode = VAR_5;
 FUNC_12(&VAR_11->sflock);
 VAR_11->sflist = ((void*)0);





 VAR_14 = FUNC_8(VAR_10, VAR_9);

 if (VAR_14) {
  FUNC_13(VAR_7, VAR_11, sizeof(*VAR_11));
  FUNC_2(VAR_10);
  return VAR_14;
 }

 FUNC_16(&VAR_6);
 VAR_11->next = VAR_12->ipv6_mc_list;
 VAR_12->ipv6_mc_list = VAR_11;
 FUNC_17(&VAR_6);

 FUNC_2(VAR_10);

 return 0;
}
