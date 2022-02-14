
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;
struct unw_reg_info {scalar_t__ where; int when; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1 (struct unw_reg_info **VAR_1, struct unw_reg_info *VAR_2,
   unw_word VAR_3)
{
  struct unw_reg_info *VAR_4;

  for (VAR_4 = *VAR_1; VAR_4 <= VAR_2; ++VAR_4)
    {
      if (VAR_4->where == VAR_0)
 {
   VAR_4->when = VAR_3;
   *VAR_1 = VAR_4 + 1;
   return;
 }
    }

  FUNC_0 ();
}
