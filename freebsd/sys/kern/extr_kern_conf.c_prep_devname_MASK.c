
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct cdev {char* si_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int,int,char const*,int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, const char *VAR_6, va_list VAR_7)
{
 int VAR_8;
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;

 FUNC_2(&VAR_4, VAR_3);

 VAR_8 = FUNC_3(VAR_5->si_name, sizeof(VAR_5->si_name), 32, VAR_6, VAR_7);
 if (VAR_8 > sizeof(VAR_5->si_name) - 1)
  return (VAR_2);


 for (VAR_9 = VAR_5->si_name; *VAR_9 == '/'; VAR_9++)
  ;

 for (VAR_12 = VAR_5->si_name; *VAR_9 != '\0'; VAR_9++, VAR_12++) {





  if (FUNC_1(*VAR_9) || *VAR_9 == '"')
   return (VAR_1);

  while (VAR_9[0] == '/' && VAR_9[1] == '/')
   VAR_9++;

  if (VAR_9[0] == '/' && VAR_9[1] == '\0')
   return (VAR_1);
  *VAR_12 = *VAR_9;
 }
 *VAR_12 = '\0';

 if (VAR_5->si_name[0] == '\0')
  return (VAR_1);


 for (VAR_11 = VAR_5->si_name;;) {
  for (VAR_10 = VAR_11; *VAR_10 != '/' && *VAR_10 != '\0'; VAR_10++)
   ;
  if (VAR_10 - VAR_11 == 1 && VAR_11[0] == '.')
   return (VAR_1);
  if (VAR_10 - VAR_11 == 2 && VAR_11[0] == '.' && VAR_11[1] == '.')
   return (VAR_1);
  if (*VAR_10 != '/')
   break;
  VAR_11 = VAR_10 + 1;
 }

 if (FUNC_0(VAR_5->si_name) != 0)
  return (VAR_0);

 return (0);
}
