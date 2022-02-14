
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char const**,char*,int**,int**,int*) ;
 int VAR_5 ;
 char* FUNC_1 (char const*,int) ;

int
FUNC_2(const char *VAR_6, u_char *VAR_7, size_t VAR_8, size_t *VAR_9) {
 u_char *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 char *VAR_17;

 VAR_15 = 0;
 VAR_11 = VAR_7;
 VAR_12 = VAR_7 + VAR_8;
 VAR_10 = VAR_11++;

 while ((VAR_13 = *VAR_6++) != 0) {
  if (VAR_15) {
   if (VAR_13 == '[') {
    if ((VAR_17 = FUNC_1(VAR_6, ']')) == ((void*)0)) {
     VAR_5 = VAR_0;
     return (-1);
    }
    if ((VAR_16 = FUNC_0(&VAR_6, VAR_17 + 2,
        &VAR_10, &VAR_11, VAR_12))
        != 0) {
     VAR_5 = VAR_16;
     return (-1);
    }
    VAR_15 = 0;
    VAR_10 = VAR_11++;
    if ((VAR_13 = *VAR_6++) == 0)
     goto done;
    else if (VAR_13 != '.') {
     VAR_5 = VAR_0;
     return (-1);
    }
    continue;
   }
   else if ((VAR_17 = FUNC_1(VAR_4, VAR_13)) != ((void*)0)) {
    VAR_14 = (VAR_17 - VAR_4) * 100;
    if ((VAR_13 = *VAR_6++) == 0 ||
        (VAR_17 = FUNC_1(VAR_4, VAR_13)) == ((void*)0)) {
     VAR_5 = VAR_1;
     return (-1);
    }
    VAR_14 += (VAR_17 - VAR_4) * 10;
    if ((VAR_13 = *VAR_6++) == 0 ||
        (VAR_17 = FUNC_1(VAR_4, VAR_13)) == ((void*)0)) {
     VAR_5 = VAR_1;
     return (-1);
    }
    VAR_14 += (VAR_17 - VAR_4);
    if (VAR_14 > 255) {
     VAR_5 = VAR_1;
     return (-1);
    }
    VAR_13 = VAR_14;
   }
   VAR_15 = 0;
  } else if (VAR_13 == '\\') {
   VAR_15 = 1;
   continue;
  } else if (VAR_13 == '.') {
   VAR_13 = (VAR_11 - VAR_10 - 1);
   if ((VAR_13 & VAR_3) != 0) {
    VAR_5 = VAR_1;
    return (-1);
   }
   if (VAR_10 >= VAR_12) {
    VAR_5 = VAR_1;
    return (-1);
   }
   *VAR_10 = VAR_13;

   if (*VAR_6 == '\0') {
    if (VAR_13 != 0) {
     if (VAR_11 >= VAR_12) {
      VAR_5 = VAR_1;
      return (-1);
     }
     *VAR_11++ = '\0';
    }
    if ((VAR_11 - VAR_7) > VAR_2) {
     VAR_5 = VAR_1;
     return (-1);
    }
    if (VAR_9 != ((void*)0))
     *VAR_9 = (VAR_11 - VAR_7);
    return (1);
   }
   if (VAR_13 == 0 || *VAR_6 == '.') {
    VAR_5 = VAR_1;
    return (-1);
   }
   VAR_10 = VAR_11++;
   continue;
  }
  if (VAR_11 >= VAR_12) {
   VAR_5 = VAR_1;
   return (-1);
  }
  *VAR_11++ = (u_char)VAR_13;
 }
 VAR_13 = (VAR_11 - VAR_10 - 1);
 if ((VAR_13 & VAR_3) != 0) {
  VAR_5 = VAR_1;
  return (-1);
 }
  done:
 if (VAR_10 >= VAR_12) {
  VAR_5 = VAR_1;
  return (-1);
 }
 *VAR_10 = VAR_13;
 if (VAR_13 != 0) {
  if (VAR_11 >= VAR_12) {
   VAR_5 = VAR_1;
   return (-1);
  }
  *VAR_11++ = 0;
 }
 if ((VAR_11 - VAR_7) > VAR_2) {
  VAR_5 = VAR_1;
  return (-1);
 }
 if (VAR_9 != ((void*)0))
  *VAR_9 = (VAR_11 - VAR_7);
 return (0);
}
