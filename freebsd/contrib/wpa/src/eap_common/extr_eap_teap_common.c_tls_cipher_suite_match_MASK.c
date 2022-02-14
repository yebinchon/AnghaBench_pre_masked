
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u16 ;



__attribute__((used)) static int FUNC_0(const u16 *VAR_0, size_t VAR_1, u16 VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   return 1;
 }

 return 0;
}
