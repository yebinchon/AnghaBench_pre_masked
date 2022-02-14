
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; int * symtab; scalar_t__ pc; } ;
struct breakpoint {int thread; scalar_t__ forked_inferior_pid; int disposition; int enable_state; int * addr_string; int * cond_string; int * cond; scalar_t__ number; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct symtab_and_line*) ;
 int FUNC_1 (struct breakpoint*) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct breakpoint* FUNC_4 (struct symtab_and_line,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_4, char *VAR_5,
        enum bptype VAR_6)
{
  struct symtab_and_line VAR_7;
  struct breakpoint *VAR_8;
  int VAR_9 = -1;

  FUNC_0 (&VAR_7);
  VAR_7.pc = 0;
  VAR_7.symtab = ((void*)0);
  VAR_7.line = 0;

  VAR_8 = FUNC_4 (VAR_7, VAR_6);
  FUNC_3 (VAR_1 + 1);
  VAR_8->number = VAR_1;
  VAR_8->cond = ((void*)0);
  VAR_8->cond_string = (VAR_5 == ((void*)0)) ?
    ((void*)0) : FUNC_2 (VAR_5, FUNC_5 (VAR_5));
  VAR_8->thread = VAR_9;
  VAR_8->addr_string = ((void*)0);
  VAR_8->enable_state = VAR_0;
  VAR_8->disposition = VAR_4 ? VAR_2 : VAR_3;
  VAR_8->forked_inferior_pid = 0;

  FUNC_1 (VAR_8);
}
