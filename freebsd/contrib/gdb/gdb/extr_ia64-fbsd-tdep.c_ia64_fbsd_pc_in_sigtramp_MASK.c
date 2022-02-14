
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ CORE_ADDR ;



__attribute__((used)) static int
FUNC_0 (CORE_ADDR VAR_0, char *VAR_1)
{
  uint64_t VAR_2 = 5ULL << 61;
  return (VAR_0 >= VAR_2 && VAR_0 < (VAR_2 + 8192)) ? 1 : 0;
}
