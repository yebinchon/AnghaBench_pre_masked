
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_0, CORE_ADDR *VAR_1)
{
  CORE_ADDR VAR_2;
  CORE_ADDR VAR_3;
  CORE_ADDR VAR_4;

  VAR_2 = FUNC_0 (1);
  VAR_3 = FUNC_0 (2);

  VAR_4 = FUNC_1 (VAR_2, VAR_3);
  if (VAR_1 != 0)
    *VAR_1 = VAR_4;
  if (VAR_4 == 0)
    return 1;
  return 0;
}
