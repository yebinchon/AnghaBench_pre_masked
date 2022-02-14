
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int pc; int section; } ;
struct breakpoint {int disposition; int number; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct symtab_and_line*) ;
 struct breakpoint* FUNC_2 (struct symtab_and_line,int) ;

__attribute__((used)) static struct breakpoint *
FUNC_3 (CORE_ADDR VAR_1, enum bptype VAR_2)
{
  static int VAR_3 = -1;
  struct symtab_and_line VAR_4;
  struct breakpoint *VAR_5;

  FUNC_1 (&VAR_4);

  VAR_4.pc = VAR_1;
  VAR_4.section = FUNC_0 (VAR_4.pc);

  VAR_5 = FUNC_2 (VAR_4, VAR_2);
  VAR_5->number = VAR_3--;
  VAR_5->disposition = VAR_0;

  return VAR_5;
}
