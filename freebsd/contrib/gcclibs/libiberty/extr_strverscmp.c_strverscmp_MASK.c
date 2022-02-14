
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;






int
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
  const unsigned char *VAR_2 = (const unsigned char *) VAR_0;
  const unsigned char *VAR_3 = (const unsigned char *) VAR_1;
  unsigned char VAR_4, VAR_5;
  int VAR_6;
  int VAR_7;



  static const unsigned int VAR_8[] =
    {

                 129, 130, 128, 129,
                 129, 130, 130, 130,
                 129, 131, 131, 131,
                 129, 131, 128, 128
    };

  static const int VAR_9[] =
    {



                 133, 133, 133, 133, 133, 132, 133, 133,
                 133, 133, 133, 133, 133, 133, 133, 133,
                 133, -1, -1, 133, +1, 132, 132, 133,
                 +1, 132, 132, 133, 133, 133, 133, 133,
                 133, 133, 133, 133, 133, 132, 133, 133,
                 133, 133, 133, 133, 133, 133, 133, 133,
                 133, +1, +1, 133, -1, 133, 133, 133,
                 -1, 133, 133, 133
    };

  if (VAR_2 == VAR_3)
    return 0;

  VAR_4 = *VAR_2++;
  VAR_5 = *VAR_3++;

  VAR_6 = 129 | ((VAR_4 == '0') + (FUNC_0 (VAR_4) != 0));

  while ((VAR_7 = VAR_4 - VAR_5) == 0 && VAR_4 != '\0')
    {
      VAR_6 = VAR_8[VAR_6];
      VAR_4 = *VAR_2++;
      VAR_5 = *VAR_3++;
      VAR_6 |= (VAR_4 == '0') + (FUNC_0 (VAR_4) != 0);
    }

  VAR_6 = VAR_9[VAR_6 << 2 | (((VAR_5 == '0') + (FUNC_0 (VAR_5) != 0)))];

  switch (VAR_6)
    {
    case 133:
      return VAR_7;

    case 132:
      while (FUNC_0 (*VAR_2++))
 if (!FUNC_0 (*VAR_3++))
   return 1;

      return FUNC_0 (*VAR_3) ? -1 : VAR_7;

    default:
      return VAR_6;
    }
}
