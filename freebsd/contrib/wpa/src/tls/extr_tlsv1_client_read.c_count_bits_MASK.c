
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned int FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 unsigned int VAR_3;
 u8 VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2])
   break;
 }
 if (VAR_2 == VAR_1)
  return 0;

 VAR_3 = (VAR_1 - VAR_2 - 1) * 8;
 VAR_4 = VAR_0[VAR_2];
 while (VAR_4) {
  VAR_3++;
  VAR_4 >>= 1;
 }

 return VAR_3;
}
