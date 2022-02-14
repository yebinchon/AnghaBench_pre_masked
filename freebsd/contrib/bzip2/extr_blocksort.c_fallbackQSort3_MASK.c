
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef scalar_t__ Int32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
void FUNC_8 ( UInt32* VAR_2,
                      UInt32* VAR_3,
                      Int32 VAR_4,
                      Int32 VAR_5 )
{
   Int32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
   Int32 VAR_12, VAR_13, VAR_14;
   UInt32 VAR_15, VAR_16, VAR_17;
   Int32 VAR_18[VAR_1];
   Int32 VAR_19[VAR_1];

   VAR_16 = 0;

   VAR_12 = 0;
   FUNC_5 ( VAR_4, VAR_5 );

   while (VAR_12 > 0) {

      FUNC_1 ( VAR_12 < VAR_1 - 1, 1004 );

      FUNC_4 ( VAR_13, VAR_14 );
      if (VAR_14 - VAR_13 < VAR_0) {
         FUNC_2 ( VAR_2, VAR_3, VAR_13, VAR_14 );
         continue;
      }
      VAR_16 = ((VAR_16 * 7621) + 1) % 32768;
      VAR_17 = VAR_16 % 3;
      if (VAR_17 == 0) VAR_15 = VAR_3[VAR_2[VAR_13]]; else
      if (VAR_17 == 1) VAR_15 = VAR_3[VAR_2[(VAR_13+VAR_14)>>1]]; else
                   VAR_15 = VAR_3[VAR_2[VAR_14]];

      VAR_6 = VAR_8 = VAR_13;
      VAR_7 = VAR_9 = VAR_14;

      while (1) {
         while (1) {
            if (VAR_6 > VAR_7) break;
            VAR_10 = (Int32)VAR_3[VAR_2[VAR_6]] - (Int32)VAR_15;
            if (VAR_10 == 0) {
               FUNC_6(VAR_2[VAR_6], VAR_2[VAR_8]);
               VAR_8++; VAR_6++;
               continue;
            };
            if (VAR_10 > 0) break;
            VAR_6++;
         }
         while (1) {
            if (VAR_6 > VAR_7) break;
            VAR_10 = (Int32)VAR_3[VAR_2[VAR_7]] - (Int32)VAR_15;
            if (VAR_10 == 0) {
               FUNC_6(VAR_2[VAR_7], VAR_2[VAR_9]);
               VAR_9--; VAR_7--;
               continue;
            };
            if (VAR_10 < 0) break;
            VAR_7--;
         }
         if (VAR_6 > VAR_7) break;
         FUNC_6(VAR_2[VAR_6], VAR_2[VAR_7]); VAR_6++; VAR_7--;
      }

      FUNC_0 ( VAR_7 == VAR_6-1, "fallbackQSort3(2)" );

      if (VAR_9 < VAR_8) continue;

      VAR_10 = FUNC_3(VAR_8-VAR_13, VAR_6-VAR_8); FUNC_7(VAR_13, VAR_6-VAR_10, VAR_10);
      VAR_11 = FUNC_3(VAR_14-VAR_9, VAR_9-VAR_7); FUNC_7(VAR_6, VAR_14-VAR_11+1, VAR_11);

      VAR_10 = VAR_13 + VAR_6 - VAR_8 - 1;
      VAR_11 = VAR_14 - (VAR_9 - VAR_7) + 1;

      if (VAR_10 - VAR_13 > VAR_14 - VAR_11) {
         FUNC_5 ( VAR_13, VAR_10 );
         FUNC_5 ( VAR_11, VAR_14 );
      } else {
         FUNC_5 ( VAR_11, VAR_14 );
         FUNC_5 ( VAR_13, VAR_10 );
      }
   }
}
