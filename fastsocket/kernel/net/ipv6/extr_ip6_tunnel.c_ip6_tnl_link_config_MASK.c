
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dst; } ;
struct rt6_info {TYPE_2__ u; TYPE_1__* rt6i_dev; } ;
struct net_device {scalar_t__ mtu; scalar_t__ hard_header_len; int iflink; int flags; int broadcast; int dev_addr; } ;
struct ipv6hdr {int dummy; } ;
struct ip6_tnl_parm {int flags; int flowinfo; int link; int laddr; int raddr; } ;
struct flowi {int fl6_flowlabel; int oif; int fl6_dst; int fl6_src; } ;
struct ip6_tnl {struct flowi fl; struct ip6_tnl_parm parms; struct net_device* dev; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {scalar_t__ mtu; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ip6_tnl*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int) ;
 struct rt6_info* FUNC_6 (int ,int *,int *,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ip6_tnl *VAR_10)
{
 struct net_device *VAR_11 = VAR_10->dev;
 struct ip6_tnl_parm *VAR_12 = &VAR_10->parms;
 struct flowi *VAR_13 = &VAR_10->fl;

 FUNC_5(VAR_11->dev_addr, &VAR_12->laddr, sizeof(struct in6_addr));
 FUNC_5(VAR_11->broadcast, &VAR_12->raddr, sizeof(struct in6_addr));


 FUNC_3(&VAR_13->fl6_src, &VAR_12->laddr);
 FUNC_3(&VAR_13->fl6_dst, &VAR_12->raddr);
 VAR_13->oif = VAR_12->link;
 VAR_13->fl6_flowlabel = 0;

 if (!(VAR_12->flags&VAR_4))
  VAR_13->fl6_flowlabel |= VAR_9 & VAR_12->flowinfo;
 if (!(VAR_12->flags&VAR_3))
  VAR_13->fl6_flowlabel |= VAR_7 & VAR_12->flowinfo;

 FUNC_2(VAR_10);

 if (VAR_12->flags&VAR_2 && VAR_12->flags&VAR_1)
  VAR_11->flags |= VAR_0;
 else
  VAR_11->flags &= ~VAR_0;

 VAR_11->iflink = VAR_12->link;

 if (VAR_12->flags & VAR_2) {
  int VAR_14 = (FUNC_4(&VAR_12->raddr) &
         (VAR_6|VAR_5));

  struct rt6_info *VAR_15 = FUNC_6(FUNC_0(VAR_11),
       &VAR_12->raddr, &VAR_12->laddr,
       VAR_12->link, VAR_14);

  if (VAR_15 == ((void*)0))
   return;

  if (VAR_15->rt6i_dev) {
   VAR_11->hard_header_len = VAR_15->rt6i_dev->hard_header_len +
    sizeof (struct ipv6hdr);

   VAR_11->mtu = VAR_15->rt6i_dev->mtu - sizeof (struct ipv6hdr);

   if (VAR_11->mtu < VAR_8)
    VAR_11->mtu = VAR_8;
  }
  FUNC_1(&VAR_15->u.dst);
 }
}
