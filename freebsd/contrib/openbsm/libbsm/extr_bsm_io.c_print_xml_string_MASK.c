
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,char const,int ,int ) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, const char *VAR_2, size_t VAR_3)
{
 u_int32_t VAR_4;
 char VAR_5[5];

 if (VAR_3 == 0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  switch (VAR_2[VAR_4]) {
  case '\0':
   return;

  case '&':
   (void) FUNC_0(VAR_1, "&amp;");
   break;

  case '<':
   (void) FUNC_0(VAR_1, "&lt;");
   break;

  case '>':
   (void) FUNC_0(VAR_1, "&gt;");
   break;

  case '\"':
   (void) FUNC_0(VAR_1, "&quot;");
   break;

  case '\'':
   (void) FUNC_0(VAR_1, "&apos;");
   break;

  default:
   (void) FUNC_1(VAR_5, VAR_2[VAR_4], VAR_0, 0);
   (void) FUNC_0(VAR_1, "%s", VAR_5);
   break;
  }
 }
}
