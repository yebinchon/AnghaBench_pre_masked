
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tunable ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, char **VAR_2)
{
 char VAR_3[64];
 FUNC_2(VAR_3, sizeof(VAR_3), "kern.vt.fb.modes.%s",
     VAR_1);
 FUNC_0("Connector %s: get mode from tunables:\n", VAR_1);
 FUNC_0("  - %s\n", VAR_3);
 FUNC_0("  - kern.vt.fb.default_mode\n");
 *VAR_2 = FUNC_1(VAR_3);
 if (*VAR_2 == ((void*)0))
  *VAR_2 = FUNC_1("kern.vt.fb.default_mode");

 return (*VAR_2 != ((void*)0) ? 0 : -VAR_0);
}
