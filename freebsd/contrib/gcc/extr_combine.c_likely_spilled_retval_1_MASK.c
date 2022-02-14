
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct likely_spilled_retval_info {unsigned int regno; unsigned int nregs; unsigned int mask; } ;
typedef int rtx ;


 size_t FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned int** VAR_0 ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_1, rtx VAR_2, void *VAR_3)
{
  struct likely_spilled_retval_info *VAR_4 = VAR_3;
  unsigned VAR_5, VAR_6;
  unsigned VAR_7;

  if (!FUNC_2 (FUNC_3 (VAR_2, 0)))
    return;
  VAR_5 = FUNC_1 (VAR_1);
  if (VAR_5 >= VAR_4->regno + VAR_4->nregs)
    return;
  VAR_6 = VAR_0[VAR_5][FUNC_0 (VAR_1)];
  if (VAR_5 + VAR_6 <= VAR_4->regno)
    return;
  VAR_7 = (2U << (VAR_6 - 1)) - 1;
  if (VAR_5 < VAR_4->regno)
    VAR_7 >>= VAR_4->regno - VAR_5;
  else
    VAR_7 <<= VAR_5 - VAR_4->regno;
  VAR_4->mask &= VAR_7;
}
