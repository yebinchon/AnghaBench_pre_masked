
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {struct inet6_ifaddr* if_next; int addr; } ;
struct inet6_dev {struct inet6_ifaddr* addr_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct inet6_dev *VAR_0, struct inet6_ifaddr *VAR_1)
{
 struct inet6_ifaddr *VAR_2, **VAR_3;
 int VAR_4 = FUNC_0(&VAR_1->addr);





 for (VAR_3 = &VAR_0->addr_list; (VAR_2 = *VAR_3) != ((void*)0);
      VAR_3 = &VAR_2->if_next) {
  if (VAR_4 >= FUNC_0(&VAR_2->addr))
   break;
 }

 VAR_1->if_next = *VAR_3;
 *VAR_3 = VAR_1;
}
