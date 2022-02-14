
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc_uint_type ;
typedef char bfd_byte ;


 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1 (rc_uint_type VAR_0, const bfd_byte *VAR_1)
{
  int VAR_2;
  rc_uint_type VAR_3;
  rc_uint_type VAR_4;

  if (VAR_0 <= 1)
    return 0;

  VAR_2 = 0;
  for (VAR_4 = 0, VAR_3 = 0; VAR_4 < VAR_0; VAR_4++)
    {
      if (! FUNC_0 (VAR_1[VAR_4]) && VAR_1[VAR_4] != '\n'
         && ! (VAR_1[VAR_4] == '\r' && (VAR_4 + 1) < VAR_0 && VAR_1[VAR_4 + 1] == '\n')
         && VAR_1[VAR_4] != '\t'
   && ! (VAR_1[VAR_4] == 0 && (VAR_4 + 1) != VAR_0))
 {
   if (VAR_1[VAR_4] <= 7)
     return 0;
   VAR_3++;
 }
      else if (VAR_1[VAR_4] == '\n') VAR_2++;
    }
  if (VAR_0 > 80 && ! VAR_2)
    return 0;
  VAR_3 = (((VAR_3 * 10000) + (VAR_4 / 100) - 1)) / VAR_4;
  if (VAR_3 >= 150)
    return 0;
  return 1;
}
