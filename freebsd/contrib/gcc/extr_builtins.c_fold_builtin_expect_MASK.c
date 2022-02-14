
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_3)
{
  tree VAR_4, VAR_5;

  if (VAR_3 == 0)
    return 0;

  VAR_4 = FUNC_6 (VAR_3);


  if (!FUNC_4 (VAR_4))
    return 0;


  VAR_5 = VAR_4;
  FUNC_2 (VAR_5);
  if (FUNC_3 (VAR_5) == VAR_0)
    {
      do
 {
   VAR_5 = FUNC_5 (VAR_5, 0);
 }
      while (FUNC_3 (VAR_5) == VAR_2
      || FUNC_3 (VAR_5) == VAR_1);
      if (FUNC_0 (VAR_5) && FUNC_1 (VAR_5))
 return 0;
    }


  return VAR_4;
}
