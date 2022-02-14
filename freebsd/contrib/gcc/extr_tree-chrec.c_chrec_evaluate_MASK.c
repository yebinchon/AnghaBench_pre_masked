
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static tree
FUNC_8 (unsigned VAR_3, tree VAR_4, tree VAR_5, unsigned int VAR_6)
{
  tree VAR_7, VAR_8, VAR_9;
  tree VAR_10 = FUNC_4 (VAR_4);

  while (FUNC_3 (VAR_4) == VAR_1
  && FUNC_2 (VAR_4) > VAR_3)
    VAR_4 = FUNC_0 (VAR_4);

  if (FUNC_3 (VAR_4) == VAR_1
      && FUNC_2 (VAR_4) == VAR_3)
    {
      VAR_7 = FUNC_8 (VAR_3, FUNC_1 (VAR_4), VAR_5, VAR_6 + 1);
      if (VAR_7 == VAR_2)
 return VAR_2;
      VAR_9 = FUNC_7 (VAR_10, VAR_5, VAR_6);
      if (!VAR_9)
 return VAR_2;
      VAR_8 = FUNC_6 (VAR_0, VAR_10,
     FUNC_0 (VAR_4), VAR_9);
      return FUNC_5 (VAR_10, VAR_7, VAR_8);
    }

  VAR_9 = FUNC_7 (VAR_10, VAR_5, VAR_6);
  if (!VAR_9)
    return VAR_2;

  return FUNC_6 (VAR_0, VAR_10, VAR_4, VAR_9);
}
