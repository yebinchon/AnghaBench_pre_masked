
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (unsigned short VAR_0,
  unsigned short VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4)
{
  int VAR_5;

  if ((VAR_0 & 0xf800) == 0xf000)
    {
      VAR_5 = ((VAR_0 & 0x1f) << 11) | (VAR_0 & 0x7e0);
      if (VAR_5 & 0x8000)
 VAR_5 = 0 - (0x10000 - (VAR_5 & 0xffff));
      return VAR_5 | (VAR_1 & 0x1f);
    }
  else
    {
      int VAR_6 = 1 << VAR_2;
      int VAR_7 = VAR_6 - 1;
      int VAR_8 = VAR_6 >> 1;

      VAR_5 = VAR_1 & VAR_7;
      if (VAR_4 && (VAR_5 & VAR_8))
 VAR_5 = 0 - (VAR_6 - VAR_5);
      return VAR_5 * VAR_3;
    }
}
