
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 char const* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_0 ;

const char *
FUNC_11 (tree VAR_1)
{
  tree VAR_2;




  if (FUNC_10 (VAR_1) == VAR_0 && FUNC_6 (VAR_1))
    VAR_2 = FUNC_1 (FUNC_0 (FUNC_2 (VAR_1)));


  else
    {
      while (FUNC_5 (VAR_1))
 {



   tree VAR_3 = FUNC_9 (VAR_1);
   if (FUNC_8 (VAR_3)
       && FUNC_4 (VAR_3) != ((void*)0)
       && FUNC_3 (VAR_3))
     VAR_1 = VAR_3;
   else
     break;
 }
      VAR_2 = FUNC_1 (VAR_1);
    }

  return FUNC_7 (VAR_2);
}
