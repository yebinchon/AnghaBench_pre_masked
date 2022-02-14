
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (char *VAR_0, unsigned int VAR_1)
{
  int VAR_2 = 0;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
    {
      if (VAR_1 & 1)
 {
   if (VAR_2)
     *VAR_0++ = ',';
   *VAR_0++ = 'r';
   *VAR_0++ = VAR_3 + 4 + '0';
   VAR_2 = 1;
 }
      VAR_1 >>= 1;
    }
  *VAR_0 = '\0';
}
