
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive_string*,char const) ;
 int FUNC_1 (struct archive_string*) ;
 scalar_t__ FUNC_2 (struct archive_string*,char const*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive_string *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2;

 FUNC_1(VAR_1);


 while (*VAR_3 != '\0' && *VAR_3 == ' ')
  VAR_3++;

 while (*VAR_3 != '\0' && *VAR_3 != ' ') {
  if (*VAR_3 == '\\') {
   if (VAR_3[1] != '\0') {
    FUNC_0(VAR_1, VAR_3[1]);
    VAR_3 += 2;
   } else {
    VAR_3++;
    break;
   }
  } else if (*VAR_3 == '"') {
   ssize_t VAR_4 = FUNC_2(VAR_1, VAR_3);
   if (VAR_4 < 0)
    return (VAR_0);
   VAR_3 += VAR_4;
  } else {
   FUNC_0(VAR_1, VAR_3[0]);
   VAR_3++;
  }
 }
 return ((ssize_t)(VAR_3 - VAR_2));
}
