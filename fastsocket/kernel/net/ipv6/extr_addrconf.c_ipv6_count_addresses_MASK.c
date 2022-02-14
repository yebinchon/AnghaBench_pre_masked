
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inet6_dev *VAR_0)
{
 int VAR_1 = 0;
 struct inet6_ifaddr *VAR_2;

 FUNC_0(&VAR_0->lock);
 for (VAR_2=VAR_0->addr_list; VAR_2; VAR_2=VAR_2->if_next)
  VAR_1++;
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
