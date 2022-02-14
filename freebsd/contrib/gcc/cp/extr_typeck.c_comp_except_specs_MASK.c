
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;

bool
FUNC_4 (tree VAR_1, tree VAR_2, bool VAR_3)
{
  tree VAR_4;
  tree VAR_5;
  int VAR_6 = 0;

  if (VAR_1 == VAR_2)
    return 1;

  if (VAR_1 == VAR_0)
    return VAR_2 == VAR_0 || !VAR_3;
  if (!FUNC_1 (VAR_1))
    return VAR_2 != VAR_0 && !FUNC_1 (VAR_2);
  if (VAR_2 == VAR_0)
    return 0;
  if (FUNC_1 (VAR_1) && !FUNC_1 (VAR_2))
    return !VAR_3;





  for (VAR_5 = VAR_1; VAR_2 != VAR_0; VAR_2 = FUNC_0 (VAR_2))
    {
      for (VAR_4 = VAR_5; VAR_4 != VAR_0; VAR_4 = FUNC_0 (VAR_4))
 {
   tree VAR_7 = FUNC_1 (VAR_4);
   tree VAR_8 = FUNC_1 (VAR_2);

   if (FUNC_2 (VAR_7, VAR_8, VAR_3))
     {
       if (VAR_4 == VAR_5 && VAR_3)
  VAR_5 = FUNC_0 (VAR_4);
       VAR_6++;
       break;
     }
 }
      if (VAR_4 == VAR_0)
 return 0;
    }
  return !VAR_3 || VAR_5 == VAR_0 || VAR_6 == FUNC_3 (VAR_1);
}
