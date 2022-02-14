
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int in ;
typedef unsigned char bom ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

int
FUNC_0(const uint16_t *VAR_4, size_t VAR_5, unsigned int *VAR_6,
        void *VAR_7, size_t *VAR_8)
{
    unsigned char *VAR_9 = VAR_7;
    size_t VAR_10 = *VAR_8;


    if (VAR_10 & 1)
 return VAR_0;


    if (VAR_5 == 0) {
 *VAR_8 = 0;
 return 0;
    }


    if ((*VAR_6) & VAR_2) {
 uint16_t VAR_11 = 0xfffe;

 if (VAR_10 < 2)
     return VAR_1;

 if ((*VAR_6) & VAR_3) {
     VAR_9[0] = (VAR_11 ) & 0xff;
     VAR_9[1] = (VAR_11 >> 8) & 0xff;
 } else {
     VAR_9[1] = (VAR_11 ) & 0xff;
     VAR_9[0] = (VAR_11 >> 8) & 0xff;
 }
 VAR_10 -= 2;
    }

    while (VAR_5) {

 if (VAR_10 < 2)
     return VAR_1;
 if ((*VAR_6) & VAR_3) {
     VAR_9[0] = (VAR_4[0] ) & 0xff;
     VAR_9[1] = (VAR_4[0] >> 8) & 0xff;
 } else {
     VAR_9[1] = (VAR_4[0] ) & 0xff;
     VAR_9[0] = (VAR_4[0] >> 8) & 0xff;
 }
 VAR_10 -= 2;
 VAR_5--;
 VAR_9 += 2;
 VAR_4++;
    }
    *VAR_8 -= VAR_10;
    return 0;
}
