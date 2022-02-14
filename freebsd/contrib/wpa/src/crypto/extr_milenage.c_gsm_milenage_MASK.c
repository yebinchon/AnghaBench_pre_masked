
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,int const*,int const*,int*,int*,int*,int *,int *) ;
 int FUNC_1 (int*,int*,int) ;

int FUNC_2(const u8 *VAR_0, const u8 *VAR_1, const u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 u8 VAR_5[8], VAR_6[16], VAR_7[16];
 int VAR_8;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6, VAR_7, ((void*)0), ((void*)0)))
  return -1;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  VAR_4[VAR_8] = VAR_6[VAR_8] ^ VAR_6[VAR_8 + 8] ^ VAR_7[VAR_8] ^ VAR_7[VAR_8 + 8];




 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  VAR_3[VAR_8] = VAR_5[VAR_8] ^ VAR_5[VAR_8 + 4];

 return 0;
}
