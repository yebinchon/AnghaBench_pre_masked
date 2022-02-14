
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,size_t,int ) ;
 size_t FUNC_5 (char const*) ;

tree
FUNC_6 (const char *VAR_2, tree VAR_3)
{
  tree VAR_4;
  size_t VAR_5 = FUNC_5 (VAR_2);

  for (VAR_4 = VAR_3; VAR_4; VAR_4 = FUNC_0 (VAR_4))
    {
      FUNC_3 (FUNC_1 (FUNC_2 (VAR_4)) == VAR_0);
      if (FUNC_4 (VAR_2, VAR_5, FUNC_2 (VAR_4)))
 return VAR_4;
    }

  return VAR_1;
}
