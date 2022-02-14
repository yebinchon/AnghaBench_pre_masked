
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (int *,char*,char**) ;
 int VAR_0 ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int
FUNC_6(nvlist_t *VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4;

 if ((VAR_3 = FUNC_5(VAR_2, '=')) == ((void*)0)) {
  (void) FUNC_0(VAR_0, "%s", FUNC_1("missing "
      "'=' for property=value argument\n"));
  return (-1);
 }
 *VAR_3 = '\0';
 VAR_3++;
 if (FUNC_4(VAR_1, VAR_2, &VAR_4) == 0) {
  (void) FUNC_0(VAR_0, FUNC_1("property '%s' "
      "specified multiple times\n"), VAR_2);
  return (-1);
 }
 if (FUNC_3(VAR_1, VAR_2, VAR_3) != 0)
  FUNC_2();
 return (0);
}
