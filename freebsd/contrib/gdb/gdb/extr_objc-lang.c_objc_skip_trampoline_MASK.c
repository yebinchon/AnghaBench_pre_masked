
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0)
{
  CORE_ADDR VAR_1;
  CORE_ADDR VAR_2;

  VAR_1 = FUNC_0 (VAR_0);

  if (VAR_1 != 0)
    FUNC_1 (VAR_1, &VAR_2);
  else
    FUNC_1 (VAR_0, &VAR_2);

  if (VAR_2)
    {
      VAR_1 = FUNC_0 (VAR_2);
      if (VAR_1 == 0)
 VAR_1 = VAR_2;
    }

  return VAR_1;
}
