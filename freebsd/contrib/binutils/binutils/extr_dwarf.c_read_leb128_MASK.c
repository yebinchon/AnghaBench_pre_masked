
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;



__attribute__((used)) static unsigned long int
FUNC_0 (unsigned char *VAR_0, unsigned int *VAR_1, int VAR_2)
{
  unsigned long int VAR_3 = 0;
  unsigned int VAR_4 = 0;
  unsigned int VAR_5 = 0;
  unsigned char VAR_6;

  do
    {
      VAR_6 = *VAR_0++;
      VAR_4++;

      VAR_3 |= ((unsigned long int) (VAR_6 & 0x7f)) << VAR_5;

      VAR_5 += 7;

    }
  while (VAR_6 & 0x80);

  if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_4;

  if (VAR_2 && (VAR_5 < 8 * sizeof (VAR_3)) && (VAR_6 & 0x40))
    VAR_3 |= -1L << VAR_5;

  return VAR_3;
}
