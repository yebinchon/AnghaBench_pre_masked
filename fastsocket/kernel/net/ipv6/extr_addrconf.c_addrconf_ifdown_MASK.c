
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ip6_ptr; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int dead; struct inet6_ifaddr* if_next; int lock; struct inet6_ifaddr* ifpub; struct inet6_ifaddr* tmp_next; struct inet6_ifaddr* lst_next; struct inet6_dev* idev; } ;
struct inet6_dev {int dead; int if_flags; int nd_parms; int tstamp; int lock; struct inet6_ifaddr* addr_list; struct inet6_ifaddr* tempaddr_list; int regen_timer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*) ;
 int VAR_8 ;
 int FUNC_4 (struct inet6_dev*) ;
 int FUNC_5 (int *,int ,struct inet6_ifaddr*) ;
 scalar_t__ FUNC_6 (int *) ;
 struct net* FUNC_7 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_8 (struct inet6_dev*) ;
 int FUNC_9 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr** VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct inet6_dev*) ;
 int FUNC_11 (struct inet6_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int *,struct net_device*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct net*,struct net_device*) ;
 int FUNC_16 (struct inet6_dev*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct net_device *VAR_14, int VAR_15)
{
 struct inet6_dev *VAR_16;
 struct inet6_ifaddr *VAR_17, **VAR_18;
 struct net *VAR_19 = FUNC_7(VAR_14);
 int VAR_20;
 int VAR_21;

 FUNC_0();

 FUNC_15(VAR_19, VAR_14);
 FUNC_12(&VAR_13, VAR_14);

 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16 == ((void*)0))
  return -VAR_0;




 if (VAR_15) {
  VAR_16->dead = 1;


  FUNC_14(VAR_14->ip6_ptr, ((void*)0));


  FUNC_16(VAR_16);

 }


 for (VAR_21=0; VAR_21<VAR_4; VAR_21++) {
  VAR_18 = &VAR_10[VAR_21];

  FUNC_19(&VAR_8);
  while ((VAR_17 = *VAR_18) != ((void*)0)) {
   if (VAR_17->idev == VAR_16) {
    *VAR_18 = VAR_17->lst_next;
    VAR_17->lst_next = ((void*)0);
    FUNC_3(VAR_17);
    FUNC_9(VAR_17);
    continue;
   }
   VAR_18 = &VAR_17->lst_next;
  }
  FUNC_20(&VAR_8);
 }

 FUNC_19(&VAR_16->lock);


 if (!VAR_15)
  VAR_16->if_flags &= ~(VAR_3|VAR_1|VAR_2);
 while ((VAR_17 = VAR_16->addr_list) != ((void*)0)) {
  VAR_16->addr_list = VAR_17->if_next;
  VAR_17->if_next = ((void*)0);
  FUNC_3(VAR_17);
  FUNC_20(&VAR_16->lock);
  FUNC_17(&VAR_9);
  VAR_20 = VAR_17->dead;
  VAR_17->dead = VAR_5;
  FUNC_18(&VAR_9);

  if (VAR_20 == VAR_5)
   goto put_ifa;


  FUNC_2(VAR_7, VAR_17);
  FUNC_5(&VAR_11, VAR_6, VAR_17);

put_ifa:
  FUNC_9(VAR_17);

  FUNC_19(&VAR_16->lock);
 }
 FUNC_20(&VAR_16->lock);



 if (VAR_15)
  FUNC_10(VAR_16);
 else
  FUNC_11(VAR_16);

 VAR_16->tstamp = VAR_12;



 if (VAR_15) {
  FUNC_4(VAR_16);
  FUNC_13(&VAR_13, VAR_16->nd_parms);
  FUNC_12(&VAR_13, VAR_14);
  FUNC_8(VAR_16);
 }
 return 0;
}
