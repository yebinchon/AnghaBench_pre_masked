
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(const u8 *VAR_0)
{
 int VAR_1 = 0, VAR_2, VAR_3, VAR_4 = 0, VAR_5;

 for (VAR_2 = 0; VAR_2 < 6; ++VAR_2)
  for (VAR_5 = VAR_0[VAR_2], VAR_3 = 0; VAR_3 < 8; VAR_5 >>= 1, ++VAR_3) {
   VAR_1 ^= (VAR_5 & 1) << VAR_4;
   if (++VAR_4 == 6)
    VAR_4 = 0;
  }
 return VAR_1;
}
