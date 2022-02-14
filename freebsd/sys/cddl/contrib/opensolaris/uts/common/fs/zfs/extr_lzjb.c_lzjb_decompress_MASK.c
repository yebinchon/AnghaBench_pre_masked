
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(void *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7, int VAR_8)
{
 uchar_t *VAR_9 = VAR_4;
 uchar_t *VAR_10 = VAR_5;
 uchar_t *VAR_11 = (uchar_t *)VAR_5 + VAR_7;
 uchar_t *VAR_12;
 uchar_t VAR_13 = 0;
 int VAR_14 = 1 << (VAR_2 - 1);

 while (VAR_10 < VAR_11) {
  if ((VAR_14 <<= 1) == (1 << VAR_2)) {
   VAR_14 = 1;
   VAR_13 = *VAR_9++;
  }
  if (VAR_13 & VAR_14) {
   int VAR_15 = (VAR_9[0] >> (VAR_2 - VAR_0)) + VAR_1;
   int VAR_16 = ((VAR_9[0] << VAR_2) | VAR_9[1]) & VAR_3;
   VAR_9 += 2;
   if ((VAR_12 = VAR_10 - VAR_16) < (uchar_t *)VAR_5)
    return (-1);
   if (VAR_15 > (VAR_11 - VAR_10))
    VAR_15 = VAR_11 - VAR_10;
   while (--VAR_15 >= 0)
    *VAR_10++ = *VAR_12++;
  } else {
   *VAR_10++ = *VAR_9++;
  }
 }
 return (0);
}
