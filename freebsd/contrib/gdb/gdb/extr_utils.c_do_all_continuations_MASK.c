
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuation {struct continuation* next; int arg_list; int (* continuation_hook ) (int ) ;} ;


 struct continuation* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct continuation*) ;

void
FUNC_2 (void)
{
  struct continuation *VAR_1;
  struct continuation *VAR_2;





  VAR_1 = VAR_0;
  VAR_0 = ((void*)0);


  while (VAR_1)
    {
      (VAR_1->continuation_hook) (VAR_1->arg_list);
      VAR_2 = VAR_1;
      VAR_1 = VAR_1->next;
      FUNC_1 (VAR_2);
    }
}
