
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,int const*,int const*,int*,int*,int *,int*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int const*,int *,int *,int *,int *,int*) ;
 scalar_t__ FUNC_2 (int*,int const*,int) ;

int FUNC_3(const u8 *VAR_0, const u8 *VAR_1, const u8 *VAR_2, const u8 *VAR_3,
    u8 *VAR_4)
{
 u8 VAR_5[2] = { 0x00, 0x00 };
 u8 VAR_6[6], VAR_7[8];
 int VAR_8;

 if (FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_6))
  return -1;
 for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
  VAR_4[VAR_8] = VAR_3[VAR_8] ^ VAR_6[VAR_8];
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, ((void*)0), VAR_7) ||
     FUNC_2(VAR_7, VAR_3 + 6, 8) != 0)
  return -1;
 return 0;
}
