
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_reg_info {scalar_t__ where; unsigned long val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (unsigned long *VAR_2, unsigned long VAR_3,
    struct unw_reg_info *VAR_4, struct unw_reg_info *VAR_5)
{
  struct unw_reg_info *VAR_6;

  for (VAR_6 = VAR_5; VAR_6 >= VAR_4; --VAR_6)
    {
      if (VAR_6->where == VAR_1)
 {
   VAR_6->where = VAR_0;
   *VAR_2 -= VAR_3;
   VAR_6->val = *VAR_2;
 }
    }
}
