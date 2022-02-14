
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static inline bool
FUNC_2 (tree VAR_0, tree VAR_1)
{
  if (VAR_0 == VAR_1)
    return 1;
  if (!VAR_0 || !VAR_1 || !FUNC_1 (VAR_0, VAR_1, 0))
    return 0;
  if (FUNC_0 (VAR_0))
    return FUNC_0 (VAR_1);
  return 1;
}
