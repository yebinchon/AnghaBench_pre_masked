
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0 (unsigned int VAR_1)
{
  unsigned int VAR_2, VAR_3;

  if (VAR_1 <= 0xff)
    return VAR_1;

  for (VAR_3 = 1; VAR_3 <= 24; VAR_3++)
    {
      VAR_2 = VAR_1 >> VAR_3;
      if ((VAR_1 & ~(0xff << VAR_3)) == 0)
 return ((VAR_1 >> VAR_3) & 0x7f) | ((32 - VAR_3) << 7);
    }

  VAR_2 = VAR_1 & 0xff;
  if (VAR_1 == ((VAR_2 << 16) | VAR_2))
    return 0x100 | VAR_2;
  if (VAR_1 == ((VAR_2 << 24) | (VAR_2 << 16) | (VAR_2 << 8) | VAR_2))
    return 0x300 | VAR_2;

  VAR_2 = VAR_1 & 0xff00;
  if (VAR_1 == ((VAR_2 << 16) | VAR_2))
    return 0x200 | (VAR_2 >> 8);

  return VAR_0;
}
