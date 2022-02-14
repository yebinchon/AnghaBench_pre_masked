
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_int32_t ;
typedef void* u_char ;


 size_t* VAR_0 ;
 long* VAR_1 ;
 long* VAR_2 ;
 long* VAR_3 ;
 int* VAR_4 ;
 long** VAR_5 ;
 long** VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 size_t* VAR_9 ;
 long** VAR_10 ;
 long** VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 long** VAR_15 ;
 long** VAR_16 ;
 int* VAR_17 ;
 long** VAR_18 ;
 long** VAR_19 ;
 void*** VAR_20 ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 int* VAR_24 ;
 long** VAR_25 ;
 long VAR_26 ;
 int** VAR_27 ;
 int** VAR_28 ;
 size_t* VAR_29 ;

__attribute__((used)) static void
FUNC_0(void)
{
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 u_int32_t *VAR_36, *VAR_37, *VAR_38, *VAR_39, *VAR_40;

 VAR_21 = VAR_22 = 0L;
 VAR_26 = 0L;
 VAR_23 = 0L;
 VAR_1 = (VAR_2 = VAR_3 + 4) + 4;




 for (VAR_30 = 0; VAR_30 < 8; VAR_30++)
  for (VAR_31 = 0; VAR_31 < 64; VAR_31++) {
   VAR_32 = (VAR_31 & 0x20) | ((VAR_31 & 1) << 4) | ((VAR_31 >> 1) & 0xf);
   VAR_28[VAR_30][VAR_31] = VAR_27[VAR_30][VAR_32];
  }





 for (VAR_32 = 0; VAR_32 < 4; VAR_32++)
  for (VAR_30 = 0; VAR_30 < 64; VAR_30++)
   for (VAR_31 = 0; VAR_31 < 64; VAR_31++)
    VAR_20[VAR_32][(VAR_30 << 6) | VAR_31] =
     (u_char)((VAR_28[(VAR_32 << 1)][VAR_30] << 4) |
     VAR_28[(VAR_32 << 1) + 1][VAR_31]);





 for (VAR_30 = 0; VAR_30 < 64; VAR_30++) {
  VAR_12[VAR_9[VAR_30] = VAR_0[VAR_30] - 1] = (u_char)VAR_30;
  VAR_14[VAR_30] = 255;
 }





 for (VAR_30 = 0; VAR_30 < 56; VAR_30++) {
  VAR_14[VAR_17[VAR_30] - 1] = (u_char)VAR_30;
  VAR_13[VAR_30] = 255;
 }




 for (VAR_30 = 0; VAR_30 < 48; VAR_30++) {
  VAR_13[VAR_7[VAR_30] - 1] = (u_char)VAR_30;
 }





 for (VAR_33 = 0; VAR_33 < 8; VAR_33++) {
  for (VAR_30 = 0; VAR_30 < 256; VAR_30++) {
   *(VAR_37 = &VAR_15[VAR_33][VAR_30]) = 0L;
   *(VAR_38 = &VAR_16[VAR_33][VAR_30]) = 0L;
   *(VAR_39 = &VAR_10[VAR_33][VAR_30]) = 0L;
   *(VAR_40 = &VAR_11[VAR_33][VAR_30]) = 0L;
   for (VAR_31 = 0; VAR_31 < 8; VAR_31++) {
    VAR_34 = 8 * VAR_33 + VAR_31;
    if (VAR_30 & VAR_4[VAR_31]) {
     if ((VAR_35 = VAR_12[VAR_34]) < 32)
      *VAR_37 |= VAR_3[VAR_35];
     else
      *VAR_38 |= VAR_3[VAR_35-32];
     if ((VAR_35 = VAR_9[VAR_34]) < 32)
      *VAR_39 |= VAR_3[VAR_35];
     else
      *VAR_40 |= VAR_3[VAR_35 - 32];
    }
   }
  }
  for (VAR_30 = 0; VAR_30 < 128; VAR_30++) {
   *(VAR_37 = &VAR_18[VAR_33][VAR_30]) = 0L;
   *(VAR_38 = &VAR_19[VAR_33][VAR_30]) = 0L;
   for (VAR_31 = 0; VAR_31 < 7; VAR_31++) {
    VAR_34 = 8 * VAR_33 + VAR_31;
    if (VAR_30 & VAR_4[VAR_31 + 1]) {
     if ((VAR_35 = VAR_14[VAR_34]) == 255)
      continue;
     if (VAR_35 < 28)
      *VAR_37 |= VAR_2[VAR_35];
     else
      *VAR_38 |= VAR_2[VAR_35 - 28];
    }
   }
   *(VAR_37 = &VAR_5[VAR_33][VAR_30]) = 0L;
   *(VAR_38 = &VAR_6[VAR_33][VAR_30]) = 0L;
   for (VAR_31 = 0; VAR_31 < 7; VAR_31++) {
    VAR_34 = 7 * VAR_33 + VAR_31;
    if (VAR_30 & VAR_4[VAR_31 + 1]) {
     if ((VAR_35=VAR_13[VAR_34]) == 255)
      continue;
     if (VAR_35 < 24)
      *VAR_37 |= VAR_1[VAR_35];
     else
      *VAR_38 |= VAR_1[VAR_35 - 24];
    }
   }
  }
 }





 for (VAR_30 = 0; VAR_30 < 32; VAR_30++)
  VAR_29[VAR_24[VAR_30] - 1] = (u_char)VAR_30;

 for (VAR_32 = 0; VAR_32 < 4; VAR_32++)
  for (VAR_30 = 0; VAR_30 < 256; VAR_30++) {
   *(VAR_36 = &VAR_25[VAR_32][VAR_30]) = 0L;
   for (VAR_31 = 0; VAR_31 < 8; VAR_31++) {
    if (VAR_30 & VAR_4[VAR_31])
     *VAR_36 |= VAR_3[VAR_29[8 * VAR_32 + VAR_31]];
   }
  }

 VAR_8 = 1;
}
