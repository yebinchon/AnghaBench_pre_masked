
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unw_word ;
struct unw_state_record {scalar_t__ when_target; scalar_t__ region_start; unsigned long pr_val; unsigned long pr_mask; scalar_t__ region_len; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1 (unsigned char VAR_0, unw_word VAR_1, struct unw_state_record *VAR_2)
{
  if (VAR_2->when_target <= VAR_2->region_start + FUNC_0 ((int)VAR_1, VAR_2->region_len - 1))
    return 0;
  if (VAR_0 > 0)
    {
      if ((VAR_2->pr_val & (1UL << VAR_0)) == 0)
 return 0;
      VAR_2->pr_mask |= (1UL << VAR_0);
    }
  return 1;
}
