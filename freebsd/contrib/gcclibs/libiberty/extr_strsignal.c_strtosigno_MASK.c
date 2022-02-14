
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int *) ;

int
FUNC_2 (const char *VAR_2)
{
  int VAR_3 = 0;

  if (VAR_2 != ((void*)0))
    {
      if (VAR_1 == ((void*)0))
 {
   FUNC_0 ();
 }
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
   if ((VAR_1[VAR_3] != ((void*)0)) &&
       (FUNC_1 (VAR_2, VAR_1[VAR_3]) == 0))
     {
       break;
     }
 }
      if (VAR_3 == VAR_0)
 {
   VAR_3 = 0;
 }
    }
  return (VAR_3);
}
