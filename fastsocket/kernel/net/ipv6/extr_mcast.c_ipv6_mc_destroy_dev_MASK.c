
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ forwarding; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; TYPE_1__ cnf; } ;
struct ifmcaddr6 {struct ifmcaddr6* next; } ;


 int FUNC_0 (struct inet6_dev*,int *) ;
 int FUNC_1 (struct ifmcaddr6*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct ifmcaddr6*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inet6_dev *VAR_2)
{
 struct ifmcaddr6 *VAR_3;


 FUNC_2(VAR_2);






 FUNC_0(VAR_2, &VAR_0);

 if (VAR_2->cnf.forwarding)
  FUNC_0(VAR_2, &VAR_1);

 FUNC_4(&VAR_2->lock);
 while ((VAR_3 = VAR_2->mc_list) != ((void*)0)) {
  VAR_2->mc_list = VAR_3->next;
  FUNC_5(&VAR_2->lock);

  FUNC_1(VAR_3);
  FUNC_3(VAR_3);

  FUNC_4(&VAR_2->lock);
 }
 FUNC_5(&VAR_2->lock);
}
