
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*,char) ;

int
FUNC_1(char *VAR_0, const char *VAR_1, long *VAR_2)
{
 long VAR_3;
 int VAR_4, VAR_5;
 char *VAR_6;




 VAR_6 = FUNC_0(VAR_0, VAR_1, '#');
 if (VAR_6 == ((void*)0))
  return (-1);







 if (*VAR_6 == '0') {
  VAR_6++;
  if (*VAR_6 == 'x' || *VAR_6 == 'X') {
   VAR_6++;
   VAR_4 = 16;
  } else
   VAR_4 = 8;
 } else
  VAR_4 = 10;




 VAR_3 = 0;
 for (;;) {
  if ('0' <= *VAR_6 && *VAR_6 <= '9')
   VAR_5 = *VAR_6 - '0';
  else if ('a' <= *VAR_6 && *VAR_6 <= 'f')
   VAR_5 = 10 + *VAR_6 - 'a';
  else if ('A' <= *VAR_6 && *VAR_6 <= 'F')
   VAR_5 = 10 + *VAR_6 - 'A';
  else
   break;

  if (VAR_5 >= VAR_4)
   break;

  VAR_3 = VAR_3 * VAR_4 + VAR_5;
  VAR_6++;
 }




 *VAR_2 = VAR_3;
 return (0);
}
