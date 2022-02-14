
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {int sflock; int sfmode; struct ip6_sf_socklist* sflist; int addr; int ifindex; struct ipv6_mc_socklist* next; } ;
struct ip6_sf_socklist {int sl_max; int sl_count; struct in6_addr* sl_addr; } ;
struct inet6_dev {int lock; struct net_device* dev; } ;
struct group_filter {scalar_t__ gf_numsrc; int gf_interface; int gf_fmode; int * gf_slist; int gf_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct inet6_dev*,struct in6_addr*,int ,int,struct in6_addr*,int ) ;
 int FUNC_5 (struct inet6_dev*,struct in6_addr*,int ,int,struct in6_addr*,int ) ;
 struct inet6_dev* FUNC_6 (struct net*,struct in6_addr*,int ) ;
 scalar_t__ FUNC_7 (int *,struct in6_addr*) ;
 int FUNC_8 (struct in6_addr*) ;
 int VAR_6 ;
 int FUNC_9 (struct sock*,int ,struct in6_addr*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sock*,struct ip6_sf_socklist*,int ) ;
 struct ip6_sf_socklist* FUNC_13 (struct sock*,int ,int ) ;
 struct net* FUNC_14 (struct sock*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct sock *VAR_7, struct group_filter *VAR_8)
{
 struct in6_addr *VAR_9;
 struct ipv6_mc_socklist *VAR_10;
 struct net_device *VAR_11;
 struct inet6_dev *VAR_12;
 struct ipv6_pinfo *VAR_13 = FUNC_3(VAR_7);
 struct ip6_sf_socklist *VAR_14, *VAR_15;
 struct net *VAR_16 = FUNC_14(VAR_7);
 int VAR_17 = 0;
 int VAR_18, VAR_19;

 VAR_9 = &((struct sockaddr_in6 *)&VAR_8->gf_group)->sin6_addr;

 if (!FUNC_8(VAR_9))
  return -VAR_0;
 if (VAR_8->gf_fmode != VAR_5 &&
     VAR_8->gf_fmode != VAR_4)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_16, VAR_9, VAR_8->gf_interface);

 if (!VAR_12)
  return -VAR_2;
 VAR_11 = VAR_12->dev;

 VAR_19 = 0;
 FUNC_10(&VAR_6);

 if (VAR_8->gf_fmode == VAR_5 && VAR_8->gf_numsrc == 0) {
  VAR_17 = 1;
  goto done;
 }

 for (VAR_10=VAR_13->ipv6_mc_list; VAR_10; VAR_10=VAR_10->next) {
  if (VAR_10->ifindex != VAR_8->gf_interface)
   continue;
  if (FUNC_7(&VAR_10->addr, VAR_9))
   break;
 }
 if (!VAR_10) {
  VAR_19 = -VAR_0;
  goto done;
 }
 if (VAR_8->gf_numsrc) {
  VAR_14 = FUNC_13(VAR_7, FUNC_0(VAR_8->gf_numsrc),
         VAR_3);
  if (!VAR_14) {
   VAR_19 = -VAR_1;
   goto done;
  }
  VAR_14->sl_max = VAR_14->sl_count = VAR_8->gf_numsrc;
  for (VAR_18=0; VAR_18<VAR_14->sl_count; ++VAR_18) {
   struct sockaddr_in6 *VAR_20;

   VAR_20 = (struct sockaddr_in6 *)&VAR_8->gf_slist[VAR_18];
   VAR_14->sl_addr[VAR_18] = VAR_20->sin6_addr;
  }
  VAR_19 = FUNC_4(VAR_12, VAR_9, VAR_8->gf_fmode,
   VAR_14->sl_count, VAR_14->sl_addr, 0);
  if (VAR_19) {
   FUNC_12(VAR_7, VAR_14, FUNC_0(VAR_14->sl_max));
   goto done;
  }
 } else {
  VAR_14 = ((void*)0);
  (void) FUNC_4(VAR_12, VAR_9, VAR_8->gf_fmode, 0, ((void*)0), 0);
 }

 FUNC_15(&VAR_10->sflock);
 VAR_15 = VAR_10->sflist;
 if (VAR_15) {
  (void) FUNC_5(VAR_12, VAR_9, VAR_10->sfmode,
   VAR_15->sl_count, VAR_15->sl_addr, 0);
  FUNC_12(VAR_7, VAR_15, FUNC_0(VAR_15->sl_max));
 } else
  (void) FUNC_5(VAR_12, VAR_9, VAR_10->sfmode, 0, ((void*)0), 0);
 VAR_10->sflist = VAR_14;
 VAR_10->sfmode = VAR_8->gf_fmode;
 FUNC_16(&VAR_10->sflock);
 VAR_19 = 0;
done:
 FUNC_11(&VAR_6);
 FUNC_11(&VAR_12->lock);
 FUNC_2(VAR_12);
 FUNC_1(VAR_11);
 if (VAR_17)
  VAR_19 = FUNC_9(VAR_7, VAR_8->gf_interface, VAR_9);
 return VAR_19;
}
