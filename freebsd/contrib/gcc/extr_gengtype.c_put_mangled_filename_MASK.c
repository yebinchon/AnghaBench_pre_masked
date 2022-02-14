
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outf_p ;


 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const) ;

__attribute__((used)) static void
FUNC_3 (outf_p VAR_0, const char *VAR_1)
{
  const char *VAR_2 = FUNC_1 (VAR_1);
  for (; *VAR_2 != 0; VAR_2++)
    if (FUNC_0 (*VAR_2))
      FUNC_2 (VAR_0, "%c", *VAR_2);
    else
      FUNC_2 (VAR_0, "%c", '_');
}
