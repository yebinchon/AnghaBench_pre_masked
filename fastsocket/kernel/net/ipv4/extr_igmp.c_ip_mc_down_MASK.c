
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {struct ip_mc_list* next; } ;
struct in_device {int mr_gq_timer; scalar_t__ mr_gq_running; int mr_ifc_timer; scalar_t__ mr_ifc_count; struct ip_mc_list* mc_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct in_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ip_mc_list*) ;
 int FUNC_4 (struct in_device*) ;
 int FUNC_5 (struct in_device*,int ) ;

void FUNC_6(struct in_device *VAR_1)
{
 struct ip_mc_list *VAR_2;

 FUNC_0();

 for (VAR_2=VAR_1->mc_list; VAR_2; VAR_2=VAR_2->next)
  FUNC_3(VAR_2);
 FUNC_5(VAR_1, VAR_0);
}
