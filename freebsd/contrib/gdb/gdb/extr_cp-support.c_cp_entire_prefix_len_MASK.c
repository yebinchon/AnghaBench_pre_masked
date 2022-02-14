
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;

unsigned int
FUNC_2 (const char *VAR_0)
{
  unsigned int VAR_1 = FUNC_0 (VAR_0);
  unsigned int VAR_2 = 0;

  while (VAR_0[VAR_1] != '\0')
    {
      FUNC_1 (VAR_0[VAR_1] == ':');
      VAR_2 = VAR_1;

      VAR_1 += 2;
      VAR_1 += FUNC_0 (VAR_0 + VAR_1);
    }

  return VAR_2;
}
