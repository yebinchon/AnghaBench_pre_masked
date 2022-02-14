
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_super {scalar_t__ class; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,struct objc_super*) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_0, CORE_ADDR *VAR_1)
{
  struct objc_super VAR_2;

  CORE_ADDR VAR_3;
  CORE_ADDR VAR_4;
  CORE_ADDR VAR_5;

  VAR_3 = FUNC_0 (1);
  VAR_4 = FUNC_0 (2);

  FUNC_2 (VAR_3, &VAR_2);
  if (VAR_2.class == 0)
    return 0;

  VAR_5 = FUNC_1 (VAR_2.class, VAR_4);
  if (VAR_1 != 0)
    *VAR_1 = VAR_5;
  if (VAR_5 == 0)
    return 1;
  return 0;
}
