
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xkey ;
typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int*,int*) ;

int FUNC_4(const u8 *VAR_0, size_t VAR_1, u8 *VAR_2, size_t VAR_3)
{
 u8 VAR_4[64];
 u32 VAR_5[5], VAR_6[5];
 int VAR_7, VAR_8, VAR_9, VAR_10;
 u8 *VAR_11 = VAR_2;
 u32 VAR_12;

 if (VAR_1 < sizeof(VAR_4))
  FUNC_2(VAR_4 + VAR_1, 0, sizeof(VAR_4) - VAR_1);
 else
  VAR_1 = sizeof(VAR_4);



 FUNC_1(VAR_4, VAR_0, VAR_1);
 VAR_5[0] = 0x67452301;
 VAR_5[1] = 0xEFCDAB89;
 VAR_5[2] = 0x98BADCFE;
 VAR_5[3] = 0x10325476;
 VAR_5[4] = 0xC3D2E1F0;

 VAR_9 = VAR_3 / 40;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {



   FUNC_1(VAR_6, VAR_5, 20);
   FUNC_3(VAR_6, VAR_4);
   FUNC_0(VAR_11, VAR_6[0]);
   FUNC_0(VAR_11 + 4, VAR_6[1]);
   FUNC_0(VAR_11 + 8, VAR_6[2]);
   FUNC_0(VAR_11 + 12, VAR_6[3]);
   FUNC_0(VAR_11 + 16, VAR_6[4]);


   VAR_12 = 1;
   for (VAR_10 = 19; VAR_10 >= 0; VAR_10--) {
    VAR_12 += VAR_4[VAR_10] + VAR_11[VAR_10];
    VAR_4[VAR_10] = VAR_12 & 0xff;
    VAR_12 >>= 8;
   }

   VAR_11 += 20;
  }

 }

 return 0;
}
