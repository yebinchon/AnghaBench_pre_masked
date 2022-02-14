
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inet6_dev {int lock; struct ifacaddr6* ac_list; } ;
struct in6_addr {int dummy; } ;
struct ifacaddr6 {scalar_t__ aca_users; TYPE_2__* aca_rt; int aca_addr; struct ifacaddr6* aca_next; } ;
struct TYPE_3__ {int dst; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifacaddr6*) ;
 int FUNC_1 (struct inet6_dev*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,struct in6_addr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inet6_dev *VAR_1, struct in6_addr *VAR_2)
{
 struct ifacaddr6 *VAR_3, *VAR_4;

 FUNC_5(&VAR_1->lock);
 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_1->ac_list; VAR_3; VAR_3 = VAR_3->aca_next) {
  if (FUNC_4(&VAR_3->aca_addr, VAR_2))
   break;
  VAR_4 = VAR_3;
 }
 if (!VAR_3) {
  FUNC_6(&VAR_1->lock);
  return -VAR_0;
 }
 if (--VAR_3->aca_users > 0) {
  FUNC_6(&VAR_1->lock);
  return 0;
 }
 if (VAR_4)
  VAR_4->aca_next = VAR_3->aca_next;
 else
  VAR_1->ac_list = VAR_3->aca_next;
 FUNC_6(&VAR_1->lock);
 FUNC_1(VAR_1, &VAR_3->aca_addr);

 FUNC_2(&VAR_3->aca_rt->u.dst);
 FUNC_3(VAR_3->aca_rt);

 FUNC_0(VAR_3);
 return 0;
}
