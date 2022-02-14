
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {scalar_t__ latch; } ;
typedef scalar_t__ basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct loop*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_4 (struct loop *VAR_0, tree VAR_1)
{
  basic_block VAR_2 = FUNC_2 (VAR_0), VAR_3 = FUNC_0 (VAR_1);

  FUNC_1 (VAR_2);

  if (VAR_3 == VAR_0->latch)
    return 1;

  if (VAR_3 != VAR_2)
    return 0;

  return VAR_1 == FUNC_3 (VAR_2);
}
