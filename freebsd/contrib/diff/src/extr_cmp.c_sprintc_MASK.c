
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, unsigned char VAR_1)
{
  if (! FUNC_0 (VAR_1))
    {
      if (VAR_1 >= 128)
 {
   *VAR_0++ = 'M';
   *VAR_0++ = '-';
   VAR_1 -= 128;
 }
      if (VAR_1 < 32)
 {
   *VAR_0++ = '^';
   VAR_1 += 64;
 }
      else if (VAR_1 == 127)
 {
   *VAR_0++ = '^';
   VAR_1 = '?';
 }
    }

  *VAR_0++ = VAR_1;
  *VAR_0 = 0;
}
