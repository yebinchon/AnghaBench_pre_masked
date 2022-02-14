
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const VAR_2 ;
 char const VAR_3 ;

long
FUNC_0(const char *VAR_4)
{
 long VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = 0;
 VAR_5 = 0;
 for (VAR_7 = 0; *VAR_4 != '\0' && VAR_7 < 6; VAR_7++, VAR_4++) {
  if (*VAR_4 <= VAR_2)
   VAR_6 = *VAR_4 - VAR_2 + 1;
  else if (*VAR_4 <= VAR_0 + 9)
   VAR_6 = *VAR_4 - VAR_0 + 2;
  else if (*VAR_4 <= VAR_1 + 25)
   VAR_6 = *VAR_4 - VAR_1 + 12;
  else
   VAR_6 = *VAR_4 - VAR_3 + 38;

  VAR_8 |= VAR_6 << VAR_5;
  VAR_5 += 6;
 }
 return (VAR_8);
}
