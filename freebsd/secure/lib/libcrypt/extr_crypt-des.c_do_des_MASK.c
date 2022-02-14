
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int** VAR_7 ;
 size_t** VAR_8 ;
 int** VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_0( u_int32_t VAR_11, u_int32_t VAR_12, u_int32_t *VAR_13, u_int32_t *VAR_14, int VAR_15)
{



 u_int32_t VAR_16, VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 u_int32_t VAR_22, VAR_23, VAR_24;
 int VAR_25;

 if (VAR_15 == 0) {
  return(1);
 } else if (VAR_15 > 0) {



  VAR_20 = VAR_2;
  VAR_21 = VAR_3;
 } else {



  VAR_15 = -VAR_15;
  VAR_20 = VAR_0;
  VAR_21 = VAR_1;
 }




 VAR_16 = VAR_6[0][VAR_11 >> 24]
   | VAR_6[1][(VAR_11 >> 16) & 0xff]
   | VAR_6[2][(VAR_11 >> 8) & 0xff]
   | VAR_6[3][VAR_11 & 0xff]
   | VAR_6[4][VAR_12 >> 24]
   | VAR_6[5][(VAR_12 >> 16) & 0xff]
   | VAR_6[6][(VAR_12 >> 8) & 0xff]
   | VAR_6[7][VAR_12 & 0xff];
 VAR_17 = VAR_7[0][VAR_11 >> 24]
   | VAR_7[1][(VAR_11 >> 16) & 0xff]
   | VAR_7[2][(VAR_11 >> 8) & 0xff]
   | VAR_7[3][VAR_11 & 0xff]
   | VAR_7[4][VAR_12 >> 24]
   | VAR_7[5][(VAR_12 >> 16) & 0xff]
   | VAR_7[6][(VAR_12 >> 8) & 0xff]
   | VAR_7[7][VAR_12 & 0xff];

 while (VAR_15--) {



  VAR_18 = VAR_20;
  VAR_19 = VAR_21;
  VAR_25 = 16;
  while (VAR_25--) {



   VAR_23 = ((VAR_17 & 0x00000001) << 23)
    | ((VAR_17 & 0xf8000000) >> 9)
    | ((VAR_17 & 0x1f800000) >> 11)
    | ((VAR_17 & 0x01f80000) >> 13)
    | ((VAR_17 & 0x001f8000) >> 15);

   VAR_24 = ((VAR_17 & 0x0001f800) << 7)
    | ((VAR_17 & 0x00001f80) << 5)
    | ((VAR_17 & 0x000001f8) << 3)
    | ((VAR_17 & 0x0000001f) << 1)
    | ((VAR_17 & 0x80000000) >> 31);




   VAR_22 = (VAR_23 ^ VAR_24) & VAR_10;
   VAR_23 ^= VAR_22 ^ *VAR_18++;
   VAR_24 ^= VAR_22 ^ *VAR_19++;




   VAR_22 = VAR_9[0][VAR_8[0][VAR_23 >> 12]]
     | VAR_9[1][VAR_8[1][VAR_23 & 0xfff]]
     | VAR_9[2][VAR_8[2][VAR_24 >> 12]]
     | VAR_9[3][VAR_8[3][VAR_24 & 0xfff]];



   VAR_22 ^= VAR_16;
   VAR_16 = VAR_17;
   VAR_17 = VAR_22;
  }
  VAR_17 = VAR_16;
  VAR_16 = VAR_22;
 }



 *VAR_13 = VAR_4[0][VAR_16 >> 24]
  | VAR_4[1][(VAR_16 >> 16) & 0xff]
  | VAR_4[2][(VAR_16 >> 8) & 0xff]
  | VAR_4[3][VAR_16 & 0xff]
  | VAR_4[4][VAR_17 >> 24]
  | VAR_4[5][(VAR_17 >> 16) & 0xff]
  | VAR_4[6][(VAR_17 >> 8) & 0xff]
  | VAR_4[7][VAR_17 & 0xff];
 *VAR_14 = VAR_5[0][VAR_16 >> 24]
  | VAR_5[1][(VAR_16 >> 16) & 0xff]
  | VAR_5[2][(VAR_16 >> 8) & 0xff]
  | VAR_5[3][VAR_16 & 0xff]
  | VAR_5[4][VAR_17 >> 24]
  | VAR_5[5][(VAR_17 >> 16) & 0xff]
  | VAR_5[6][(VAR_17 >> 8) & 0xff]
  | VAR_5[7][VAR_17 & 0xff];
 return(0);
}
