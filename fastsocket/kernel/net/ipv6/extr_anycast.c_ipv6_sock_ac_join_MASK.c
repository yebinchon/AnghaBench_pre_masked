
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_7__ {int dst; } ;
struct rt6_info {TYPE_3__ u; struct net_device* rt6i_dev; } ;
struct net_device {int ifindex; } ;
struct TYPE_6__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct ipv6_ac_socklist {struct ipv6_ac_socklist* acl_next; int acl_ifindex; int acl_addr; } ;
struct TYPE_8__ {int forwarding; } ;
struct inet6_dev {TYPE_4__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_5__ {int forwarding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct net*,int,int) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 struct inet6_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_10 (struct in6_addr*) ;
 scalar_t__ FUNC_11 (struct net*,struct in6_addr*,int *,int ) ;
 int FUNC_12 (struct in6_addr*,struct net_device*) ;
 int FUNC_13 (struct net_device*,struct in6_addr*) ;
 int VAR_9 ;
 struct rt6_info* FUNC_14 (struct net*,struct in6_addr*,int *,int ,int ) ;
 int FUNC_15 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct ipv6_ac_socklist* FUNC_16 (struct sock*,int,int ) ;
 struct net* FUNC_17 (struct sock*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct sock *VAR_10, int VAR_11, struct in6_addr *VAR_12)
{
 struct ipv6_pinfo *VAR_13 = FUNC_8(VAR_10);
 struct net_device *VAR_14 = ((void*)0);
 struct inet6_dev *VAR_15;
 struct ipv6_ac_socklist *VAR_16;
 struct net *VAR_17 = FUNC_17(VAR_10);
 int VAR_18 = !VAR_17->ipv6.devconf_all->forwarding;
 int VAR_19 = 0;

 if (!FUNC_0(VAR_0))
  return -VAR_5;
 if (FUNC_10(VAR_12))
  return -VAR_2;
 if (FUNC_11(VAR_17, VAR_12, ((void*)0), 0))
  return -VAR_2;

 VAR_16 = FUNC_16(VAR_10, sizeof(struct ipv6_ac_socklist), VAR_6);
 if (VAR_16 == ((void*)0))
  return -VAR_4;
 VAR_16->acl_next = ((void*)0);
 FUNC_9(&VAR_16->acl_addr, VAR_12);

 if (VAR_11 == 0) {
  struct rt6_info *VAR_20;

  VAR_20 = FUNC_14(VAR_17, VAR_12, ((void*)0), 0, 0);
  if (VAR_20) {
   VAR_14 = VAR_20->rt6i_dev;
   FUNC_3(VAR_14);
   FUNC_5(&VAR_20->u.dst);
  } else if (VAR_18) {
   VAR_19 = -VAR_1;
   goto out_free_pac;
  } else {


   VAR_14 = FUNC_1(VAR_17, VAR_8, VAR_8|VAR_7);
  }
 } else
  VAR_14 = FUNC_2(VAR_17, VAR_11);

 if (VAR_14 == ((void*)0)) {
  VAR_19 = -VAR_3;
  goto out_free_pac;
 }

 VAR_15 = FUNC_6(VAR_14);
 if (!VAR_15) {
  if (VAR_11)
   VAR_19 = -VAR_3;
  else
   VAR_19 = -VAR_1;
  goto out_dev_put;
 }

 VAR_18 = !VAR_15->cnf.forwarding;
 FUNC_7(VAR_15);

 VAR_16->acl_ifindex = VAR_14->ifindex;






 if (!FUNC_12(VAR_12, VAR_14)) {
  if (VAR_18)
   VAR_19 = -VAR_1;
  if (VAR_19)
   goto out_dev_put;
 }

 VAR_19 = FUNC_13(VAR_14, VAR_12);
 if (VAR_19)
  goto out_dev_put;

 FUNC_18(&VAR_9);
 VAR_16->acl_next = VAR_13->ipv6_ac_list;
 VAR_13->ipv6_ac_list = VAR_16;
 FUNC_19(&VAR_9);

 FUNC_4(VAR_14);

 return 0;

out_dev_put:
 FUNC_4(VAR_14);
out_free_pac:
 FUNC_15(VAR_10, VAR_16, sizeof(*VAR_16));
 return VAR_19;
}
