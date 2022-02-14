
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef size_t UChar ;
typedef int Int32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int,int) ;

__attribute__((used)) static
void FUNC_9 ( UInt32* VAR_0,
                    UInt32* VAR_1,
                    UInt32* VAR_2,
                    Int32 VAR_3,
                    Int32 VAR_4 )
{
   Int32 VAR_5[257];
   Int32 VAR_6[256];
   Int32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
   Int32 VAR_15;
   Int32 VAR_16;
   UChar* VAR_17 = (UChar*)VAR_1;





   if (VAR_4 >= 4)
      FUNC_5 ( "        bucket sorting ...\n" );
   for (VAR_8 = 0; VAR_8 < 257; VAR_8++) VAR_5[VAR_8] = 0;
   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) VAR_5[VAR_17[VAR_8]]++;
   for (VAR_8 = 0; VAR_8 < 256; VAR_8++) VAR_6[VAR_8] = VAR_5[VAR_8];
   for (VAR_8 = 1; VAR_8 < 257; VAR_8++) VAR_5[VAR_8] += VAR_5[VAR_8-1];

   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      VAR_9 = VAR_17[VAR_8];
      VAR_10 = VAR_5[VAR_9] - 1;
      VAR_5[VAR_9] = VAR_10;
      VAR_0[VAR_10] = VAR_8;
   }

   VAR_16 = 2 + (VAR_3 / 32);
   for (VAR_8 = 0; VAR_8 < VAR_16; VAR_8++) VAR_2[VAR_8] = 0;
   for (VAR_8 = 0; VAR_8 < 256; VAR_8++) FUNC_3(VAR_5[VAR_8]);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
      FUNC_3(VAR_3 + 2*VAR_8);
      FUNC_1(VAR_3 + 2*VAR_8 + 1);
   }


   VAR_7 = 1;
   while (1) {

      if (VAR_4 >= 4)
         FUNC_6 ( "        depth %6d has ", VAR_7 );

      VAR_9 = 0;
      for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
         if (FUNC_2(VAR_8)) VAR_9 = VAR_8;
         VAR_10 = VAR_0[VAR_8] - VAR_7; if (VAR_10 < 0) VAR_10 += VAR_3;
         VAR_1[VAR_10] = VAR_9;
      }

      VAR_15 = 0;
      VAR_12 = -1;
      while (1) {


         VAR_10 = VAR_12 + 1;
         while (FUNC_2(VAR_10) && FUNC_4(VAR_10)) VAR_10++;
         if (FUNC_2(VAR_10)) {
            while (FUNC_7(VAR_10) == 0xffffffff) VAR_10 += 32;
            while (FUNC_2(VAR_10)) VAR_10++;
         }
         VAR_11 = VAR_10 - 1;
         if (VAR_11 >= VAR_3) break;
         while (!FUNC_2(VAR_10) && FUNC_4(VAR_10)) VAR_10++;
         if (!FUNC_2(VAR_10)) {
            while (FUNC_7(VAR_10) == 0x00000000) VAR_10 += 32;
            while (!FUNC_2(VAR_10)) VAR_10++;
         }
         VAR_12 = VAR_10 - 1;
         if (VAR_12 >= VAR_3) break;


         if (VAR_12 > VAR_11) {
            VAR_15 += (VAR_12 - VAR_11 + 1);
            FUNC_8 ( VAR_0, VAR_1, VAR_11, VAR_12 );


            VAR_13 = -1;
            for (VAR_8 = VAR_11; VAR_8 <= VAR_12; VAR_8++) {
               VAR_14 = VAR_1[VAR_0[VAR_8]];
               if (VAR_13 != VAR_14) { FUNC_3(VAR_8); VAR_13 = VAR_14; };
            }
         }
      }

      if (VAR_4 >= 4)
         FUNC_6 ( "%6d unresolved strings\n", VAR_15 );

      VAR_7 *= 2;
      if (VAR_7 > VAR_3 || VAR_15 == 0) break;
   }






   if (VAR_4 >= 4)
      FUNC_5 ( "        reconstructing block ...\n" );
   VAR_9 = 0;
   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      while (VAR_6[VAR_9] == 0) VAR_9++;
      VAR_6[VAR_9]--;
      VAR_17[VAR_0[VAR_8]] = (UChar)VAR_9;
   }
   FUNC_0 ( VAR_9 < 256, 1005 );
}
