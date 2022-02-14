
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

int
FUNC_0(const void *VAR_6, size_t VAR_7, unsigned int *VAR_8,
       uint16_t *VAR_9, size_t *VAR_10)
{
    const unsigned char *VAR_11 = VAR_6;
    int VAR_12 = ((*VAR_8) & VAR_5);
    size_t VAR_13 = *VAR_10;


    if (VAR_7 == 0) {
 *VAR_10 = 0;
 return 0;
    }


    if (VAR_7 & 1)
 return VAR_0;







    if ((*VAR_8) & VAR_4) {
 uint16_t VAR_14 = (VAR_11[0] << 8) + VAR_11[1];
 if (VAR_14 == 0xfffe || VAR_14 == 0xfeff) {
     VAR_12 = (VAR_14 == 0xfffe);
     VAR_11 += 2;
     VAR_7 -= 2;
 } else if (((*VAR_8) & (VAR_5|VAR_3)) != 0) {

 } else
     return VAR_1;
 *VAR_8 = ((*VAR_8) & ~(VAR_4|VAR_5|VAR_3));
 *VAR_8 |= VAR_12 ? VAR_5 : VAR_3;
    }

    while (VAR_7) {
 if (VAR_13 < 1)
     return VAR_2;
 if (VAR_12)
     *VAR_9 = (VAR_11[1] << 8) + VAR_11[0];
 else
     *VAR_9 = (VAR_11[0] << 8) + VAR_11[1];
 VAR_9++; VAR_11 += 2; VAR_7 -= 2; VAR_13--;
    }
    *VAR_10 -= VAR_13;
    return 0;
}
