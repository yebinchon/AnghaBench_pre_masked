
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32 ;
typedef int u_char ;
typedef int cbuf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int*) ;

char *
FUNC_4(
 u_int32 VAR_1,
 u_int32 VAR_2,
 int VAR_3,
 short VAR_4,
 int VAR_5
 )
{
 u_char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;
 u_char VAR_10[24];
 char *VAR_11, *VAR_12;




 FUNC_0(VAR_11);




 FUNC_3(VAR_10);







 VAR_6 = VAR_7 = VAR_8 = &VAR_10[10];
 for (VAR_9 = (int)(VAR_6 - VAR_10); VAR_9 > 0 && VAR_1 != 0; VAR_9--) {

  u_int32 VAR_13;

  VAR_13 = VAR_1;
  VAR_1 /= 10U;
  VAR_13 -= (VAR_1 << 3) + (VAR_1 << 1);
  *--VAR_6 = (u_char)VAR_13;
 }





 VAR_9 = VAR_4;
 if (VAR_9 < 0)
  VAR_9 = 0;
 if (VAR_5) {
  VAR_9 += 3;
  VAR_8 += 3;
 }
 if ((size_t)VAR_9 > sizeof(VAR_10) - (VAR_7 - VAR_10))
  VAR_9 = (int)(sizeof(VAR_10) - (VAR_7 - VAR_10));




 for ( ; VAR_9 > 0 && VAR_2 != 0; VAR_9--) {
  u_int32 VAR_14, VAR_15, VAR_16;







  VAR_14 = 0;
  FUNC_2(VAR_14, VAR_2);
  VAR_15 = VAR_14;
  VAR_16 = VAR_2;
  FUNC_2(VAR_14, VAR_2);
  FUNC_2(VAR_14, VAR_2);
  FUNC_1(VAR_14, VAR_2, VAR_15, VAR_16);
  *VAR_7++ = (u_char)VAR_14;
 }


 if (VAR_9 > 0) {

  VAR_7 += VAR_9;
 } else {

  u_char *VAR_17 = VAR_7;
  int VAR_18 = ((VAR_2 & 0x80000000) != 0);

  for (VAR_9 = (int)(VAR_17 - VAR_10); VAR_18 && VAR_9 > 0; VAR_9--) {
   *--VAR_17 += 1;
   if (*VAR_17 == 10)
    *VAR_17 = 0;
   else
    VAR_18 = VAR_0;
  }

  if (VAR_17 < VAR_6)
   VAR_6 = VAR_17;
 }
 while (VAR_6 < VAR_8 && *VAR_6 == 0)
  VAR_6++;
 if (VAR_6 >= VAR_8)
  VAR_6 = VAR_8 - 1;

 VAR_12 = VAR_11;
 if (VAR_3)
  *VAR_12++ = '-';
 while (VAR_6 < VAR_7) {
  if (VAR_6 == VAR_8)
   *VAR_12++ = '.';
  *VAR_12++ = (char)(*VAR_6++) + '0';
 }
 *VAR_12 = '\0';




 return VAR_11;
}
