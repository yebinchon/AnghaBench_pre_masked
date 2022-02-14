
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int formals_style ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 char* FUNC_3 (char const*,char const*,char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_6 (tree VAR_3, formals_style VAR_4)
{
  const char *VAR_5 = "";
  tree VAR_6;

  VAR_6 = FUNC_0 (VAR_3);
  while (VAR_6)
    {
      const char *VAR_7;

      if (*VAR_5 && ((VAR_4 == VAR_0) || (VAR_4 == VAR_2)))
 VAR_5 = FUNC_3 (VAR_5, ", ", ((void*)0));
      VAR_7 = FUNC_5 (VAR_6, 0, VAR_4);
      if (VAR_4 == VAR_1)
 VAR_5 = FUNC_3 (VAR_5, VAR_7, "; ", ((void*)0));
      else
 VAR_5 = FUNC_3 (VAR_5, VAR_7, ((void*)0));
      VAR_6 = FUNC_1 (VAR_6);
    }
  if (VAR_4 == VAR_0)
    {
      if (!FUNC_0 (VAR_3))
 VAR_5 = FUNC_3 (VAR_5, "void", ((void*)0));
      if (FUNC_4 (FUNC_2 (VAR_3)))
 VAR_5 = FUNC_3 (VAR_5, ", ...", ((void*)0));
    }
  if ((VAR_4 == VAR_0) || (VAR_4 == VAR_2))
    VAR_5 = FUNC_3 (" (", VAR_5, ")", ((void*)0));
  return VAR_5;
}
