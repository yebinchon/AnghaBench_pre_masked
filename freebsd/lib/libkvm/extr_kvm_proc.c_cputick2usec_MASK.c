
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_1)
{

 if (VAR_0 == 0)
  return (0);
 if (VAR_1 > 18446744073709551)
  return (VAR_1 / (VAR_0 / 1000000));
 else if (VAR_1 > 18446744073709)
  return ((VAR_1 * 1000) / (VAR_0 / 1000));
 else
  return ((VAR_1 * 1000000) / VAR_0);
}
