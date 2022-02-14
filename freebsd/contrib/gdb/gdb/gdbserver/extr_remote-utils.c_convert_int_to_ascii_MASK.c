
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int) ;

void
FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3;
  char VAR_4;
  while (VAR_2--)
    {
      VAR_4 = *VAR_0++;
      VAR_3 = ((VAR_4 & 0xf0) >> 4) & 0x0f;
      *VAR_1++ = FUNC_0 (VAR_3);
      VAR_3 = VAR_4 & 0x0f;
      *VAR_1++ = FUNC_0 (VAR_3);
    }
  *VAR_1++ = 0;
}
