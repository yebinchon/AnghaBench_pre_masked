
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



__attribute__((used)) static void
FUNC_0(uint64_t *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2)
{
 uint64_t VAR_3[2];

 VAR_3[0] = VAR_0[0] + VAR_1[0];
 VAR_3[1] = VAR_0[1] + VAR_1[1] +
     (VAR_3[0] < VAR_0[0] || VAR_3[0] < VAR_1[0] ? 1 : 0);

 VAR_2[0] = VAR_3[0];
 VAR_2[1] = VAR_3[1];
}
