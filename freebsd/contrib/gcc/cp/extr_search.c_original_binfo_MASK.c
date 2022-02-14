
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ) ;

tree
FUNC_7 (tree VAR_1, tree VAR_2)
{
  tree VAR_3 = ((void*)0);

  if (FUNC_5 (FUNC_2 (VAR_1), FUNC_2 (VAR_2)))
    VAR_3 = VAR_2;
  else if (FUNC_3 (VAR_1))
    VAR_3 = (FUNC_4 (FUNC_2 (VAR_2))
       ? FUNC_6 (FUNC_2 (VAR_1), FUNC_2 (VAR_2))
       : VAR_0);
  else if (FUNC_1 (VAR_1))
    {
      tree VAR_4;

      VAR_4 = FUNC_7 (FUNC_1 (VAR_1), VAR_2);
      if (VAR_4)
 {
   int VAR_5;
   tree VAR_6;

   for (VAR_5 = 0; (VAR_6 = FUNC_0 (VAR_4, VAR_5)); VAR_5++)
     if (FUNC_5 (FUNC_2 (VAR_6),
       FUNC_2 (VAR_1)))
       {
  VAR_3 = VAR_6;
  break;
       }
 }
    }

  return VAR_3;
}
