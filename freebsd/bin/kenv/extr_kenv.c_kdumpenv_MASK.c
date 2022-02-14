
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *,char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_0, ((void*)0), ((void*)0), 0);
 if (VAR_7 < 0)
  return (-1);
 for (;;) {
  VAR_6 = VAR_7 * 120 / 100;
  VAR_3 = FUNC_0(1, VAR_6 + 1);
  if (VAR_3 == ((void*)0))
   return (-1);
  VAR_7 = FUNC_2(VAR_0, ((void*)0), VAR_3, VAR_6);
  if (VAR_7 < 0) {
   FUNC_1(VAR_3);
   return (-1);
  }
  if (VAR_7 > VAR_6)
   FUNC_1(VAR_3);
  else
   break;
 }

 for (VAR_4 = VAR_3; *VAR_4 != '\0'; VAR_4 += FUNC_5(VAR_4) + 1) {
  if (VAR_2) {
   if (FUNC_6(VAR_4, "hint.", 5) != 0)
    continue;
  }
  VAR_5 = FUNC_4(VAR_4, '=');
  if (VAR_5 == ((void*)0))
   continue;
  *VAR_5++ = '\0';
  if (VAR_1)
   FUNC_3("%s\n", VAR_4);
  else
   FUNC_3("%s=\"%s\"\n", VAR_4, VAR_5);
  VAR_4 = VAR_5;
 }

 FUNC_1(VAR_3);
 return (0);
}
