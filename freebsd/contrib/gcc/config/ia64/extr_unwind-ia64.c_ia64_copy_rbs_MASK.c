
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {unsigned long regstk_top; unsigned long rnat; } ;


 int FUNC_0 (char*,char*,long) ;

__attribute__((used)) static void
FUNC_1 (struct _Unwind_Context *VAR_0, unsigned long VAR_1,
               unsigned long VAR_2, long VAR_3, unsigned long VAR_4)
{
  long VAR_5;
  unsigned long VAR_6;
  unsigned long VAR_7, VAR_8;

  VAR_3 <<= 3;
  VAR_4 &= (1UL << ((VAR_1 >> 3) & 0x3f)) - 1;
  VAR_6 = VAR_2 >= VAR_0->regstk_top
      ? VAR_0->rnat : *(unsigned long *) (VAR_2 | 0x1f8);
  VAR_6 &= ~((1UL << ((VAR_2 >> 3) & 0x3f)) - 1);

  VAR_6 &= ~(1UL << 63);
  VAR_7 = ((VAR_1 - VAR_2) >> 3) & 0x3f;
  if ((VAR_1 & 0x1f8) < (VAR_2 & 0x1f8))
    VAR_7--;
  VAR_8 = 0x3f - VAR_7;
  if ((VAR_1 & 0x1f8) >= (VAR_2 & 0x1f8))
    {
      VAR_5 = ~VAR_1 & 0x1f8;
      goto first;
    }
  VAR_5 = ~VAR_2 & 0x1f8;
  goto second;
  while (VAR_3 > 0)
    {
      VAR_6 = VAR_2 >= VAR_0->regstk_top
   ? VAR_0->rnat : *(unsigned long *) (VAR_2 | 0x1f8);

      VAR_6 &= ~(1UL << 63);
      VAR_5 = VAR_8 << 3;
first:
      if (VAR_5 > VAR_3)
        VAR_5 = VAR_3;
      FUNC_0 ((char *) VAR_1, (char *) VAR_2, VAR_5);
      VAR_1 += VAR_5;
      VAR_2 += VAR_5;
      VAR_3 -= VAR_5;
      VAR_4 |= (VAR_6 << VAR_7) & ~(1UL << 63);
      if (VAR_3 <= 0)
        break;
      *(long *) VAR_1 = VAR_4;
      VAR_1 += 8;
      VAR_4 = 0;
      VAR_5 = VAR_7 << 3;
second:
      if (VAR_5 > VAR_3)
        VAR_5 = VAR_3;
      FUNC_0 ((char *) VAR_1, (char *) VAR_2, VAR_5);
      VAR_1 += VAR_5;
      VAR_2 += VAR_5 + 8;
      VAR_3 -= VAR_5 + 8;
      VAR_4 |= (VAR_6 >> VAR_8);
    }
  if ((VAR_1 & 0x1f8) == 0x1f8)
    {
      *(long *) VAR_1 = VAR_4;
      VAR_1 += 8;
      VAR_4 = 0;
    }


  VAR_0->regstk_top = VAR_1 & ~0x1ffUL;
  VAR_0->rnat = VAR_4;
}
