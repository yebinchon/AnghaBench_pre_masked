
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {struct ip_mc_list* next; } ;
struct in_device {struct ip_mc_list* mc_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ip_mc_list*) ;

void FUNC_2(struct in_device *VAR_0)
{
 struct ip_mc_list *VAR_1;

 FUNC_0();

 for (VAR_1 = VAR_0->mc_list; VAR_1; VAR_1 = VAR_1->next)
  FUNC_1(VAR_1);
}
