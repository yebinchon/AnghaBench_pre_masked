
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 unsigned int VAR_4 = 0;

 for (VAR_3 = VAR_2 - 1; VAR_3 < VAR_2; VAR_3--) {
  VAR_4 = VAR_4 + VAR_0[VAR_3] + VAR_1[VAR_3];
  VAR_0[VAR_3] = VAR_4 & 0xff;
  VAR_4 >>= 8;
 }
}
