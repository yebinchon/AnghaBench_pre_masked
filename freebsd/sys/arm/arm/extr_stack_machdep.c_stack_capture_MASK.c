
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int * registers; } ;
struct stack {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct stack*,int ) ;
 int FUNC_1 (struct stack*) ;
 scalar_t__ FUNC_2 (struct unwind_state*,int) ;

__attribute__((used)) static void
FUNC_3(struct stack *VAR_1, struct unwind_state *VAR_2)
{

 FUNC_1(VAR_1);
 while (FUNC_2(VAR_2, 1) == 0) {
  if (FUNC_0(VAR_1, VAR_2->registers[VAR_0]) == -1)
   break;
 }
}
