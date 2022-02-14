
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned char) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_2(char *VAR_3, size_t VAR_4, const char *VAR_5)
{
 const char *VAR_6 = VAR_5;
 char *VAR_7 = VAR_0;
 const char *VAR_8[9], *VAR_9[9];
 int VAR_10, VAR_11[9], VAR_12 = 0, VAR_13 = 1;

 for (VAR_10=0; VAR_10 < 9; ++VAR_10) {
  VAR_11[VAR_10] = 0;
 }
 while (VAR_13 && *VAR_6 && *VAR_7) {
  switch (*VAR_7) {
   case '\\':
    if (*++VAR_7 != *VAR_6) {
     VAR_13 = 0;
    }
    break;
   case '$':
    if (*(VAR_7+1) >= '1' && (*VAR_7+1) <= '9') {
     if (*VAR_6 != *(++VAR_7+1)) {
      VAR_11[VAR_12 = *VAR_7 - '1']++;
      VAR_8[VAR_12] = VAR_6;
      while (*++VAR_6 && *(VAR_7+1)
       != *VAR_6);
      VAR_9[VAR_12] = VAR_6;
     }
     VAR_7++;
     break;
    }

   default:
    if (*VAR_7 != *VAR_6) {
     VAR_13 = 0;
    }
    break;
  }
  if (VAR_13 && *VAR_6) {
   VAR_6++;
  }
  if (VAR_13 && *VAR_7) {
   VAR_7++;
  }
 }
 if (!VAR_13 && *VAR_6)
 {
  VAR_11[VAR_12] = 0;
 }
 VAR_7 = VAR_3;
 *VAR_7 = '\0';
 VAR_6 = VAR_1;
 while (*VAR_6) {
  VAR_13 = 0;
  switch (*VAR_6) {
   case '\\':
    if (*(VAR_6 + 1)) {
     *VAR_7++ = *++VAR_6;
    }
    break;
   case '[':
LOOP:
    if (*++VAR_6 == '$' &&
        FUNC_1((unsigned char)*(VAR_6+1))) {
     if (*++VAR_6 == '0') {
      const char *VAR_14 = VAR_5;

      while (*VAR_14) {
       *VAR_7++ = *VAR_14++;
      }
      VAR_13 = 1;
     }
     else if (VAR_11[VAR_12 = *VAR_6 - '1']) {
      const char *VAR_15 = VAR_8[VAR_12];

      while (VAR_15 != VAR_9[VAR_12]) {
       *VAR_7++ = *VAR_15++;
      }
      VAR_13 = 1;
     }
    }
    else {
     while (*VAR_6 && *VAR_6 != ',' &&
         *VAR_6 != ']') {
      if (*VAR_6 == '\\') {
       VAR_6++;
      }
      else if (*VAR_6 == '$' &&
          FUNC_1((unsigned char)*(VAR_6+1))) {
       if (*++VAR_6 == '0') {
          const char *VAR_16 = VAR_5;

          while (*VAR_16) {
        *VAR_7++ = *VAR_16++;
          }
       }
       else if (VAR_11[VAR_12 =
           *VAR_6 - '1']) {
          const char *VAR_17=VAR_8[VAR_12];

          while (VAR_17 !=
          VAR_9[VAR_12]) {
        *VAR_7++ = *VAR_17++;
          }
       }
      }
      else if (*VAR_6) {
       *VAR_7++ = *VAR_6++;
      }
     }
     if (!*VAR_6) {
      FUNC_0(
      "nmap: unbalanced brackets.\n",
          VAR_2);
      return (VAR_5);
     }
     VAR_13 = 1;
     VAR_6--;
    }
    if (VAR_13) {
     while (*++VAR_6 && *VAR_6 != ']') {
           if (*VAR_6 == '\\' && *(VAR_6 + 1)) {
       VAR_6++;
           }
     }
     if (!*VAR_6) {
      FUNC_0(
      "nmap: unbalanced brackets.\n",
          VAR_2);
      return (VAR_5);
     }
     break;
    }
    switch (*++VAR_6) {
     case ',':
      goto LOOP;
     case ']':
      break;
     default:
      VAR_6--;
      goto LOOP;
    }
    break;
   case '$':
    if (FUNC_1((unsigned char)*(VAR_6 + 1))) {
     if (*++VAR_6 == '0') {
      const char *VAR_18 = VAR_5;

      while (*VAR_18) {
       *VAR_7++ = *VAR_18++;
      }
     }
     else if (VAR_11[VAR_12 = *VAR_6 - '1']) {
      const char *VAR_19 = VAR_8[VAR_12];

      while (VAR_19 != VAR_9[VAR_12]) {
       *VAR_7++ = *VAR_19++;
      }
     }
     break;
    }

   default:
    *VAR_7++ = *VAR_6;
    break;
  }
  VAR_6++;
 }
 *VAR_7 = '\0';
 return *VAR_3 ? VAR_3 : VAR_5;
}
