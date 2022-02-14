
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 long FUNC_5 (int ) ;
 char* VAR_0 ;
 int FUNC_6 (char*,char,char) ;

__attribute__((used)) static long
FUNC_7 (void)
{
  int VAR_1 = 0;
  long VAR_2 = 0;

  if (*VAR_0 == '-')
    {
      ++VAR_0;
      VAR_1 = 1;
    }
  if (!FUNC_0 (*VAR_0))
    FUNC_3 (FUNC_2("expected simple number"));
  if (VAR_0[0] == '0')
    {
      if (VAR_0[1] == 'x')
        {
          VAR_0 += 2;
          while (FUNC_1 (*VAR_0))
            {
              VAR_2 <<= 4;
              VAR_2 |= FUNC_5 (*VAR_0++);
            }
          return VAR_1 ? -VAR_2 : VAR_2;
        }
      else
        {
          ++VAR_0;
          while (FUNC_0 (*VAR_0))
            {
              VAR_2 <<= 3;
              VAR_2 |= *VAR_0++ - '0';
            }
          return VAR_1 ? -VAR_2 : VAR_2;
        }
    }
  if (!FUNC_0 (*VAR_0))
    {
      FUNC_6 (FUNC_2(" *input_line_pointer == '%c' 0x%02x\n"), *VAR_0, *VAR_0);
      FUNC_4 (FUNC_2("invalid number"));
      return -1;
    }
  while (FUNC_0 (*VAR_0))
    {
      VAR_2 *= 10;
      VAR_2 += *VAR_0++ - '0';
    }
  return VAR_1 ? -VAR_2 : VAR_2;
}
