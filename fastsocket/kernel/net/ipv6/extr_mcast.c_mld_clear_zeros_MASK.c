
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {scalar_t__ sf_crcount; struct ip6_sf_list* sf_next; } ;


 int FUNC_0 (struct ip6_sf_list*) ;

__attribute__((used)) static void FUNC_1(struct ip6_sf_list **VAR_0)
{
 struct ip6_sf_list *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = ((void*)0);
 for (VAR_3=*VAR_0; VAR_3; VAR_3 = VAR_2) {
  VAR_2 = VAR_3->sf_next;
  if (VAR_3->sf_crcount == 0) {
   if (VAR_1)
    VAR_1->sf_next = VAR_3->sf_next;
   else
    *VAR_0 = VAR_3->sf_next;
   FUNC_0(VAR_3);
  } else
   VAR_1 = VAR_3;
 }
}
