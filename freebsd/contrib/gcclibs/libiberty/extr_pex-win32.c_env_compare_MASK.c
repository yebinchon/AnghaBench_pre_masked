
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const char *VAR_2;
  const char *VAR_3;
  unsigned char VAR_4;
  unsigned char VAR_5;

  VAR_2 = *(const char **) VAR_0;
  VAR_3 = *(const char **) VAR_1;
  do
    {
      VAR_4 = (unsigned char) FUNC_0 (*VAR_2++);
      VAR_5 = (unsigned char) FUNC_0 (*VAR_3++);

      if (VAR_4 == '=')
        VAR_4 = '\0';

      if (VAR_5 == '=')
        VAR_5 = '\0';
    }
  while (VAR_4 == VAR_5 && VAR_4 != '\0');

  return VAR_4 - VAR_5;
}
