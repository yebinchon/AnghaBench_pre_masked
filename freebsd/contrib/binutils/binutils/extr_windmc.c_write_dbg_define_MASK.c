
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unichar ;
typedef int FILE ;


 char* FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (int *,scalar_t__ const*,int ) ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_0, const unichar *VAR_1, const unichar *VAR_2)
{
  char *VAR_3;

  if (!VAR_1 || VAR_1[0] == 0)
    return;
  VAR_3 = FUNC_0 (VAR_1);
  FUNC_1 (VAR_0, "  {(");
  if (VAR_2)
    FUNC_3 (VAR_0, VAR_2, FUNC_2 (VAR_2));
  else
    FUNC_1 (VAR_0, "DWORD");
  FUNC_1 (VAR_0, ") %s, \"%s\" },\n", VAR_3, VAR_3);
}
