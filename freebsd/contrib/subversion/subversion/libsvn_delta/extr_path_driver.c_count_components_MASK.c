
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
  int VAR_1 = 1;
  const char *VAR_2 = VAR_0;

  if ((FUNC_1(VAR_0) == 1) && (VAR_0[0] == '/'))
    return 0;

  do
    {
      VAR_2++;
      VAR_2 = FUNC_0(VAR_2, '/');
      if (VAR_2)
        VAR_1++;
    }
  while (VAR_2);

  return VAR_1;
}
