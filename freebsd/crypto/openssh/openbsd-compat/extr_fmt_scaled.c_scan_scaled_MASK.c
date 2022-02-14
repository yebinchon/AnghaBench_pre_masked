
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 char* VAR_7 ;
 long long* VAR_8 ;
 char FUNC_4 (unsigned char) ;

int
FUNC_5(char *VAR_9, long long *VAR_10)
{
 char *VAR_11 = VAR_9;
 int VAR_12 = 0;
 unsigned int VAR_13, VAR_14 = 0, VAR_15 = 0;
 long long VAR_16 = 1, VAR_17 = 0, VAR_18 = 0;


 while (FUNC_1((unsigned char)*VAR_11) && FUNC_3((unsigned char)*VAR_11))
  ++VAR_11;


 while (*VAR_11 == '-' || *VAR_11 == '+') {
  if (*VAR_11 == '-') {
   if (VAR_12) {
    VAR_6 = VAR_0;
    return -1;
   }
   VAR_12 = -1;
   ++VAR_11;
  } else if (*VAR_11 == '+') {
   if (VAR_12) {
    VAR_6 = VAR_0;
    return -1;
   }
   VAR_12 = +1;
   ++VAR_11;
  }
 }






 for (; FUNC_1((unsigned char)*VAR_11) &&
     (FUNC_2((unsigned char)*VAR_11) || *VAR_11=='.'); ++VAR_11) {
  if (*VAR_11 == '.') {
   if (VAR_15 > 0) {
    VAR_6 = VAR_0;
    return -1;
   }
   VAR_15 = 1;
   continue;
  }

  VAR_13 = (*VAR_11) - '0';
  if (VAR_15 > 0) {
   if (VAR_15 >= VAR_4-1)

    continue;
   VAR_15++;
   if (VAR_18 > VAR_2 / 10) {
    VAR_6 = VAR_1;
    return -1;
   }
   VAR_18 *= 10;
   if (VAR_13 > VAR_2 - VAR_18) {
    VAR_6 = VAR_1;
    return -1;
   }
   VAR_18 += VAR_13;
  } else {
   if (++VAR_14 >= VAR_4) {
    VAR_6 = VAR_1;
    return -1;
   }
   if (VAR_17 > VAR_2 / 10) {
    VAR_6 = VAR_1;
    return -1;
   }
   VAR_17 *= 10;
   if (VAR_13 > VAR_2 - VAR_17) {
    VAR_6 = VAR_1;
    return -1;
   }
   VAR_17 += VAR_13;
  }
 }

 if (VAR_12) {
  VAR_17 *= VAR_12;
  VAR_18 *= VAR_12;
 }


 if (!*VAR_11) {
  *VAR_10 = VAR_17;
  return 0;
 }


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {


  if (*VAR_11 == VAR_7[VAR_13] ||
   *VAR_11 == FUNC_4((unsigned char)VAR_7[VAR_13])) {


   if (FUNC_0((unsigned char)*(VAR_11+1))) {
    VAR_6 = VAR_0;
    return -1;
   }
   VAR_16 = VAR_8[VAR_13];


   if (VAR_17 > VAR_2 / VAR_16 ||
       VAR_17 < VAR_3 / VAR_16) {
    VAR_6 = VAR_1;
    return -1;
   }


   VAR_17 *= VAR_16;




   while (VAR_18 >= VAR_2 / VAR_16) {
    VAR_18 /= 10;
    VAR_15--;
   }
   VAR_18 *= VAR_16;
   if (VAR_15 > 0) {
    for (VAR_13 = 0; VAR_13 < VAR_15 -1; VAR_13++)
     VAR_18 /= 10;
   }
   VAR_17 += VAR_18;
   *VAR_10 = VAR_17;
   return 0;
  }
 }


 VAR_6 = VAR_0;
 return -1;
}
