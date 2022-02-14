
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct inet6_ifaddr {int lock; scalar_t__ prefered_lft; scalar_t__ valid_lft; scalar_t__ tokenized; struct inet6_ifaddr* if_next; } ;
struct TYPE_4__ {scalar_t__ s6_addr; } ;
struct TYPE_3__ {scalar_t__ rtr_solicits; } ;
struct inet6_dev {int if_flags; int lock; struct inet6_ifaddr* addr_list; int dead; TYPE_2__ token; TYPE_1__ cnf; struct net_device* dev; } ;
struct in6_addr {scalar_t__ s6_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct inet6_dev*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (struct net_device*,struct in6_addr*,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct net_device*,struct in6_addr*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inet6_dev *VAR_8, struct in6_addr *VAR_9)
{
 struct inet6_ifaddr *VAR_10;
 struct net_device *VAR_11 = VAR_8->dev;
 bool VAR_12 = 0;
 struct in6_addr VAR_13;

 if (VAR_9 == ((void*)0))
  return -VAR_0;
 if (FUNC_3(VAR_9))
  return -VAR_0;
 if (VAR_11->flags & (VAR_3 | VAR_4))
  return -VAR_0;
 if (!FUNC_2(VAR_8))
  return -VAR_0;
 if (VAR_8->cnf.rtr_solicits <= 0)
  return -VAR_0;

 FUNC_9(&VAR_8->lock);

 FUNC_0(sizeof(VAR_9->s6_addr) != 16);
 FUNC_5(VAR_8->token.s6_addr + 8, VAR_9->s6_addr + 8, 8);

 FUNC_10(&VAR_8->lock);

 if (!VAR_8->dead && (VAR_8->if_flags & VAR_5) &&
     !FUNC_4(VAR_11, &VAR_13, VAR_2 |
        VAR_1)) {




  FUNC_6(VAR_11, &VAR_13, &VAR_7);
  VAR_12 = 1;
 }

 FUNC_9(&VAR_8->lock);

 if (VAR_12)
  VAR_8->if_flags |= VAR_6;


 for (VAR_10 = VAR_8->addr_list; VAR_10; VAR_10 = VAR_10->if_next) {
  FUNC_7(&VAR_10->lock);
  if (VAR_10->tokenized) {
   VAR_10->valid_lft = 0;
   VAR_10->prefered_lft = 0;
  }
  FUNC_8(&VAR_10->lock);
 }

 FUNC_10(&VAR_8->lock);
 FUNC_1(0);
 return 0;
}
