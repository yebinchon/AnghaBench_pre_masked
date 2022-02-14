
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static size_t
FUNC_1 (unsigned char *VAR_0, const unsigned char *VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;
  int VAR_4;
  unsigned VAR_5;
  unsigned long VAR_6;


  for (VAR_5 = *VAR_1; VAR_5 & 0x80; VAR_5 <<= 1)
    VAR_3++;

  VAR_6 = *VAR_1 & (0x7F >> VAR_3);
  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
    {
      VAR_6 = (VAR_6 << 6) | (*++VAR_1 & 0x3F);


      if ((*VAR_1 & ~0x3F) != 0x80)
 FUNC_0 ();
    }

  *VAR_0++ = '\\';
  *VAR_0++ = 'U';
  for (VAR_2 = 7; VAR_2 >= 0; VAR_2--)
    *VAR_0++ = "0123456789abcdef"[(VAR_6 >> (4 * VAR_2)) & 0xF];
  return VAR_3;
}
