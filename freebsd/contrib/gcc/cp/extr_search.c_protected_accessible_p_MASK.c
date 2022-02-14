
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ access_kind ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (tree VAR_1, tree VAR_2, tree VAR_3)
{
  access_kind VAR_4;
  if (!FUNC_3 (FUNC_5 (VAR_1), VAR_2))
    return 0;

  VAR_4 = FUNC_4 (VAR_2, VAR_1);


  if (VAR_4 == VAR_0)
    return 0;
  if (FUNC_2 (VAR_1))
    {


      tree VAR_5 = VAR_3;
      while (FUNC_0 (VAR_5))
 VAR_5 = FUNC_0 (VAR_5);

      if (!FUNC_3 (VAR_2, FUNC_1 (VAR_5)))
 return 0;
    }

  return 1;
}
