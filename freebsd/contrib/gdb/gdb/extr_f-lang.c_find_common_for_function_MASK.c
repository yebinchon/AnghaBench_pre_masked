
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int owning_function; int name; } ;
typedef TYPE_1__* SAVED_F77_COMMON_PTR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_0 ;

SAVED_F77_COMMON_PTR
FUNC_1 (char *VAR_1, char *VAR_2)
{

  SAVED_F77_COMMON_PTR VAR_3;

  VAR_3 = VAR_0;

  while (VAR_3 != ((void*)0))
    {
      if (FUNC_0 (VAR_3->name, VAR_1)
   && FUNC_0 (VAR_3->owning_function, VAR_2))
 return (VAR_3);
      else
 VAR_3 = VAR_3->next;
    }
  return (((void*)0));
}
