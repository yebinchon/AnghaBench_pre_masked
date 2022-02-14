
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offsetT ;



__attribute__((used)) static inline int
FUNC_0 (char *VAR_0, offsetT VAR_1)
{
  register char *VAR_2 = VAR_0;
  register int VAR_3;

  do
    {
      unsigned VAR_4 = (VAR_1 & 0x7f);




      VAR_1 = (VAR_1 >> 7) | ~(-(offsetT)1 >> 7);

      VAR_3 = !((((VAR_1 == 0) && ((VAR_4 & 0x40) == 0))
  || ((VAR_1 == -1) && ((VAR_4 & 0x40) != 0))));
      if (VAR_3)
 VAR_4 |= 0x80;

      *VAR_0++ = VAR_4;
    }
  while (VAR_3);

  return VAR_0 - VAR_2;
}
