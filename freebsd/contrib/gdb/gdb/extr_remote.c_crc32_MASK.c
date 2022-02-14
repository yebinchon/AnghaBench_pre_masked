
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0 (unsigned char *VAR_1, int VAR_2, unsigned int VAR_3)
{
  if (!VAR_0[1])
    {

      int VAR_4, VAR_5;
      unsigned int VAR_6;

      for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
 {
   for (VAR_6 = VAR_4 << 24, VAR_5 = 8; VAR_5 > 0; --VAR_5)
     VAR_6 = VAR_6 & 0x80000000 ? (VAR_6 << 1) ^ 0x04c11db7 : (VAR_6 << 1);
   VAR_0[VAR_4] = VAR_6;
 }
    }

  while (VAR_2--)
    {
      VAR_3 = (VAR_3 << 8) ^ VAR_0[((VAR_3 >> 24) ^ *VAR_1) & 255];
      VAR_1++;
    }
  return VAR_3;
}
