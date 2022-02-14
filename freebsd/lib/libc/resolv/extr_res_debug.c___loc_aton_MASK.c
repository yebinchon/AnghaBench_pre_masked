
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int8_t ;
typedef int u_int32_t ;
typedef int u_char ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char const**,int*) ;
 void* FUNC_4 (char const**) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_0, u_char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 u_char *VAR_4;

 u_int32_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 u_int32_t VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 1;
 u_int8_t VAR_13 = 0x16;
 u_int8_t VAR_14 = 0x13;
 u_int8_t VAR_15 = 0x12;
 int VAR_16 = 0, VAR_17 = 0;

 VAR_2 = VAR_0;
 VAR_3 = VAR_2 + FUNC_5(VAR_0);

 VAR_8 = FUNC_3(&VAR_2, &VAR_16);

 VAR_9 = FUNC_3(&VAR_2, &VAR_17);

 switch (VAR_16 + VAR_17) {
 case 3:
  if ((VAR_16 == 1) && (VAR_17 == 2)) {
   VAR_5 = VAR_8;
   VAR_6 = VAR_9;
  } else if ((VAR_16 == 2) && (VAR_17 == 1)) {
   VAR_6 = VAR_8;
   VAR_5 = VAR_9;
  } else {
   return (0);
  }
  break;
 default:
  return (0);
 }


 if (*VAR_2 == '-') {
  VAR_12 = -1;
  VAR_2++;
 }

 if (*VAR_2 == '+')
  VAR_2++;

 while (FUNC_1((unsigned char)*VAR_2))
  VAR_10 = VAR_10 * 10 + (*VAR_2++ - '0');

 if (*VAR_2 == '.') {
  VAR_2++;
  if (FUNC_1((unsigned char)*VAR_2)) {
   VAR_11 = (*VAR_2++ - '0') * 10;
   if (FUNC_1((unsigned char)*VAR_2)) {
    VAR_11 += (*VAR_2++ - '0');
   }
  }
 }

 VAR_7 = (10000000 + (VAR_12 * (VAR_10 * 100 + VAR_11)));

 while (!FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 while (FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 if (VAR_2 >= VAR_3)
  goto defaults;

 VAR_15 = FUNC_4(&VAR_2);

 while (!FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 while (FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 if (VAR_2 >= VAR_3)
  goto defaults;

 VAR_13 = FUNC_4(&VAR_2);

 while (!FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 while (FUNC_2((unsigned char)*VAR_2) && (VAR_2 < VAR_3))
  VAR_2++;

 if (VAR_2 >= VAR_3)
  goto defaults;

 VAR_14 = FUNC_4(&VAR_2);

 defaults:

 VAR_4 = VAR_1;
 *VAR_4++ = (u_int8_t) 0;
 *VAR_4++ = VAR_15;
 *VAR_4++ = VAR_13;
 *VAR_4++ = VAR_14;
 FUNC_0(VAR_5,VAR_4);
 FUNC_0(VAR_6,VAR_4);
 FUNC_0(VAR_7,VAR_4);

 return (16);
}
