
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char unichar ;
typedef int rc_uint_type ;


 int* VAR_0 ;

__attribute__((used)) static rc_uint_type
FUNC_0 (unichar VAR_1)
{
  rc_uint_type VAR_2 = 10, VAR_3 = 0, VAR_4;

  if (VAR_1 == '0')
    {
      VAR_2 = 8;
      switch (VAR_0[0])
 {
 case 'x': case 'X': VAR_2 = 16; VAR_0++; break;
 case 'o': case 'O': VAR_2 = 8; VAR_0++; break;
 case 'b': case 'B': VAR_2 = 2; VAR_0++; break;
 }
    }
  else
    VAR_3 = (rc_uint_type) (VAR_1 - '0');

  while ((VAR_1 = VAR_0[0]) != 0)
    {
      if (VAR_1 >= 'A' && VAR_1 <= 'F')
 VAR_4 = (rc_uint_type) (VAR_1 - 'A') + 10;
      else if (VAR_1 >= 'a' && VAR_1 <= 'f')
 VAR_4 = (rc_uint_type) (VAR_1 - 'a') + 10;
      else if (VAR_1 >= '0' && VAR_1 <= '9')
 VAR_4 = (rc_uint_type) (VAR_1 - '0');
      else
 break;
      VAR_3 *= VAR_2;
      VAR_3 += VAR_4;
      ++VAR_0;
    }
  if (VAR_0[0] == 'U' || VAR_0[0] == 'u')
    VAR_0++;
  if (VAR_0[0] == 'L' || VAR_0[0] == 'l')
    VAR_0++;
  if (VAR_0[0] == 'L' || VAR_0[0] == 'l')
    VAR_0++;
  return VAR_3;
}
