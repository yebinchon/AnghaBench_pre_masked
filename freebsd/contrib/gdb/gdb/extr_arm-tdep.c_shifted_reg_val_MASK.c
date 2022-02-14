
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;
 void* FUNC_1 (unsigned long,int,int) ;
 unsigned long FUNC_2 (int) ;

__attribute__((used)) static unsigned long
FUNC_3 (unsigned long VAR_1, int VAR_2, unsigned long VAR_3,
   unsigned long VAR_4)
{
  unsigned long VAR_5, VAR_6;
  int VAR_7 = FUNC_1 (VAR_1, 0, 3);
  unsigned long VAR_8 = FUNC_1 (VAR_1, 5, 6);

  if (FUNC_0 (VAR_1, 4))
    {
      int VAR_9 = FUNC_1 (VAR_1, 8, 11);
      VAR_6 = (VAR_9 == 15 ? VAR_3 + 8 : FUNC_2 (VAR_9)) & 0xFF;
    }
  else
    VAR_6 = FUNC_1 (VAR_1, 7, 11);

  VAR_5 = (VAR_7 == 15
  ? ((VAR_3 | (VAR_0 ? 0 : VAR_4))
     + (FUNC_0 (VAR_1, 4) ? 12 : 8))
  : FUNC_2 (VAR_7));

  switch (VAR_8)
    {
    case 0:
      VAR_5 = VAR_6 >= 32 ? 0 : VAR_5 << VAR_6;
      break;

    case 1:
      VAR_5 = VAR_6 >= 32 ? 0 : VAR_5 >> VAR_6;
      break;

    case 2:
      if (VAR_6 >= 32)
 VAR_6 = 31;
      VAR_5 = ((VAR_5 & 0x80000000L)
      ? ~((~VAR_5) >> VAR_6) : VAR_5 >> VAR_6);
      break;

    case 3:
      VAR_6 &= 31;
      if (VAR_6 == 0)
 VAR_5 = (VAR_5 >> 1) | (VAR_2 ? 0x80000000L : 0);
      else
 VAR_5 = (VAR_5 >> VAR_6) | (VAR_5 << (32 - VAR_6));
      break;
    }

  return VAR_5 & 0xffffffff;
}
