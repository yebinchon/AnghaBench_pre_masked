
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {unsigned int prefix_len; int addr; struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; int dev; struct inet6_ifaddr* addr_list; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inet6_ifaddr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*,int *) ;
 int FUNC_5 (struct inet6_ifaddr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_4, int VAR_5, struct in6_addr *VAR_6,
     unsigned int VAR_7)
{
 struct inet6_ifaddr *VAR_8;
 struct inet6_dev *VAR_9;
 struct net_device *VAR_10;

 if (VAR_7 > 128)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_10)
  return -VAR_2;

 if ((VAR_9 = FUNC_1(VAR_10)) == ((void*)0))
  return -VAR_3;

 FUNC_6(&VAR_9->lock);
 for (VAR_8 = VAR_9->addr_list; VAR_8; VAR_8=VAR_8->if_next) {
  if (VAR_8->prefix_len == VAR_7 &&
      FUNC_4(VAR_6, &VAR_8->addr)) {
   FUNC_3(VAR_8);
   FUNC_7(&VAR_9->lock);

   FUNC_5(VAR_8);




   if (VAR_9->addr_list == ((void*)0))
    FUNC_2(VAR_9->dev, 1);
   return 0;
  }
 }
 FUNC_7(&VAR_9->lock);
 return -VAR_0;
}
