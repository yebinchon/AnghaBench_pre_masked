
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

tree
FUNC_5 (tree VAR_1)
{
  tree VAR_2;



  while (FUNC_1 (VAR_1) == VAR_0)
    VAR_1 = FUNC_3 (VAR_1, 0);





  VAR_2 = VAR_1;
  while (1)
    {
      if (FUNC_4 (VAR_2))
 VAR_2 = FUNC_3 (VAR_2, 0);
      else if (FUNC_0 (VAR_2))
 {
   if (FUNC_2 (FUNC_3 (VAR_2, 1)))
     VAR_2 = FUNC_3 (VAR_2, 0);
   else if (FUNC_2 (FUNC_3 (VAR_2, 0)))
     VAR_2 = FUNC_3 (VAR_2, 1);
   else
     break;
 }
      else
 break;
    }

  return VAR_2;
}
