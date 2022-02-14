
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackmark {scalar_t__ stackp; scalar_t__ stacknleft; scalar_t__ stacknxt; } ;
struct stack_block {scalar_t__ prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stack_block*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_1(struct stackmark *VAR_6)
{
 struct stack_block *VAR_7;

 VAR_0;
 while (VAR_5 != VAR_6->stackp) {
  VAR_7 = VAR_5;
  VAR_5 = VAR_7->prev;
  FUNC_0(VAR_7);
 }
 VAR_4 = VAR_6->stacknxt;
 VAR_3 = VAR_6->stacknleft;
 VAR_2 = VAR_4 + VAR_3;
 VAR_1;
}
