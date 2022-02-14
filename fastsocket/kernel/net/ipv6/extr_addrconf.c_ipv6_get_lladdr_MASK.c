
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_ifaddr {scalar_t__ scope; unsigned char flags; int addr; struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in6_addr*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net_device *VAR_2, struct in6_addr *VAR_3,
      unsigned char VAR_4)
{
 struct inet6_dev *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_2();
 if ((VAR_5 = FUNC_0(VAR_2)) != ((void*)0)) {
  struct inet6_ifaddr *VAR_7;

  FUNC_4(&VAR_5->lock);
  for (VAR_7=VAR_5->addr_list; VAR_7; VAR_7=VAR_7->if_next) {
   if (VAR_7->scope == VAR_1 && !(VAR_7->flags & VAR_4)) {
    FUNC_1(VAR_3, &VAR_7->addr);
    VAR_6 = 0;
    break;
   }
  }
  FUNC_5(&VAR_5->lock);
 }
 FUNC_3();
 return VAR_6;
}
