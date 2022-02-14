
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

size_t
FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;
 size_t VAR_5 = VAR_2;
 size_t VAR_6;


 while (VAR_5-- != 0U && *VAR_3 != '\0')
  VAR_3++;
 VAR_6 = VAR_3 - VAR_0;
 VAR_5 = VAR_2 - VAR_6;

 if (VAR_5 == 0U)
  return(VAR_6 + FUNC_0(VAR_4));
 while (*VAR_4 != '\0') {
  if (VAR_5 != 1U) {
   *VAR_3++ = *VAR_4;
   VAR_5--;
  }
  VAR_4++;
 }
 *VAR_3 = '\0';

 return(VAR_6 + (VAR_4 - VAR_1));
}
