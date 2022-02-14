
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char const*,char const*) ;
 size_t FUNC_3 (char const*) ;

void
FUNC_4 (const char *VAR_1, const char *VAR_2, int VAR_3)
{
  char *VAR_4;
  size_t VAR_5 = FUNC_3 (VAR_1);
  size_t VAR_6 = FUNC_3 (VAR_2);
  size_t VAR_7 = 2;

  if (VAR_3)
    VAR_7 += 2;

  VAR_4 = (char *) FUNC_0 (VAR_5 + VAR_6 + VAR_7);
  if (VAR_3)
    FUNC_2 (VAR_4, "%s=\"%s\"", VAR_1, VAR_2);
  else
    FUNC_2 (VAR_4, "%s=%s", VAR_1, VAR_2);

  FUNC_1 (VAR_0, VAR_4);
}
