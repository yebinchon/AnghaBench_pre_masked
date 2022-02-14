
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;



__attribute__((used)) static unw_word
FUNC_0 (const unsigned char **VAR_0)
{
  unsigned VAR_1 = 0;
  unw_word VAR_2, VAR_3 = 0;
  const unsigned char *VAR_4 = *VAR_0;

  while (1)
    {
      VAR_2 = *VAR_4++;
      VAR_3 |= (VAR_2 & 0x7f) << VAR_1;

      if ((VAR_2 & 0x80) == 0)
 break;

      VAR_1 += 7;
    }

  *VAR_0 = VAR_4;

  return VAR_3;
}
