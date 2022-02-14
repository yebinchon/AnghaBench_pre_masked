
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static valueT
FUNC_0 (char *VAR_1, int VAR_2)
{
  valueT VAR_3 = 0;
  unsigned char *VAR_4 = (unsigned char *)VAR_1;

  if (VAR_0)
    {
      while (VAR_2--)
        {
          VAR_3 <<= 8;
          VAR_3 |= (*VAR_4++ & 255);
        }
    }
  else
    {
      while (VAR_2--)
        {
          VAR_3 <<= 8;
          VAR_3 |= (VAR_4[VAR_2] & 255);
        }
    }

  return VAR_3;
}
