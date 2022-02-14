
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  static int VAR_2 = 0;
  int VAR_3;

  if (VAR_2 == 1)
    return;

  VAR_1 = FUNC_0 (256 * sizeof (short));

  for (VAR_3 = 0; VAR_3 <= 255; VAR_3++)
    {
      int VAR_4;
      unsigned int VAR_5;

      VAR_5 = VAR_3 << 8;

      for (VAR_4 = 0; VAR_4 < 8; ++VAR_4)
 {
   VAR_5 <<= 1;

   if (VAR_5 & 0x10000)
     VAR_5 ^= VAR_0;
 }

      VAR_1[VAR_3] = VAR_5;
    }

  VAR_2 = 1;
}
