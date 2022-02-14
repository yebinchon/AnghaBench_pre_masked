
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef scalar_t__ segT ;


 scalar_t__ VAR_0 ;

valueT
FUNC_0 (segT VAR_1, valueT VAR_2)
{

  if (VAR_1 == VAR_0)
    return (VAR_2 + 1) & ~1;
  return VAR_2;
}
