
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt {char* name; char** optp; scalar_t__ sel_p; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char**) ;
 struct opt* VAR_1 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, char *VAR_3)
{
  char *VAR_4 = VAR_2;
  char *VAR_5;




  for (VAR_5 = FUNC_1(&VAR_4); *VAR_5; VAR_5 = FUNC_1(&VAR_4)) {
    struct opt *VAR_6;
    char *VAR_7 = FUNC_3(VAR_5, '=');
    char *VAR_8 = ((void*)0);

    if (!VAR_7)
      continue;

    if (*(VAR_7-1) == '!' ||
 VAR_7[1] == '=' ||
 VAR_7[1] == '!') {
      continue;
    }

    if (*(VAR_7-1) == ':') {
      *(VAR_7-1) = '\0';
    } else {

      VAR_7[0] = '\0';
    }
    VAR_8 = VAR_7 + 1;




    for (VAR_6 = VAR_1; VAR_6->name; VAR_6++) {



      if (FUNC_0(VAR_6->name, VAR_5)) {
 if (VAR_6->sel_p) {
   FUNC_2(VAR_0, "key %s: Can't assign to a selector (%s)",
        VAR_3, VAR_6->name);
   return 0;
 }
 *VAR_6->optp = VAR_8;
 break;
      }
    }

    if (!VAR_6->name)
      FUNC_2(VAR_0, "key %s: Unrecognized key/option \"%s\"", VAR_3, VAR_5);
  }

  return 1;
}
