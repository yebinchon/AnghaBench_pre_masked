
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 () ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(void)
{
  const char *VAR_0 = FUNC_1();

  if (!VAR_0) {
    struct passwd *VAR_1 = FUNC_2(FUNC_3());
    if (VAR_1)
      VAR_0 = VAR_1->pw_name;
  }

  if (!VAR_0)
    VAR_0 = FUNC_0("USER");
  if (!VAR_0)
    VAR_0 = FUNC_0("LOGNAME");
  if (!VAR_0)
    VAR_0 = "root";

  return FUNC_4(VAR_0);
}
