
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output {int dummy; } ;


 int FUNC_0 (char,struct output*) ;
 int FUNC_1 (char const*,struct output*) ;
 int FUNC_2 (char const*,struct output*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char const*,char*) ;

void
FUNC_5(const char *VAR_0, struct output *VAR_1)
{
 int VAR_2;

 if (VAR_0[0] == '\0') {
  FUNC_2("''", VAR_1);
  return;
 }
 for (VAR_2 = 0; VAR_0[VAR_2] != '\0'; VAR_2++) {
  if ((VAR_0[VAR_2] > '\0' && VAR_0[VAR_2] < ' ' && VAR_0[VAR_2] != '\n') ||
      (VAR_0[VAR_2] & 0x80) != 0 || VAR_0[VAR_2] == '\'') {
   FUNC_1(VAR_0, VAR_1);
   return;
  }
 }

 if (VAR_0[FUNC_4(VAR_0, "|&;<>()$`\\\" \n*?[~#=")] == '\0' ||
   FUNC_3(VAR_0, "[") == 0) {
  FUNC_2(VAR_0, VAR_1);
  return;
 }

 FUNC_0('\'', VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_0('\'', VAR_1);
}
