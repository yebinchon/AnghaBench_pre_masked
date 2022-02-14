
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_ifaddr {int prefix_len; int addr; struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;
struct in6_addr {int dummy; } ;


 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in6_addr*,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct in6_addr *VAR_0, struct net_device *VAR_1)
{
 struct inet6_dev *VAR_2;
 struct inet6_ifaddr *VAR_3;
 int VAR_4;

 VAR_4 = 0;
 FUNC_2();
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_4(&VAR_2->lock);
  for (VAR_3 = VAR_2->addr_list; VAR_3; VAR_3 = VAR_3->if_next) {
   VAR_4 = FUNC_1(VAR_0, &VAR_3->addr,
         VAR_3->prefix_len);
   if (VAR_4)
    break;
  }
  FUNC_5(&VAR_2->lock);
 }
 FUNC_3();
 return VAR_4;
}
