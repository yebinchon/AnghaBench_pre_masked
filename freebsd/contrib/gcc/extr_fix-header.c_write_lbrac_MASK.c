
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_1)
    {
      FUNC_0 (VAR_0, "#ifndef _PARAMS\n");
      FUNC_0 (VAR_0, "#if defined(__STDC__) || defined(__cplusplus)\n");
      FUNC_0 (VAR_0, "#define _PARAMS(ARGS) ARGS\n");
      FUNC_0 (VAR_0, "#else\n");
      FUNC_0 (VAR_0, "#define _PARAMS(ARGS) ()\n");
      FUNC_0 (VAR_0, "#endif\n#endif /* _PARAMS */\n");
    }
}
