
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UInt16 ;
typedef int UChar ;
typedef int Int32 ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int *,int *,int,int*) ;

__attribute__((used)) static
void FUNC_1 ( UInt32* VAR_2,
                      UChar* VAR_3,
                      UInt16* VAR_4,
                      Int32 VAR_5,
                      Int32 VAR_6,
                      Int32 VAR_7,
                      Int32 VAR_8,
                      Int32* VAR_9 )
{
   Int32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
   UInt32 VAR_15;

   VAR_13 = VAR_7 - VAR_6 + 1;
   if (VAR_13 < 2) return;

   VAR_14 = 0;
   while (VAR_1[VAR_14] < VAR_13) VAR_14++;
   VAR_14--;

   for (; VAR_14 >= 0; VAR_14--) {
      VAR_12 = VAR_1[VAR_14];

      VAR_10 = VAR_6 + VAR_12;
      while (VAR_0) {


         if (VAR_10 > VAR_7) break;
         VAR_15 = VAR_2[VAR_10];
         VAR_11 = VAR_10;
         while ( FUNC_0 (
                    VAR_2[VAR_11-VAR_12]+VAR_8, VAR_15+VAR_8, VAR_3, VAR_4, VAR_5, VAR_9
                 ) ) {
            VAR_2[VAR_11] = VAR_2[VAR_11-VAR_12];
            VAR_11 = VAR_11 - VAR_12;
            if (VAR_11 <= (VAR_6 + VAR_12 - 1)) break;
         }
         VAR_2[VAR_11] = VAR_15;
         VAR_10++;


         if (VAR_10 > VAR_7) break;
         VAR_15 = VAR_2[VAR_10];
         VAR_11 = VAR_10;
         while ( FUNC_0 (
                    VAR_2[VAR_11-VAR_12]+VAR_8, VAR_15+VAR_8, VAR_3, VAR_4, VAR_5, VAR_9
                 ) ) {
            VAR_2[VAR_11] = VAR_2[VAR_11-VAR_12];
            VAR_11 = VAR_11 - VAR_12;
            if (VAR_11 <= (VAR_6 + VAR_12 - 1)) break;
         }
         VAR_2[VAR_11] = VAR_15;
         VAR_10++;


         if (VAR_10 > VAR_7) break;
         VAR_15 = VAR_2[VAR_10];
         VAR_11 = VAR_10;
         while ( FUNC_0 (
                    VAR_2[VAR_11-VAR_12]+VAR_8, VAR_15+VAR_8, VAR_3, VAR_4, VAR_5, VAR_9
                 ) ) {
            VAR_2[VAR_11] = VAR_2[VAR_11-VAR_12];
            VAR_11 = VAR_11 - VAR_12;
            if (VAR_11 <= (VAR_6 + VAR_12 - 1)) break;
         }
         VAR_2[VAR_11] = VAR_15;
         VAR_10++;

         if (*VAR_9 < 0) return;
      }
   }
}
