
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (unsigned long VAR_2, char *VAR_3, int VAR_4, int *VAR_5)
{
  int VAR_6 = (VAR_4 / 6);

  if ((VAR_4 % 12) != 0)
    {
      FUNC_0 (VAR_1,
     "Fast encoding bitcount must be a multiple of 12bits: %dbit%s\n", VAR_4, (VAR_4 == 1) ? "" : "s");
      return (0);
    }
  if (VAR_4 > 36)
    {
      FUNC_0 (VAR_1,
     "Fast encoding cannot process more than 36bits at the moment: %dbits\n", VAR_4);
      return (0);
    }


  if (VAR_5 != ((void*)0))
    {
      switch (VAR_4)
 {
 case 36:
   *VAR_5 += ((VAR_2 >> 24) & 0xFFF);
 case 24:
   *VAR_5 += ((VAR_2 >> 12) & 0xFFF);
 case 12:
   *VAR_5 += ((VAR_2 >> 0) & 0xFFF);
 }
    }

  do
    {
      VAR_4 -= 6;
      *VAR_3++ = VAR_0[(VAR_2 >> VAR_4) & 0x3F];
    }
  while (VAR_4 > 0);

  return (VAR_6);
}
