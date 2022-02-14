
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const**,char*,char*) ;
 void** VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(const u_char *VAR_7, char *VAR_8, size_t VAR_9)
{
 const u_char *VAR_10;
 char *VAR_11, *VAR_12;
 u_char VAR_13;
 u_int VAR_14;
 int VAR_15;

 VAR_10 = VAR_7;
 VAR_11 = VAR_8;
 VAR_12 = VAR_8 + VAR_9;

 while ((VAR_14 = *VAR_10++) != 0) {
  if ((VAR_14 & VAR_3) == VAR_3) {

   VAR_6 = VAR_2;
   return (-1);
  }
  if (VAR_11 != VAR_8) {
   if (VAR_11 >= VAR_12) {
    VAR_6 = VAR_2;
    return (-1);
   }
   *VAR_11++ = '.';
  }
  if ((VAR_15 = FUNC_1(VAR_10 - 1)) < 0) {
   VAR_6 = VAR_2;
   return (-1);
  }
  if (VAR_11 + VAR_15 >= VAR_12) {
   VAR_6 = VAR_2;
   return (-1);
  }
  if ((VAR_14 & VAR_3) == VAR_4) {
   int VAR_16;

   if (VAR_14 != VAR_0) {

    VAR_6 = VAR_1;
    return (-1);
   }
   if ((VAR_16 = FUNC_0(&VAR_10, VAR_11, VAR_12)) < 0)
   {
    VAR_6 = VAR_2;
    return (-1);
   }
   VAR_11 += VAR_16;
   continue;
  }
  for ((void)((void*)0); VAR_15 > 0; VAR_15--) {
   VAR_13 = *VAR_10++;
   if (FUNC_3(VAR_13)) {
    if (VAR_11 + 1 >= VAR_12) {
     VAR_6 = VAR_2;
     return (-1);
    }
    *VAR_11++ = '\\';
    *VAR_11++ = (char)VAR_13;
   } else if (!FUNC_2(VAR_13)) {
    if (VAR_11 + 3 >= VAR_12) {
     VAR_6 = VAR_2;
     return (-1);
    }
    *VAR_11++ = '\\';
    *VAR_11++ = VAR_5[VAR_13 / 100];
    *VAR_11++ = VAR_5[(VAR_13 % 100) / 10];
    *VAR_11++ = VAR_5[VAR_13 % 10];
   } else {
    if (VAR_11 >= VAR_12) {
     VAR_6 = VAR_2;
     return (-1);
    }
    *VAR_11++ = (char)VAR_13;
   }
  }
 }
 if (VAR_11 == VAR_8) {
  if (VAR_11 >= VAR_12) {
   VAR_6 = VAR_2;
   return (-1);
  }
  *VAR_11++ = '.';
 }
 if (VAR_11 >= VAR_12) {
  VAR_6 = VAR_2;
  return (-1);
 }
 *VAR_11++ = '\0';
 return (VAR_11 - VAR_8);
}
