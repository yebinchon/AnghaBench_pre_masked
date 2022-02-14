
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_inst ;



__attribute__((used)) static void
FUNC_0 (t_inst VAR_0, unsigned long *VAR_1,
   unsigned long *VAR_2)
{
  int VAR_3;

  if ((VAR_0 & 0xffe00000) == 0xafa00000
      || (VAR_0 & 0xffe00000) == 0xafc00000
      || (VAR_0 & 0xffe00000) == 0xffa00000)
    {





      VAR_3 = (VAR_0 & 0x001f0000) >> 16;
      *VAR_1 |= (1 << VAR_3);
    }
  else if ((VAR_0 & 0xffe00000) == 0xe7a00000
    || (VAR_0 & 0xffe00000) == 0xe7c00000
    || (VAR_0 & 0xffe00000) == 0xf7a00000)

    {
      VAR_3 = ((VAR_0 & 0x001f0000) >> 16);
      *VAR_2 |= (1 << VAR_3);
    }
}
