
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int flags; scalar_t__ dead; int lock; struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inet6_dev *VAR_2) {
 struct inet6_ifaddr *VAR_3;

 FUNC_1(&VAR_2->lock);
 for (VAR_3 = VAR_2->addr_list; VAR_3; VAR_3 = VAR_3->if_next) {
  FUNC_3(&VAR_3->lock);
  if (VAR_3->flags & VAR_0 &&
      VAR_3->dead == VAR_1)
   FUNC_0(VAR_3);
  FUNC_4(&VAR_3->lock);
 }
 FUNC_2(&VAR_2->lock);
}
