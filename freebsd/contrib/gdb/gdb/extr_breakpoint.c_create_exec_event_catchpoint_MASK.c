
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; int * symtab; scalar_t__ pc; } ;
struct breakpoint {int thread; int disposition; int enable_state; int * addr_string; int * cond_string; int * cond; scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct symtab_and_line*) ;
 int FUNC_1 (struct breakpoint*) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct breakpoint* FUNC_4 (struct symtab_and_line,int ) ;
 int FUNC_5 (char*) ;

void
FUNC_6 (int VAR_5, char *VAR_6)
{
  struct symtab_and_line VAR_7;
  struct breakpoint *VAR_8;
  int VAR_9 = -1;

  FUNC_0 (&VAR_7);
  VAR_7.pc = 0;
  VAR_7.symtab = ((void*)0);
  VAR_7.line = 0;

  VAR_8 = FUNC_4 (VAR_7, VAR_0);
  FUNC_3 (VAR_2 + 1);
  VAR_8->number = VAR_2;
  VAR_8->cond = ((void*)0);
  VAR_8->cond_string = (VAR_6 == ((void*)0)) ?
    ((void*)0) : FUNC_2 (VAR_6, FUNC_5 (VAR_6));
  VAR_8->thread = VAR_9;
  VAR_8->addr_string = ((void*)0);
  VAR_8->enable_state = VAR_1;
  VAR_8->disposition = VAR_5 ? VAR_3 : VAR_4;

  FUNC_1 (VAR_8);
}
