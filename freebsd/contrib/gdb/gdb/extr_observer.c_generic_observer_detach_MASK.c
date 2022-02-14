
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct observer_list {struct observer_list* next; struct observer const* observer; } ;
struct observer {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct observer_list*) ;

__attribute__((used)) static void
FUNC_2 (struct observer_list **VAR_0,
    const struct observer *VAR_1)
{
  struct observer_list *VAR_2 = ((void*)0);
  struct observer_list *VAR_3 = *VAR_0;

  while (VAR_3 != ((void*)0))
    {
      if (VAR_3->observer == VAR_1)
 {
   if (VAR_2 != ((void*)0))
     VAR_2->next = VAR_3->next;
   else
     *VAR_0 = VAR_3->next;
   FUNC_1 (VAR_3);
   return;
 }
      VAR_2 = VAR_3;
      VAR_3 = VAR_3->next;
    }



  FUNC_0 ("Failed to detach observer");
}
