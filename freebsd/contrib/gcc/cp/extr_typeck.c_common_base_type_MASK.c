
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2, tree VAR_3)
{
  tree VAR_4 = VAR_0;
  int VAR_5;


  if (FUNC_4 (VAR_2, VAR_3))
    return VAR_2;
  if (FUNC_4 (VAR_3, VAR_2))
    return VAR_3;



  for (VAR_5 = FUNC_1 (FUNC_3 (VAR_2))-1; VAR_5 >= 0; VAR_5--)
    {
      tree VAR_6 = FUNC_2 (FUNC_0 (FUNC_3 (VAR_2), VAR_5));
      tree VAR_7 = FUNC_5 (VAR_6, VAR_3);

      if (VAR_7)
 {
   if (VAR_7 == VAR_1)
     return VAR_7;
   if (VAR_4 == VAR_0)
     VAR_4 = VAR_7;
   else if (VAR_4 != VAR_7)
     return VAR_1;
 }
    }


  for (VAR_5 = FUNC_1 (FUNC_3 (VAR_3))-1; VAR_5 >= 0; VAR_5--)
    {
      tree VAR_8 = FUNC_2 (FUNC_0 (FUNC_3 (VAR_3), VAR_5));
      tree VAR_9 = FUNC_5 (VAR_2, VAR_8);

      if (VAR_9)
 {
   if (VAR_9 == VAR_1)
     return VAR_9;
   if (VAR_4 == VAR_0)
     VAR_4 = VAR_9;
   else if (VAR_4 != VAR_9)
     return VAR_1;
 }
    }
  return VAR_4;
}
