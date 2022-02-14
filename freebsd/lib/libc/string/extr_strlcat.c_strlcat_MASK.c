
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

size_t
FUNC_1(char * __restrict VAR_0, const char * __restrict VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;
 size_t VAR_5 = VAR_2;
 size_t VAR_6;


 while (VAR_5-- != 0 && *VAR_0 != '\0')
  VAR_0++;
 VAR_6 = VAR_0 - VAR_3;
 VAR_5 = VAR_2 - VAR_6;

 if (VAR_5-- == 0)
  return(VAR_6 + FUNC_0(VAR_1));
 while (*VAR_1 != '\0') {
  if (VAR_5 != 0) {
   *VAR_0++ = *VAR_1;
   VAR_5--;
  }
  VAR_1++;
 }
 *VAR_0 = '\0';

 return(VAR_6 + (VAR_1 - VAR_4));
}
