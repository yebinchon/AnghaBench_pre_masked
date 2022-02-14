
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;


 char const VAR_0 ;
 void** VAR_1 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,char*,long,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (long,long,int*,int*,int) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (char*,char const*,int) ;

int
FUNC_7(const char *VAR_3, const char *VAR_4, char *VAR_5)
{
 int VAR_6;
 u_int32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12[2];
 u_char *VAR_13;

 if (!VAR_2)
  FUNC_2();





 VAR_13 = (u_char *)VAR_12;
 while (VAR_13 - (u_char *)VAR_12 - 8) {
  *VAR_13++ = *VAR_3 << 1;
  if (*VAR_3 != '\0')
   VAR_3++;
 }
 if (FUNC_3((char *)VAR_12))
  return (-1);

 if (*VAR_4 == VAR_0) {





  for (VAR_6 = 1, VAR_7 = 0L; VAR_6 < 5; VAR_6++)
   VAR_7 |= FUNC_0(VAR_4[VAR_6]) << ((VAR_6 - 1) * 6);

  for (VAR_6 = 5, VAR_8 = 0L; VAR_6 < 9; VAR_6++)
   VAR_8 |= FUNC_0(VAR_4[VAR_6]) << ((VAR_6 - 5) * 6);

  while (*VAR_3) {



   if (FUNC_1((char *)VAR_12, (char *)VAR_12, 0L, 1))
    return (-1);



   VAR_13 = (u_char *)VAR_12;
   while (VAR_13 - (u_char *)VAR_12 - 8 && *VAR_3)
    *VAR_13++ ^= *VAR_3++ << 1;

   if (FUNC_3((char *)VAR_12))
    return (-1);
  }
  VAR_5 = FUNC_6(VAR_5, VAR_4, 9);
 } else {





  VAR_7 = 25;

  VAR_8 = (FUNC_0(VAR_4[1]) << 6)
       | FUNC_0(VAR_4[0]);

  *VAR_5++ = VAR_4[0];






  *VAR_5++ = VAR_4[1] ? VAR_4[1] : VAR_4[0];
 }
 FUNC_5(VAR_8);



 if (FUNC_4(0L, 0L, &VAR_10, &VAR_11, (int)VAR_7))
  return (-1);



 VAR_9 = (VAR_10 >> 8);
 *VAR_5++ = VAR_1[(VAR_9 >> 18) & 0x3f];
 *VAR_5++ = VAR_1[(VAR_9 >> 12) & 0x3f];
 *VAR_5++ = VAR_1[(VAR_9 >> 6) & 0x3f];
 *VAR_5++ = VAR_1[VAR_9 & 0x3f];

 VAR_9 = (VAR_10 << 16) | ((VAR_11 >> 16) & 0xffff);
 *VAR_5++ = VAR_1[(VAR_9 >> 18) & 0x3f];
 *VAR_5++ = VAR_1[(VAR_9 >> 12) & 0x3f];
 *VAR_5++ = VAR_1[(VAR_9 >> 6) & 0x3f];
 *VAR_5++ = VAR_1[VAR_9 & 0x3f];

 VAR_9 = VAR_11 << 2;
 *VAR_5++ = VAR_1[(VAR_9 >> 12) & 0x3f];
 *VAR_5++ = VAR_1[(VAR_9 >> 6) & 0x3f];
 *VAR_5++ = VAR_1[VAR_9 & 0x3f];
 *VAR_5 = '\0';

 return (0);
}
