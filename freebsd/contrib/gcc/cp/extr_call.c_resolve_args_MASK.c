
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_1)
{
  tree VAR_2;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_0 (VAR_2))
    {
      tree VAR_3 = FUNC_2 (VAR_2);

      if (FUNC_5 (VAR_3))
 return VAR_0;
      else if (FUNC_3 (FUNC_1 (VAR_3)))
 {
   FUNC_4 ("invalid use of void expression");
   return VAR_0;
 }
      else if (FUNC_6 (VAR_3))
 return VAR_0;
    }
  return VAR_1;
}
