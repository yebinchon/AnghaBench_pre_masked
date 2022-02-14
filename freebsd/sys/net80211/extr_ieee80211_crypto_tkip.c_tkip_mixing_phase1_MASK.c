
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(u16 *VAR_1, const u8 *VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;


 VAR_1[0] = FUNC_1(VAR_4);
 VAR_1[1] = FUNC_0(VAR_4);
 VAR_1[2] = FUNC_2(VAR_3[1], VAR_3[0]);
 VAR_1[3] = FUNC_2(VAR_3[3], VAR_3[2]);
 VAR_1[4] = FUNC_2(VAR_3[5], VAR_3[4]);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = 2 * (VAR_5 & 1);
  VAR_1[0] += FUNC_3(VAR_1[4] ^ FUNC_2(VAR_2[1 + VAR_6], VAR_2[0 + VAR_6]));
  VAR_1[1] += FUNC_3(VAR_1[0] ^ FUNC_2(VAR_2[5 + VAR_6], VAR_2[4 + VAR_6]));
  VAR_1[2] += FUNC_3(VAR_1[1] ^ FUNC_2(VAR_2[9 + VAR_6], VAR_2[8 + VAR_6]));
  VAR_1[3] += FUNC_3(VAR_1[2] ^ FUNC_2(VAR_2[13 + VAR_6], VAR_2[12 + VAR_6]));
  VAR_1[4] += FUNC_3(VAR_1[3] ^ FUNC_2(VAR_2[1 + VAR_6], VAR_2[0 + VAR_6])) + VAR_5;
 }
}
