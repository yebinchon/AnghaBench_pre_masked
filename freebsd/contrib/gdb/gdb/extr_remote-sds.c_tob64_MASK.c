
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1 (unsigned char *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;
  char *VAR_5;

  if (VAR_2 % 3 != 0)
    FUNC_0 ("bad length");

  VAR_5 = VAR_1;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 3)
    {

      VAR_4 = ((long) *VAR_0++) << 16;
      VAR_4 |= ((long) *VAR_0++) << 8;
      VAR_4 |= ((long) *VAR_0++);


      *VAR_5++ = ((VAR_4 >> 18) & 0x3f) + '0';
      *VAR_5++ = ((VAR_4 >> 12) & 0x3f) + '0';
      *VAR_5++ = ((VAR_4 >> 6) & 0x3f) + '0';
      *VAR_5++ = (VAR_4 & 0x3f) + '0';
    }
  return (VAR_5 - VAR_1);
}
