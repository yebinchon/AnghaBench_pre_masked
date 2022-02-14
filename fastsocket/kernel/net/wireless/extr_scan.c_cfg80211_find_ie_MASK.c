
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;



const u8 *FUNC_0(u8 VAR_0, const u8 *VAR_1, int VAR_2)
{
 while (VAR_2 > 2 && VAR_1[0] != VAR_0) {
  VAR_2 -= VAR_1[1] + 2;
  VAR_1 += VAR_1[1] + 2;
 }
 if (VAR_2 < 2)
  return ((void*)0);
 if (VAR_2 < 2 + VAR_1[1])
  return ((void*)0);
 return VAR_1;
}
