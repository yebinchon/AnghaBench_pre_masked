
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; struct ifmcaddr6* mc_list; int mc_gq_timer; scalar_t__ mc_gq_running; int mc_ifc_timer; scalar_t__ mc_ifc_count; } ;
struct ifmcaddr6 {struct ifmcaddr6* next; } ;


 int FUNC_0 (struct inet6_dev*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inet6_dev *VAR_0)
{
 struct ifmcaddr6 *VAR_1;



 FUNC_4(&VAR_0->lock);
 VAR_0->mc_ifc_count = 0;
 if (FUNC_1(&VAR_0->mc_ifc_timer))
  FUNC_0(VAR_0);
 VAR_0->mc_gq_running = 0;
 if (FUNC_1(&VAR_0->mc_gq_timer))
  FUNC_0(VAR_0);

 for (VAR_1 = VAR_0->mc_list; VAR_1; VAR_1=VAR_1->next)
  FUNC_2(VAR_1);
 FUNC_5(&VAR_0->lock);

 FUNC_3(VAR_0);
}
