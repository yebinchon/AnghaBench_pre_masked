
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HARD_REG_SET ;


 scalar_t__ FUNC_0 (int const,unsigned int) ;
 unsigned int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline bool
FUNC_2 (const HARD_REG_SET VAR_0, enum machine_mode VAR_1,
    unsigned int VAR_2)
{
  unsigned int VAR_3;

  if (FUNC_0 (VAR_0, VAR_2))
    return 1;

  VAR_3 = FUNC_1 (VAR_1, VAR_2);
  while (++VAR_2 < VAR_3)
    if (FUNC_0 (VAR_0, VAR_2))
      return 1;

  return 0;
}
