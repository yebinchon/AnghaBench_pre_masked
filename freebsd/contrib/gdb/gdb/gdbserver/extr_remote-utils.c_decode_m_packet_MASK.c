
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (char) ;

void
FUNC_1 (char *VAR_0, CORE_ADDR *VAR_1, unsigned int *VAR_2)
{
  int VAR_3 = 0, VAR_4 = 0;
  char VAR_5;
  *VAR_1 = *VAR_2 = 0;

  while ((VAR_5 = VAR_0[VAR_3++]) != ',')
    {
      *VAR_1 = *VAR_1 << 4;
      *VAR_1 |= FUNC_0 (VAR_5) & 0x0f;
    }

  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
    {
      if ((VAR_5 = VAR_0[VAR_3++]) == 0)
 break;
      *VAR_2 = *VAR_2 << 4;
      *VAR_2 |= FUNC_0 (VAR_5) & 0x0f;
    }
}
