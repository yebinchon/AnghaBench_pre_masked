
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

void FUNC_0 ()
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 for (VAR_5 = 1; VAR_5 <= VAR_4; ++VAR_5) {







  VAR_7 = 0;
  VAR_8 = VAR_1[VAR_5];

  for (VAR_9 = 0; VAR_9 < VAR_0[VAR_5]; ++VAR_9) {
   VAR_6 = VAR_2[VAR_8 + VAR_9];
   VAR_10 = VAR_3[VAR_6];

   if (VAR_10 > 0) {
    VAR_2[VAR_8 + VAR_7] = VAR_10;
    ++VAR_7;
   }
  }

  VAR_0[VAR_5] = VAR_7;
 }
}
