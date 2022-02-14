
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*) ;

__attribute__((used)) static void FUNC_5(const u8 *VAR_0, const u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3[16];
 int VAR_4, VAR_5;

 FUNC_2(VAR_2, 0, 16);
 FUNC_1(VAR_3, VAR_1, 16);

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   if (VAR_0[VAR_4] & FUNC_0(7 - VAR_5)) {

    FUNC_4(VAR_2, VAR_3);
   } else {

   }

   if (VAR_3[15] & 0x01) {

    FUNC_3(VAR_3);

    VAR_3[0] ^= 0xe1;
   } else {

    FUNC_3(VAR_3);
   }
  }
 }
}
