
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,char const*) ;

tree FUNC_4 (tree VAR_0, const char *VAR_1)
{
  tree VAR_2 = FUNC_1 (VAR_0);

  if (FUNC_0 (VAR_0))
    {
      if (VAR_1)
 FUNC_3 ("%s expression list treated as compound expression", VAR_1);

      for (VAR_0 = FUNC_0 (VAR_0); VAR_0; VAR_0 = FUNC_0 (VAR_0))
 VAR_2 = FUNC_2 (VAR_2, FUNC_1 (VAR_0));
    }

  return VAR_2;
}
