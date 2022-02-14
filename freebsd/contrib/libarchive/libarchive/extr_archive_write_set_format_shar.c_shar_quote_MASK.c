
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char const) ;
 int FUNC_1 (struct archive_string*,char*) ;
 int FUNC_2 (struct archive_string*,char const*,size_t) ;
 size_t FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(struct archive_string *VAR_0, const char *VAR_1, int VAR_2)
{
 static const char VAR_3[] = "\n \t'`\";&<>()|*?{}[]\\$!#^~";
 size_t VAR_4;

 while (*VAR_1 != '\0') {
  if ((VAR_4 = FUNC_3(VAR_1, VAR_3)) != 0) {
   FUNC_2(VAR_0, VAR_1, VAR_4);
   VAR_1 += VAR_4;
  } else if (*VAR_1 == '\n') {
   if (VAR_2)
    FUNC_1(VAR_0, "\"\n\"");
   else
    FUNC_1(VAR_0, "\\n");
   ++VAR_1;
  } else {
   FUNC_0(VAR_0, '\\');
   FUNC_0(VAR_0, *VAR_1);
   ++VAR_1;
  }
 }
}
