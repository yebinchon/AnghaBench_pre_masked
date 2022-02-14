
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conditional_frame {int macro_nest; struct conditional_frame* previous_cframe; } ;


 int VAR_0 ;
 struct conditional_frame* VAR_1 ;
 int FUNC_0 (int *,struct conditional_frame*) ;

void
FUNC_1 (int VAR_2)
{
  while (VAR_1 != ((void*)0) && VAR_1->macro_nest >= VAR_2)
    {
      struct conditional_frame *VAR_3;

      VAR_3 = VAR_1;
      VAR_1 = VAR_1->previous_cframe;
      FUNC_0 (&VAR_0, VAR_3);
    }
}
