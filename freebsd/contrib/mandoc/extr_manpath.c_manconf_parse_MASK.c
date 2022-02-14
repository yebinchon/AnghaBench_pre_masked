
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manconf {int manpath; } ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct manconf*,char const*) ;
 int FUNC_2 (int *,char*,char) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

void
FUNC_5(struct manconf *VAR_1, const char *VAR_2,
  char *VAR_3, char *VAR_4)
{
 char *VAR_5;


 FUNC_2(&VAR_1->manpath, VAR_4, 'm');


 if (((void*)0) != VAR_3) {
  FUNC_2(&VAR_1->manpath, VAR_3, 'M');
  return;
 }


 VAR_3 = FUNC_0("MANPATH");
 if (((void*)0) == VAR_2)
  VAR_2 = VAR_0;


 if (((void*)0) == VAR_3 || '\0' == VAR_3[0]) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }


 if (':' == VAR_3[0]) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_2(&VAR_1->manpath, VAR_3, '\0');
  return;
 }


 if (':' == VAR_3[FUNC_3(VAR_3) - 1]) {
  FUNC_2(&VAR_1->manpath, VAR_3, '\0');
  FUNC_1(VAR_1, VAR_2);
  return;
 }


 VAR_5 = FUNC_4(VAR_3, "::");
 if (((void*)0) != VAR_5) {
  *VAR_5++ = '\0';
  FUNC_2(&VAR_1->manpath, VAR_3, '\0');
  FUNC_1(VAR_1, VAR_2);
  FUNC_2(&VAR_1->manpath, VAR_5 + 1, '\0');
  return;
 }


 FUNC_2(&VAR_1->manpath, VAR_3, '\0');
}
