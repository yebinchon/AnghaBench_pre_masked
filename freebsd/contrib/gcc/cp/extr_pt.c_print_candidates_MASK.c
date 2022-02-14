
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char const*,char*) ;

void
FUNC_5 (tree VAR_1)
{
  tree VAR_2;

  const char *VAR_3 = "candidates are:";

  for (VAR_2 = VAR_1; VAR_2 != VAR_0; VAR_2 = FUNC_2 (VAR_2))
    {
      tree VAR_4;

      for (VAR_4 = FUNC_3 (VAR_2); VAR_4; VAR_4 = FUNC_1 (VAR_4))
 FUNC_4 ("%s %+#D", VAR_3, FUNC_0 (VAR_4));
      VAR_3 = "               ";
    }
}
