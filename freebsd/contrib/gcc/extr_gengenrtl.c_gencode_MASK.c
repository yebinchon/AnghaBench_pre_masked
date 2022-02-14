
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  const char **VAR_1;

  FUNC_1 ("#include \"config.h\"");
  FUNC_1 ("#include \"system.h\"");
  FUNC_1 ("#include \"coretypes.h\"");
  FUNC_1 ("#include \"tm.h\"");
  FUNC_1 ("#include \"obstack.h\"");
  FUNC_1 ("#include \"rtl.h\"");
  FUNC_1 ("#include \"ggc.h\"\n");

  for (VAR_1 = VAR_0; *VAR_1 != 0; VAR_1++)
    FUNC_0 (*VAR_1);
}
