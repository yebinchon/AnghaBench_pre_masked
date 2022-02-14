
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int boolean_t ;



int64_t
FUNC_0(const char *VAR_0, char **VAR_1)
{
 int VAR_2;
 const char *VAR_3;
 int VAR_4;
 int64_t VAR_5;
 boolean_t VAR_6;

 VAR_3 = VAR_0;
 while (*VAR_3 == ' ' || *VAR_3 == '\t' || *VAR_3 == '\n') {
  VAR_3++;
 }
 VAR_6 = (*VAR_3 == '-');
 if (VAR_6) {
  VAR_3++;
 }
 VAR_2 = 10;

 if (*VAR_3 == '0') {
  VAR_2 = 8;
  VAR_3++;
  if (*VAR_3 == 'x' || *VAR_3 == 'X') {
   VAR_2 = 16;
   VAR_3++;
  }
 }

 VAR_5 = 0;
 for (; *VAR_3 != '\0'; VAR_3++) {
  if (*VAR_3 >= '0' && *VAR_3 <= '9') {
   VAR_4 = *VAR_3 - '0';
  } else if (*VAR_3 >= 'a' && *VAR_3 <= 'f') {
   VAR_4 = *VAR_3 - 'a' + 10;
  } else if (*VAR_3 >= 'A' && *VAR_3 <= 'F') {
   VAR_4 = *VAR_3 - 'A' + 10;
  } else {
   break;
  }
  if (VAR_4 >= VAR_2) {
   break;
  }
  VAR_5 = (VAR_5 * VAR_2) + VAR_4;
 }

 if (VAR_1 != ((void*)0)) {
  *VAR_1 = (char *)VAR_3;
 }
 if (VAR_6) {
  VAR_5 = -VAR_5;
 }
 return (VAR_5);
}
