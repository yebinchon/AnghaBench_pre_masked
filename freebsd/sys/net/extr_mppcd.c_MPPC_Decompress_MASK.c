
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
typedef int u_char ;
struct MPPC_decomp_state {int* hist; int histptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int*,int*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;

int FUNC_4(u_char **VAR_4, u_char **VAR_5, u_long *VAR_6, u_long *VAR_7, char *VAR_8, int VAR_9)
{
    struct MPPC_decomp_state *VAR_10 = (struct MPPC_decomp_state*)VAR_8;
    uint32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    uint8_t *VAR_19, *VAR_20;
    u_char *VAR_21 = *VAR_4;
    int VAR_22 = VAR_1;

    if ((VAR_9 & VAR_2) != 0) {
 FUNC_3(VAR_10->hist, VAR_10->hist + VAR_3, VAR_3);
 VAR_10->histptr = VAR_3;
    }

    VAR_19 = VAR_10->hist + VAR_10->histptr;
    VAR_11 = VAR_13 = VAR_17 = 0;
    VAR_18 = 8;
    VAR_14 = *VAR_6 * 8;
    while (VAR_14 >= 8) {
 VAR_15 = FUNC_1(VAR_21, VAR_17++, VAR_18);
 if (VAR_15 < 0x80) {
     if (VAR_10->histptr < 2*VAR_3) {

  (VAR_10->hist)[(VAR_10->histptr)++] = (uint8_t) VAR_15;
     } else {

  VAR_22 &= ~VAR_1;
  return VAR_22;
     }
     VAR_11++;
     VAR_14 -= 8;
     continue;
 }

 VAR_16 = VAR_15 & 0xc0;
 if (VAR_16 == 0x80) {
     if (VAR_10->histptr < 2*VAR_3) {

  (VAR_10->hist)[(VAR_10->histptr)++] =
      (uint8_t) (0x80|((VAR_15&0x3f)<<1)|FUNC_0(VAR_21, 1 , &VAR_17 ,&VAR_18));
     } else {

  VAR_22 &= ~VAR_1;
  return (VAR_22);
     }
     VAR_11++;
     VAR_14 -= 9;
     continue;
 }



 VAR_16 = VAR_15 & 0xf0;
 if (VAR_16 == 0xf0) {
     VAR_12 = (((VAR_15&0x0f)<<2)|FUNC_0(VAR_21, 2 , &VAR_17 ,&VAR_18));
     VAR_14 -= 10;
 } else {
     if (VAR_16 == 0xe0) {
  VAR_12 = ((((VAR_15&0x0f)<<4)|FUNC_0(VAR_21, 4 , &VAR_17 ,&VAR_18))+64);
  VAR_14 -= 12;
     } else {
  if ((VAR_16&0xe0) == 0xc0) {
      VAR_12 = ((((VAR_15&0x1f)<<8)|FUNC_1(VAR_21, VAR_17++, VAR_18))+320);
      VAR_14 -= 16;
      if (VAR_12 > VAR_3 - 1) {
   VAR_22 &= ~VAR_1;
   return (VAR_22);
      }
  } else {
      VAR_22 &= ~VAR_1;
      return (VAR_22);
  }
     }
 }

 VAR_15 = FUNC_1(VAR_21, VAR_17, VAR_18);
 if ((VAR_15 & 0x80) == 0x00) {
     VAR_13 = 3;
     VAR_14--;
     FUNC_0(VAR_21, 1 , &VAR_17 ,&VAR_18);
 } else if ((VAR_15 & 0xc0) == 0x80) {
     VAR_13 = 0x04 | ((VAR_15>>4) & 0x03);
     VAR_14 -= 4;
     FUNC_0(VAR_21, 4 , &VAR_17 ,&VAR_18);
 } else if ((VAR_15 & 0xe0) == 0xc0) {
     VAR_13 = 0x08 | ((VAR_15>>2) & 0x07);
     VAR_14 -= 6;
     FUNC_0(VAR_21, 6 , &VAR_17 ,&VAR_18);
 } else if ((VAR_15 & 0xf0) == 0xe0) {
     VAR_13 = 0x10 | (VAR_15 & 0x0f);
     VAR_14 -= 8;
     VAR_17++;
 } else {
     VAR_14 -= 8;
     VAR_15 = (VAR_15 << 8) | FUNC_1(VAR_21, ++VAR_17, VAR_18);
     if ((VAR_15 & 0xf800) == 0xf000) {
  VAR_13 = 0x0020 | ((VAR_15 >> 6) & 0x001f);
  VAR_14 -= 2;
  FUNC_0(VAR_21, 2 , &VAR_17 ,&VAR_18);
     } else if ((VAR_15 & 0xfc00) == 0xf800) {
  VAR_13 = 0x0040 | ((VAR_15 >> 4) & 0x003f);
  VAR_14 -= 4;
  FUNC_0(VAR_21, 4 , &VAR_17 ,&VAR_18);
     } else if ((VAR_15 & 0xfe00) == 0xfc00) {
  VAR_13 = 0x0080 | ((VAR_15 >> 2) & 0x007f);
  VAR_14 -= 6;
  FUNC_0(VAR_21, 6 , &VAR_17 ,&VAR_18);
     } else if ((VAR_15 & 0xff00) == 0xfe00) {
  VAR_13 = 0x0100 | (VAR_15 & 0x00ff);
  VAR_14 -= 8;
  VAR_17++;
     } else {
  VAR_14 -= 8;
  VAR_15 = (VAR_15 << 8) | FUNC_1(VAR_21, ++VAR_17, VAR_18);
  if ((VAR_15 & 0xff8000) == 0xff0000) {
      VAR_13 = 0x000200 | ((VAR_15 >> 6) & 0x0001ff);
      VAR_14 -= 2;
      FUNC_0(VAR_21, 2 , &VAR_17 ,&VAR_18);
  } else if ((VAR_15 & 0xffc000) == 0xff8000) {
      VAR_13 = 0x000400 | ((VAR_15 >> 4) & 0x0003ff);
      VAR_14 -= 4;
      FUNC_0(VAR_21, 4 , &VAR_17 ,&VAR_18);
  } else if ((VAR_15 & 0xffe000) == 0xffc000) {
      VAR_13 = 0x000800 | ((VAR_15 >> 2) & 0x0007ff);
      VAR_14 -= 6;
      FUNC_0(VAR_21, 6 , &VAR_17 ,&VAR_18);
  } else if ((VAR_15 & 0xfff000) == 0xffe000) {
      VAR_13 = 0x001000 | (VAR_15 & 0x000fff);
      VAR_14 -= 8;
      VAR_17++;
  } else {
      VAR_22 &= ~VAR_1;
      return (VAR_22);
  }
     }
 }

 VAR_20 = VAR_10->hist + VAR_10->histptr;
 VAR_10->histptr += VAR_13;
 VAR_11 += VAR_13;
 if (VAR_10->histptr < 2*VAR_3) {
     FUNC_2(VAR_20, VAR_20 - VAR_12, VAR_13);
 } else {

     VAR_22 &= ~VAR_1;
     return (VAR_22);
 }
    }


    VAR_13 = VAR_11;
    if ((VAR_19[0] & 0x01) != 0) {
 (*VAR_5)[0] = 0;
 (*VAR_5)++;
 VAR_13++;
    }

    if (VAR_13 <= *VAR_7) {

 FUNC_3(*VAR_5, VAR_19, VAR_11);
    } else {

 VAR_22 |= VAR_0;
    }

    *VAR_4 += *VAR_6;
    *VAR_6 = 0;
    *VAR_5 += VAR_13;
    *VAR_7 -= VAR_13;

    return (VAR_22);
}
