
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_2, tree VAR_3)
{
  tree VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  do
    {


      VAR_8 = VAR_3;
      do
 {
   VAR_4 = FUNC_2 (VAR_2, 1);
   VAR_6 = FUNC_3 (FUNC_0 (VAR_4));

   VAR_3 = VAR_8;
   do
     {
       VAR_5 = FUNC_2 (VAR_3, 1);
       VAR_7 = FUNC_3 (FUNC_0 (VAR_5));

       if (VAR_6 == VAR_7)
  goto found;

       VAR_3 = FUNC_2 (VAR_3, 0);
     }
   while (VAR_3 && FUNC_1 (VAR_3) == VAR_0);

   VAR_2 = FUNC_2 (VAR_2, 0);
 }
      while (VAR_2 && FUNC_1 (VAR_2) == VAR_0);

      return 0;

    found:


      if (FUNC_1 (VAR_6) == VAR_1
   && VAR_4 != VAR_5)
 return 1;



      VAR_2 = FUNC_2 (VAR_2, 0);
      VAR_3 = FUNC_2 (VAR_3, 0);
    }
  while (VAR_2 && VAR_3
  && FUNC_1 (VAR_2) == VAR_0
  && FUNC_1 (VAR_3) == VAR_0);

  return 0;
}
