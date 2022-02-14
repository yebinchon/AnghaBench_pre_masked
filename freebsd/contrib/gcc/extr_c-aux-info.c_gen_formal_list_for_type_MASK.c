
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ formals_style ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_0 ;
 char const* FUNC_4 (char const*,char const*,char*,...) ;
 int VAR_1 ;
 char* FUNC_5 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *
FUNC_7 (tree VAR_3, formals_style VAR_4)
{
  const char *VAR_5 = "";
  tree VAR_6;

  if (VAR_4 != VAR_0)
    return "()";

  VAR_6 = FUNC_2 (VAR_3);
  while (VAR_6 && FUNC_1 (VAR_6) != VAR_2)
    {
      const char *VAR_7;

      if (*VAR_5)
 VAR_5 = FUNC_4 (VAR_5, ", ", ((void*)0));

      VAR_7 = FUNC_5 ("", FUNC_1 (VAR_6), VAR_0);
      VAR_5
 = ((FUNC_6 (VAR_7))
    ? FUNC_4 (VAR_5, FUNC_3 (VAR_7), ((void*)0))
    : FUNC_4 (VAR_5, VAR_1, ((void*)0)));

      VAR_6 = FUNC_0 (VAR_6);
    }
  if (!*VAR_5)
    {
      if (FUNC_2 (VAR_3))

 VAR_5 = "void";
      else
 VAR_5 = "/* ??? */";
    }
  else
    {



      if (!VAR_6)
 VAR_5 = FUNC_4 (VAR_5, ", ...", ((void*)0));
    }

  return FUNC_4 (" (", VAR_5, ")", ((void*)0));
}
