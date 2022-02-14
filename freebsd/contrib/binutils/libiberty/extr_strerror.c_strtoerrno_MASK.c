
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int * name; } ;


 int ** VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int *) ;

int
FUNC_2 (const char *VAR_3)
{
  int VAR_4 = 0;

  if (VAR_3 != ((void*)0))
    {
      if (VAR_0 == ((void*)0))
 {
   FUNC_0 ();
 }
      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
   if ((VAR_0[VAR_4] != ((void*)0)) &&
       (FUNC_1 (VAR_3, VAR_0[VAR_4]) == 0))
     {
       break;
     }
 }
      if (VAR_4 == VAR_2)
 {





   VAR_4 = 0;
 }
    }
  return (VAR_4);
}
