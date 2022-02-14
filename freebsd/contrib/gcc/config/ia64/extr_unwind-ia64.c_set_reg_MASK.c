
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_reg_info {unsigned long val; int where; int when; } ;
typedef enum unw_where { ____Placeholder_unw_where } unw_where ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct unw_reg_info *VAR_1, enum unw_where VAR_2,
  int VAR_3, unsigned long VAR_4)
{
  VAR_1->val = VAR_4;
  VAR_1->where = VAR_2;
  if (VAR_1->when == VAR_0)
    VAR_1->when = VAR_3;
}
