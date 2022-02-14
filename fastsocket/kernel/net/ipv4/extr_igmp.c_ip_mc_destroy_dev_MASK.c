
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {struct ip_mc_list* next; } ;
struct in_device {int mc_list_lock; int mc_count; struct ip_mc_list* mc_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ip_mc_list*) ;
 int FUNC_2 (struct ip_mc_list*) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct in_device *VAR_0)
{
 struct ip_mc_list *VAR_1;

 FUNC_0();


 FUNC_3(VAR_0);

 FUNC_4(&VAR_0->mc_list_lock);
 while ((VAR_1 = VAR_0->mc_list) != ((void*)0)) {
  VAR_0->mc_list = VAR_1->next;
  VAR_0->mc_count--;
  FUNC_5(&VAR_0->mc_list_lock);


  FUNC_2(VAR_1);
  FUNC_1(VAR_1);

  FUNC_4(&VAR_0->mc_list_lock);
 }
 FUNC_5(&VAR_0->mc_list_lock);
}
