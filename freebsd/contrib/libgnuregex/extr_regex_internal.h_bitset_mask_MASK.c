
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * bitset_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (bitset_t VAR_1, const bitset_t VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    VAR_1[VAR_3] &= VAR_2[VAR_3];
}
