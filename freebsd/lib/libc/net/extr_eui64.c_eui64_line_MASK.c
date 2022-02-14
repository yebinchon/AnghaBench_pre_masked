
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {int dummy; } ;


 scalar_t__ FUNC_0 (char*,struct eui64*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, struct eui64 *VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5 == ((void*)0))
  return (-1);
 VAR_4 = VAR_5;


 while ((VAR_6 = FUNC_4(&VAR_4, " \t\r\n")) != ((void*)0)) {
  if (*VAR_6 != '\0') {
   if (FUNC_0(VAR_6, VAR_1) == 0)
    break;
   else
    goto bad;
  }
 }


 while ((VAR_6 = FUNC_4(&VAR_4, " \t\r\n")) != ((void*)0)) {
  if (*VAR_6 != '\0') {
   if (FUNC_3(VAR_2, VAR_6, VAR_3) <= VAR_3)
    break;
   else
    goto bad;
  }
 }


 while ((VAR_6 = FUNC_4(&VAR_4, " \t\r\n")) != ((void*)0)) {
  if (*VAR_6 == '#')
   break;
  if (*VAR_6 != '\0')
   goto bad;
 }

 FUNC_1(VAR_5);
 return (0);

bad:
 FUNC_1(VAR_5);
 return (-1);
}
