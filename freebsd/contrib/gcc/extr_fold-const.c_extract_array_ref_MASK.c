
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_7, tree *VAR_8, tree *VAR_9)
{



  if (FUNC_2 (VAR_7) == VAR_5)
    {
      tree VAR_10 = FUNC_3 (VAR_7, 0);
      tree VAR_11, VAR_12;


      FUNC_1 (VAR_10);
      if (FUNC_7 (VAR_10, &VAR_11, &VAR_12))
 {
   *VAR_8 = VAR_11;
   if (VAR_12 == VAR_4)
     *VAR_9 = FUNC_3 (VAR_7, 1);
   else
     *VAR_9 = FUNC_6 (VAR_5, FUNC_4 (VAR_7),
       VAR_12, FUNC_3 (VAR_7, 1));
   return 1;
 }
    }





  else if (FUNC_2 (VAR_7) == VAR_0)
    {
      tree VAR_13 = FUNC_3 (VAR_7, 0);
      if (FUNC_2 (VAR_13) == VAR_1)
 {
   tree VAR_14 = FUNC_3 (VAR_13, 1);
   *VAR_8 = FUNC_3 (VAR_13, 0);
   *VAR_9 = FUNC_6 (VAR_3, FUNC_4 (VAR_14), VAR_14,
     FUNC_5 (VAR_13));
 }
      else
 {

   if (FUNC_2 (FUNC_4 (VAR_13)) == VAR_2)
     *VAR_8 = FUNC_3 (VAR_7, 0);
   else
     *VAR_8 = VAR_7;
   *VAR_9 = VAR_4;
 }
      return 1;
    }

  else if (FUNC_0 (VAR_7)
    && FUNC_2 (FUNC_4 (VAR_7)) == VAR_6)
    {
      *VAR_8 = VAR_7;
      *VAR_9 = VAR_4;
      return 1;
    }

  return 0;
}
