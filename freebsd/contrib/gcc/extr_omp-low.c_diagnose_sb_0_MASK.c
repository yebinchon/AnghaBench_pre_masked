
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4 (tree *VAR_0, tree VAR_1, tree VAR_2)
{
  bool VAR_3 = 1;

  if ((VAR_2 ? FUNC_1 (VAR_2) : ((void*)0)) == VAR_1)
    return 0;




  if (VAR_1 == ((void*)0))
    VAR_3 = 0;
  else
    {
      while (VAR_2)
 {
   if (FUNC_1 (VAR_2) == VAR_1)
     {
       VAR_3 = 0;
       break;
     }
   VAR_2 = FUNC_0 (VAR_2);
 }
    }

  if (VAR_3)
    FUNC_3 ("invalid exit from OpenMP structured block");
  else
    FUNC_3 ("invalid entry to OpenMP structured block");

  *VAR_0 = FUNC_2 ();
  return 1;
}
