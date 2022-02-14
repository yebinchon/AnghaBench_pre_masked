
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

char
FUNC_3 (void)
{
  char VAR_1;



  if (FUNC_0 (VAR_1 = *VAR_0++) || VAR_1 == '\001')
    {
      while (FUNC_2 (VAR_1 = *VAR_0++)
      || VAR_1 == '\001')
 ;
      if (FUNC_1 (VAR_1))
 VAR_1 = *VAR_0++;
    }
  *--VAR_0 = 0;
  return (VAR_1);
}
