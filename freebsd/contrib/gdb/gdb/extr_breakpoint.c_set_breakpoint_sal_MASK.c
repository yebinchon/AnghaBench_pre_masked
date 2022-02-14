
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;
struct breakpoint {int thread; scalar_t__ cond; scalar_t__ number; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct breakpoint* FUNC_1 (struct symtab_and_line,int ) ;

struct breakpoint *
FUNC_2 (struct symtab_and_line VAR_2)
{
  struct breakpoint *VAR_3;
  VAR_3 = FUNC_1 (VAR_2, VAR_0);
  FUNC_0 (VAR_1 + 1);
  VAR_3->number = VAR_1;
  VAR_3->cond = 0;
  VAR_3->thread = -1;
  return VAR_3;
}
