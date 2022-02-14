
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_long ;
typedef int u_char ;
struct MPPC_comp_state {int* hist; int histptr; int* hash; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int,int,int*,int*) ;
 int FUNC_5 (int*,int,int,int*,int*) ;
 int FUNC_6 (int*,int,int,int*,int*) ;

int FUNC_7(u_char **VAR_5, u_char **VAR_6, u_long *VAR_7, u_long *VAR_8, char *VAR_9, int VAR_10, int VAR_11)
{
    struct MPPC_comp_state *VAR_12 = (struct MPPC_comp_state*)VAR_9;
    uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    uint8_t *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    int VAR_25 = VAR_1;
    if (*VAR_8 < (*VAR_7 * 9 / 8 + 2)) {
 VAR_25 &= ~VAR_1;
 return (VAR_25);
    }


    if (*VAR_7 > VAR_4) {
 VAR_25 &= ~VAR_1;
 return (VAR_25);
    }

    VAR_19 = VAR_12->hist + VAR_4;

    if (VAR_12->histptr + *VAR_7 >= 2*VAR_4) {
 VAR_25 |= VAR_2;
 VAR_12->histptr = VAR_4;
 FUNC_3(VAR_12->hist, VAR_19, VAR_4);
    }

    VAR_20 = VAR_12->hist + VAR_12->histptr;
    FUNC_3(VAR_20, *VAR_5, *VAR_7);
    VAR_12->histptr += *VAR_7;


    VAR_23 = VAR_20 + *VAR_7;
    **VAR_6 = VAR_13 = VAR_17 = 0;
    VAR_18 = 8;
    while (VAR_17 < *VAR_7 - 2) {
 VAR_24 = VAR_22 = VAR_20 + VAR_17;


 VAR_16 = FUNC_0(VAR_24);
 VAR_21 = VAR_19 + VAR_12->hash[VAR_16];
 VAR_12->hash[VAR_16] = (uint16_t) (VAR_24 - VAR_19);
 if (VAR_21 > VAR_24)
     VAR_21 -= VAR_4;
 VAR_14 = VAR_24 - VAR_21;


 if (VAR_14 > VAR_4 - 1 || VAR_14 < 1 || *VAR_21++ != *VAR_24++ ||
     *VAR_21++ != *VAR_24++ || *VAR_21++ != *VAR_24++) {

     if ((*VAR_5)[VAR_17] < 0x80) {
  FUNC_6(*VAR_6, (uint32_t) (*VAR_5)[VAR_17], 8, &VAR_13, &VAR_18);
     } else {
  FUNC_4(*VAR_6, (uint32_t) (0x100|((*VAR_5)[VAR_17]&0x7f)), 9,
      &VAR_13, &VAR_18);
     }
     ++VAR_17;
     continue;
 }




 while ((*((uint32_t*)VAR_21) == *((uint32_t*)VAR_24)) && (VAR_24 < (VAR_23 - 3))) {
     VAR_21+=4;
     VAR_24+=4;
 }

 while((*VAR_21++ == *VAR_24++) && (VAR_24 <= VAR_23));
 VAR_15 = VAR_24 - VAR_22 - 1;
 VAR_17 += VAR_15;



 if (VAR_14 < 64) {
     FUNC_4(*VAR_6, 0x3c0|VAR_14, 10, &VAR_13, &VAR_18);
 } else if (VAR_14 < 320) {
     FUNC_4(*VAR_6, 0xe00|(VAR_14-64), 12, &VAR_13, &VAR_18);
 } else if (VAR_14 < 8192) {
     FUNC_4(*VAR_6, 0xc000|(VAR_14-320), 16, &VAR_13, &VAR_18);
 } else {
     FUNC_1();
     VAR_25 &= ~VAR_1;
     return (VAR_25);
 }


 if (VAR_15 < 4) {
     FUNC_6(*VAR_6, 0, 1, &VAR_13, &VAR_18);
 } else if (VAR_15 < 8) {
     FUNC_6(*VAR_6, 0x08|(VAR_15&0x03), 4, &VAR_13, &VAR_18);
 } else if (VAR_15 < 16) {
     FUNC_6(*VAR_6, 0x30|(VAR_15&0x07), 6, &VAR_13, &VAR_18);
 } else if (VAR_15 < 32) {
     FUNC_6(*VAR_6, 0xe0|(VAR_15&0x0f), 8, &VAR_13, &VAR_18);
 } else if (VAR_15 < 64) {
     FUNC_4(*VAR_6, 0x3c0|(VAR_15&0x1f), 10, &VAR_13, &VAR_18);
 } else if (VAR_15 < 128) {
     FUNC_4(*VAR_6, 0xf80|(VAR_15&0x3f), 12, &VAR_13, &VAR_18);
 } else if (VAR_15 < 256) {
     FUNC_4(*VAR_6, 0x3f00|(VAR_15&0x7f), 14, &VAR_13, &VAR_18);
 } else if (VAR_15 < 512) {
     FUNC_4(*VAR_6, 0xfe00|(VAR_15&0xff), 16, &VAR_13, &VAR_18);
 } else if (VAR_15 < 1024) {
     FUNC_5(*VAR_6, 0x3fc00|(VAR_15&0x1ff), 18, &VAR_13, &VAR_18);
 } else if (VAR_15 < 2048) {
     FUNC_5(*VAR_6, 0xff800|(VAR_15&0x3ff), 20, &VAR_13, &VAR_18);
 } else if (VAR_15 < 4096) {
     FUNC_5(*VAR_6, 0x3ff000|(VAR_15&0x7ff), 22, &VAR_13, &VAR_18);
 } else if (VAR_15 < 8192) {
     FUNC_5(*VAR_6, 0xffe000|(VAR_15&0xfff), 24, &VAR_13, &VAR_18);
 } else {
     VAR_25 &= ~VAR_1;
     return (VAR_25);
 }
    }


    while(*VAR_7 - VAR_17 > 0) {
 if ((*VAR_5)[VAR_17] < 0x80) {
     FUNC_6(*VAR_6, (uint32_t) (*VAR_5)[VAR_17++], 8, &VAR_13, &VAR_18);
 } else {
     FUNC_4(*VAR_6, (uint32_t) (0x100|((*VAR_5)[VAR_17++]&0x7f)), 9, &VAR_13,
         &VAR_18);
 }
    }


    if ((VAR_18 != 0) && (VAR_18 != 8)) {
 FUNC_6(*VAR_6, 0, VAR_18, &VAR_13, &VAR_18);
    }


    if ((*VAR_7 < VAR_13) || ((VAR_10 & VAR_3) == 0)) {
 if (*VAR_7 < VAR_13)
     VAR_25 |= VAR_0;
 FUNC_2(VAR_9, sizeof(struct MPPC_comp_state));
 VAR_12->histptr = VAR_4;
    }

    *VAR_5 += *VAR_7;
    *VAR_7 = 0;
    *VAR_6 += VAR_13;
    *VAR_8 -= VAR_13;

    return (VAR_25);
}
