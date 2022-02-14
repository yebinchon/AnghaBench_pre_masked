
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;


 int FUNC_0 () ;

void
FUNC_1 (char *VAR_0, valueT VAR_1, int VAR_2)
{
  if (VAR_2 <= 0)
    FUNC_0 ();
  while (VAR_2--)
    {
      *VAR_0++ = VAR_1 & 0xff;
      VAR_1 >>= 8;
    }
}
