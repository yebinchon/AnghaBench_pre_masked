
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UChar ;
typedef scalar_t__ Int32 ;



void FUNC_0 ( Int32 *VAR_0,
                         UChar *VAR_1,
                         Int32 VAR_2,
                         Int32 VAR_3,
                         Int32 VAR_4 )
{
   Int32 VAR_5, VAR_6, VAR_7;

   VAR_6 = 0;
   for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
         if (VAR_1[VAR_7] == VAR_5) { VAR_0[VAR_7] = VAR_6; VAR_6++; };
      VAR_6 <<= 1;
   }
}
