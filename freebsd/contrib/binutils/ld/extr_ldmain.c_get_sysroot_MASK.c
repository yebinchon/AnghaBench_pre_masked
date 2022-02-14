
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char const* VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3 (int VAR_3, char **VAR_4)
{
  int VAR_5;
  const char *VAR_6;

  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
    if (FUNC_0 (VAR_4[VAR_5], "--sysroot="))
      return VAR_4[VAR_5] + FUNC_2 ("--sysroot=");

  VAR_6 = FUNC_1 (VAR_0);
  if (VAR_6)
    return VAR_6;

  VAR_6 = FUNC_1 (VAR_2);
  if (VAR_6)
    return VAR_6;

  return VAR_1;
}
