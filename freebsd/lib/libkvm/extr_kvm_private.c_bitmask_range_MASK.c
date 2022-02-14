
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 if (VAR_1 == 0 && VAR_2 == FUNC_0(VAR_0))
  return (VAR_0);

 return (VAR_0 & (((1ULL << (VAR_2 - VAR_1)) - 1ULL) << VAR_1));
}
