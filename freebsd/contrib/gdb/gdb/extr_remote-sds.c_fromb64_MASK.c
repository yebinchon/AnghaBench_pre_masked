
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;

  if (VAR_2 % 4 != 0)
    FUNC_0 ("bad length");

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4)
    {

      VAR_4 = (*VAR_0++ - '0') << 18;
      VAR_4 |= (*VAR_0++ - '0') << 12;
      VAR_4 |= (*VAR_0++ - '0') << 6;
      VAR_4 |= (*VAR_0++ - '0');



      *VAR_1++ = (VAR_4 >> 16) & 0xff;
      *VAR_1++ = (VAR_4 >> 8) & 0xff;
      *VAR_1++ = VAR_4 & 0xff;
    }

  return (VAR_2 / 4) * 3;
}
