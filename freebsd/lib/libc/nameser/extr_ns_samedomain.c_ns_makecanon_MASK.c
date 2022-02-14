
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_2, char *VAR_3, size_t VAR_4) {
 size_t VAR_5 = FUNC_1(VAR_2);

 if (VAR_5 + sizeof "." > VAR_4) {
  VAR_1 = VAR_0;
  return (-1);
 }
 FUNC_0(VAR_3, VAR_2);
 while (VAR_5 >= 1U && VAR_3[VAR_5 - 1] == '.')
  if (VAR_5 >= 2U && VAR_3[VAR_5 - 2] == '\\' &&
      (VAR_5 < 3U || VAR_3[VAR_5 - 3] != '\\'))
   break;
  else
   VAR_3[--VAR_5] = '\0';
 VAR_3[VAR_5++] = '.';
 VAR_3[VAR_5] = '\0';
 return (0);
}
