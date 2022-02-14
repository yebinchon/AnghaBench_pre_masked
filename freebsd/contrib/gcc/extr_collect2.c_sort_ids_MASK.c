
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id {scalar_t__ sequence; struct id* next; int name; } ;
struct head {struct id* first; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct head *VAR_1)
{



  struct id *VAR_2, *VAR_3, **VAR_4;

  VAR_2 = VAR_1->first;


  VAR_1->first = ((void*)0);

  for (; VAR_2; VAR_2 = VAR_3)
    {
      VAR_3 = VAR_2->next;
      VAR_2->sequence = FUNC_0 (VAR_2->name);

      for (VAR_4 = &(VAR_1->first); ; VAR_4 = &((*VAR_4)->next))
 if (*VAR_4 == ((void*)0)


     || VAR_2->sequence > (*VAR_4)->sequence



     )
   {
     VAR_2->next = *VAR_4;
     *VAR_4 = VAR_2;
     break;
   }
    }


  for (VAR_2 = VAR_1->first; VAR_2; VAR_2 = VAR_2->next)
    VAR_2->sequence = ++VAR_0;
}
