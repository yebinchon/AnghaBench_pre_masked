
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_3 (tree VAR_2, unsigned VAR_3, bool *VAR_4)
{
  tree VAR_5;

  if (VAR_2 == VAR_1
      || VAR_2 == VAR_0
      || FUNC_0 (VAR_2, VAR_3))
    return 0;

  VAR_5 = FUNC_1 (VAR_2, VAR_3);
  *VAR_4 = !FUNC_2 (VAR_5);
  return 1;
}
