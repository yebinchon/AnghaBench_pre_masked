
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;

char *
FUNC_3(char *VAR_1)
{
 struct passwd *VAR_2;

 if ((VAR_2 = FUNC_1(FUNC_0())) == ((void*)0)) {
  if (VAR_1)
   *VAR_1 = '\0';
  return (VAR_1);
 }
 if (VAR_1) {
  (void)FUNC_2(VAR_1, VAR_2->pw_name, VAR_0);
  return (VAR_1);
 }
 return (VAR_2->pw_name);
}
