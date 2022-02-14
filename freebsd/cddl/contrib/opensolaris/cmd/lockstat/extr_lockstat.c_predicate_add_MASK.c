
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char **VAR_0, char *VAR_1, char *VAR_2, uintptr_t VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1 == ((void*)0))
  return;

 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = FUNC_1(1);
  *VAR_0[0] = '\0';
 }

 VAR_5 = FUNC_3(*VAR_0);
 VAR_6 = VAR_5 + FUNC_3(VAR_1) + 32 + FUNC_3("( && )");
 VAR_4 = FUNC_1(VAR_6);

 if (*VAR_0[0] != '\0') {
  if (VAR_2 != ((void*)0)) {
   (void) FUNC_2(VAR_4, "(%s) && (%s %s 0x%p)",
       *VAR_0, VAR_1, VAR_2, (void *)VAR_3);
  } else {
   (void) FUNC_2(VAR_4, "(%s) && (%s)", *VAR_0, VAR_1);
  }
 } else {
  if (VAR_2 != ((void*)0)) {
   (void) FUNC_2(VAR_4, "%s %s 0x%p",
       VAR_1, VAR_2, (void *)VAR_3);
  } else {
   (void) FUNC_2(VAR_4, "%s", VAR_1);
  }
 }

 FUNC_0(*VAR_0);
 *VAR_0 = VAR_4;
}
