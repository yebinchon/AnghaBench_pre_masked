
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static int
FUNC_0(void *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7, int VAR_8)
{
 unsigned char *VAR_9 = VAR_4;
 unsigned char *VAR_10 = VAR_5;
 unsigned char *VAR_11 = (unsigned char *)VAR_5 + VAR_7;
 unsigned char *VAR_12, VAR_13 = 0;
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
   if ((VAR_12 = VAR_10 - VAR_16) < (unsigned char *)VAR_5)
    return (-1);
   while (--VAR_15 >= 0 && VAR_10 < VAR_11)
    *VAR_10++ = *VAR_12++;
  } else {
   *VAR_10++ = *VAR_9++;
  }
 }
 return (0);
}
