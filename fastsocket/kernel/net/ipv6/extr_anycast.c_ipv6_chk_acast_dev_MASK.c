
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int lock; struct ifacaddr6* ac_list; } ;
struct in6_addr {int dummy; } ;
struct ifacaddr6 {int aca_addr; struct ifacaddr6* aca_next; } ;


 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*) ;
 scalar_t__ FUNC_2 (int *,struct in6_addr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct in6_addr *VAR_1)
{
 struct inet6_dev *VAR_2;
 struct ifacaddr6 *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_3(&VAR_2->lock);
  for (VAR_3 = VAR_2->ac_list; VAR_3; VAR_3 = VAR_3->aca_next)
   if (FUNC_2(&VAR_3->aca_addr, VAR_1))
    break;
  FUNC_4(&VAR_2->lock);
  FUNC_1(VAR_2);
  return VAR_3 != ((void*)0);
 }
 return 0;
}
