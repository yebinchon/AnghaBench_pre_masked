
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {struct ip_mc_list* next; } ;
struct in_device {struct ip_mc_list* mc_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ip_mc_list*) ;
 int FUNC_2 (struct in_device*,int ) ;

void FUNC_3(struct in_device *VAR_1)
{
 struct ip_mc_list *VAR_2;

 FUNC_0();

 FUNC_2(VAR_1, VAR_0);

 for (VAR_2=VAR_1->mc_list; VAR_2; VAR_2=VAR_2->next)
  FUNC_1(VAR_2);
}
