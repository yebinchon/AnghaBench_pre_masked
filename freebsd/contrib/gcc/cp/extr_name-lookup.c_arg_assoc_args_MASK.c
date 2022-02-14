
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct arg_lookup {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct arg_lookup*,int ) ;

__attribute__((used)) static bool
FUNC_3 (struct arg_lookup *VAR_0, tree VAR_1)
{
  for (; VAR_1; VAR_1 = FUNC_0 (VAR_1))
    if (FUNC_2 (VAR_0, FUNC_1 (VAR_1)))
      return 1;
  return 0;
}
