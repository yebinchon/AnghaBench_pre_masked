
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dst; } ;
struct rt6_info {int rt6i_flags; unsigned long rt6i_expires; TYPE_4__ u; } ;
struct TYPE_8__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_3__ ipv6; } ;
struct inet6_ifaddr {int dead; int flags; unsigned long tstamp; struct inet6_dev* idev; int prefix_len; int addr; struct inet6_ifaddr* if_next; int lock; int valid_lft; struct inet6_ifaddr* tmp_next; struct inet6_ifaddr* ifpub; struct inet6_ifaddr* lst_next; } ;
struct inet6_dev {TYPE_5__* dev; int lock; struct inet6_ifaddr* addr_list; struct inet6_ifaddr* tempaddr_list; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {struct in6_addr daddr; } ;
struct TYPE_7__ {TYPE_1__ ip6_u; } ;
struct flowi {TYPE_2__ nl_u; int oif; } ;
struct TYPE_10__ {int ifindex; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct rt6_info*) ;
 unsigned long FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int *,int ,struct inet6_ifaddr*) ;
 struct net* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr** VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct rt6_info*) ;
 scalar_t__ FUNC_9 (struct net*,struct flowi*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct in6_addr*,int *,int ) ;
 int FUNC_12 (int ,struct inet6_ifaddr*) ;
 scalar_t__ FUNC_13 (int *,int *,int ) ;
 unsigned long VAR_12 ;
 int FUNC_14 (struct inet6_ifaddr*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (unsigned long,unsigned long) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(struct inet6_ifaddr *VAR_13)
{
 struct inet6_ifaddr *VAR_14, **VAR_15;
 struct inet6_dev *VAR_16 = VAR_13->idev;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0, VAR_20 = 0;
 unsigned long VAR_21 = VAR_12;

 VAR_18 = FUNC_10(&VAR_13->addr);

 FUNC_16(&VAR_9);
 VAR_17 = VAR_13->dead;
 VAR_13->dead = VAR_3;
 FUNC_18(&VAR_9);

 if (VAR_17 == VAR_3)
  goto out;


 FUNC_20(&VAR_8);
 for (VAR_15 = &VAR_10[VAR_18]; (VAR_14=*VAR_15) != ((void*)0);
      VAR_15 = &VAR_14->lst_next) {
  if (VAR_14 == VAR_13) {
   *VAR_15 = VAR_14->lst_next;
   FUNC_0(VAR_13);
   VAR_14->lst_next = ((void*)0);
   break;
  }
 }
 FUNC_21(&VAR_8);

 FUNC_20(&VAR_16->lock);
 for (VAR_15 = &VAR_16->addr_list; (VAR_14=*VAR_15) != ((void*)0);) {
  if (VAR_14 == VAR_13) {
   *VAR_15 = VAR_14->if_next;
   FUNC_0(VAR_13);
   VAR_14->if_next = ((void*)0);
   if (!(VAR_13->flags & VAR_1) || VAR_20 > 0)
    break;
   VAR_19 = 1;
   continue;
  } else if (VAR_13->flags & VAR_1) {
   if (FUNC_13(&VAR_14->addr, &VAR_13->addr,
           VAR_13->prefix_len)) {
    if (VAR_14->flags & VAR_1) {
     VAR_20 = 1;
     if (VAR_19)
      break;
    } else {
     unsigned long VAR_22;

     if (!VAR_20)
      VAR_20 = -1;

     FUNC_15(&VAR_14->lock);

     VAR_22 = FUNC_3(VAR_14->valid_lft, VAR_0);





     if (FUNC_19(VAR_21,
       VAR_14->tstamp + VAR_22 * VAR_0))
      VAR_21 = VAR_14->tstamp + VAR_22 * VAR_0;
     FUNC_17(&VAR_14->lock);
    }
   }
  }
  VAR_15 = &VAR_14->if_next;
 }
 FUNC_21(&VAR_16->lock);

 FUNC_1(VAR_13);

 FUNC_12(VAR_7, VAR_13);

 FUNC_4(&VAR_11, VAR_4, VAR_13);
 if ((VAR_13->flags & VAR_1) && VAR_20 < 1) {
  struct in6_addr VAR_23;
  struct rt6_info *VAR_24;
  struct net *VAR_25 = FUNC_5(VAR_13->idev->dev);
  struct flowi VAR_26 = {};

  FUNC_11(&VAR_23, &VAR_13->addr, VAR_13->prefix_len);
  VAR_26.oif = VAR_13->idev->dev->ifindex;
  VAR_26.nl_u.ip6_u.daddr = VAR_23;
  VAR_24 = (struct rt6_info *)FUNC_9(VAR_25, &VAR_26,
        VAR_5);

  if (VAR_24 != VAR_25->ipv6.ip6_null_entry &&
      FUNC_2(VAR_24)) {
   if (VAR_20 == 0) {
    FUNC_8(VAR_24);
    VAR_24 = ((void*)0);
   } else if (!(VAR_24->rt6i_flags & VAR_6)) {
    VAR_24->rt6i_expires = VAR_21;
    VAR_24->rt6i_flags |= VAR_6;
   }
  }
  FUNC_6(&VAR_24->u.dst);
 }


 FUNC_14(VAR_13);
out:
 FUNC_7(VAR_13);
}
