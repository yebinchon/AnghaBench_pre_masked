
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {scalar_t__ multiaddr; scalar_t__ users; struct ip_mc_list* next; } ;
struct in_device {int dead; int mc_list_lock; int mc_count; struct ip_mc_list* mc_list; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (struct ip_mc_list*) ;
 int FUNC_2 (struct ip_mc_list*) ;
 int FUNC_3 (struct ip_mc_list*) ;
 int FUNC_4 (struct in_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct in_device *VAR_0, __be32 VAR_1)
{
 struct ip_mc_list *VAR_2, **VAR_3;

 FUNC_0();

 for (VAR_3=&VAR_0->mc_list; (VAR_2=*VAR_3)!=((void*)0); VAR_3=&VAR_2->next) {
  if (VAR_2->multiaddr == VAR_1) {
   if (--VAR_2->users == 0) {
    FUNC_5(&VAR_0->mc_list_lock);
    *VAR_3 = VAR_2->next;
    VAR_0->mc_count--;
    FUNC_6(&VAR_0->mc_list_lock);
    FUNC_1(VAR_2);
    FUNC_3(VAR_2);

    if (!VAR_0->dead)
     FUNC_4(VAR_0);

    FUNC_2(VAR_2);
    return;
   }
   break;
  }
 }
}
