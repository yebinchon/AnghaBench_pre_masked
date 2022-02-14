
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xkey ;
typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(const u8 *VAR_1, size_t VAR_2, u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5[64];
 u32 VAR_6[5], VAR_7[5];
 int VAR_8, VAR_9, VAR_10, VAR_11;
 u8 *VAR_12 = VAR_3;
 u32 VAR_13;

 if (VAR_2 < sizeof(VAR_5))
  FUNC_3(VAR_5 + VAR_2, 0, sizeof(VAR_5) - VAR_2);
 else
  VAR_2 = sizeof(VAR_5);



 FUNC_2(VAR_5, VAR_1, VAR_2);
 VAR_6[0] = 0x67452301;
 VAR_6[1] = 0xEFCDAB89;
 VAR_6[2] = 0x98BADCFE;
 VAR_6[3] = 0x10325476;
 VAR_6[4] = 0xC3D2E1F0;

 VAR_10 = VAR_4 / 40;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {

  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {



   FUNC_2(VAR_7, VAR_6, 20);
   FUNC_0(VAR_7, VAR_5);
   VAR_7[0] = FUNC_1(VAR_7[0]);
   VAR_7[1] = FUNC_1(VAR_7[1]);
   VAR_7[2] = FUNC_1(VAR_7[2]);
   VAR_7[3] = FUNC_1(VAR_7[3]);
   VAR_7[4] = FUNC_1(VAR_7[4]);
   FUNC_2(VAR_12, VAR_7, 20);


   VAR_13 = 1;
   for (VAR_11 = 19; VAR_11 >= 0; VAR_11--) {
    VAR_13 += VAR_5[VAR_11] + VAR_12[VAR_11];
    VAR_5[VAR_11] = VAR_13 & 0xff;
    VAR_13 >>= 8;
   }

   VAR_12 += VAR_0;
  }

 }

 return 0;
}
