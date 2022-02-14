
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int * FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int const) ;

__attribute__((used)) static int
FUNC_10 (const tree VAR_2, tree* const VAR_3)
{
  if (FUNC_7 (VAR_2) == VAR_1)
    {


      const tree VAR_4 = FUNC_8 (VAR_2);

      if (FUNC_1 (VAR_4) && FUNC_0 (VAR_4))
 {
   if (VAR_3 != ((void*)0))


     *VAR_3 = FUNC_9 (VAR_4);
   return 1;
 }
    }
  else
    {

      if (FUNC_2 (VAR_2) != ((void*)0)
   && FUNC_5 (VAR_2)
   && FUNC_6 (FUNC_4 (VAR_2))
   && FUNC_7 (VAR_2) != VAR_0)
 {
   if (VAR_3 != ((void*)0))


     *VAR_3 = FUNC_3 (VAR_2);
   return 1;
 }
    }


  return 0;
}
