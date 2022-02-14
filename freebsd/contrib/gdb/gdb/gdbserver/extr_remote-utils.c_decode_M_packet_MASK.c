
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char) ;

void
FUNC_2 (char *VAR_0, CORE_ADDR *VAR_1, unsigned int *VAR_2,
   char *VAR_3)
{
  int VAR_4 = 0;
  char VAR_5;
  *VAR_1 = *VAR_2 = 0;

  while ((VAR_5 = VAR_0[VAR_4++]) != ',')
    {
      *VAR_1 = *VAR_1 << 4;
      *VAR_1 |= FUNC_1 (VAR_5) & 0x0f;
    }

  while ((VAR_5 = VAR_0[VAR_4++]) != ':')
    {
      *VAR_2 = *VAR_2 << 4;
      *VAR_2 |= FUNC_1 (VAR_5) & 0x0f;
    }

  FUNC_0 (&VAR_0[VAR_4++], VAR_3, *VAR_2);
}
