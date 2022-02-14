
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ s6_addr; } ;
struct inet6_ifaddr {scalar_t__ scope; int flags; TYPE_1__ addr; struct inet6_ifaddr* if_next; } ;
struct inet6_dev {int lock; struct inet6_ifaddr* addr_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_2, struct inet6_dev *VAR_3)
{
 int VAR_4 = -1;
 struct inet6_ifaddr *VAR_5;

 FUNC_1(&VAR_3->lock);
 for (VAR_5=VAR_3->addr_list; VAR_5; VAR_5=VAR_5->if_next) {
  if (VAR_5->scope == VAR_1 && !(VAR_5->flags&VAR_0)) {
   FUNC_0(VAR_2, VAR_5->addr.s6_addr+8, 8);
   VAR_4 = 0;
   break;
  }
 }
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
