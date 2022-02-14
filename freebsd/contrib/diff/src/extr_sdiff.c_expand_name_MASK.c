
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (size_t) ;

__attribute__((used)) static char const *
FUNC_6 (char *VAR_0, bool VAR_1, char const *VAR_2)
{
  if (FUNC_3 (VAR_0, "-") == 0)
    FUNC_1 ("cannot interactively merge standard input");
  if (! VAR_1)
    return VAR_0;
  else
    {

      char const *VAR_3 = FUNC_0 (VAR_2);
      size_t VAR_4 = FUNC_4 (VAR_0), VAR_5 = FUNC_4 (VAR_3);
      bool VAR_6 = *FUNC_0 (VAR_0) && VAR_0[VAR_4 - 1] != '/';
      char *VAR_7 = FUNC_5 (VAR_4 + VAR_6 + VAR_5 + 1);
      FUNC_2 (VAR_7, VAR_0, VAR_4);
      VAR_7[VAR_4] = '/';
      FUNC_2 (VAR_7 + VAR_4 + VAR_6, VAR_3, VAR_5 + 1);
      return VAR_7;
    }
}
