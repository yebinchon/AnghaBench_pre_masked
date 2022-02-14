
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive_string*,char const) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_string *VAR_1, const char *VAR_2)
{
 const char *VAR_3;

 for (VAR_3 = VAR_2 + 1; *VAR_3;) {
  if (*VAR_3 == '\\') {
   if (VAR_3[1] != '\0') {
    FUNC_0(VAR_1, VAR_3[1]);
    VAR_3 += 2;
   } else
    VAR_3++;
  } else if (*VAR_3 == '"')
   break;
  else {
   FUNC_0(VAR_1, VAR_3[0]);
   VAR_3++;
  }
 }
 if (*VAR_3 != '"')
  return (VAR_0);
 return ((ssize_t)(VAR_3 + 1 - VAR_2));
}
