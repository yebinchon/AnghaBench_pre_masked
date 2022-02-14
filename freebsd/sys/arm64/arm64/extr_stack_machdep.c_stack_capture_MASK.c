
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct unwind_state {scalar_t__ pc; scalar_t__ fp; } ;
struct stack {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stack*,scalar_t__) ;
 int FUNC_2 (struct stack*) ;
 int FUNC_3 (struct unwind_state*) ;

__attribute__((used)) static void
FUNC_4(struct stack *VAR_0, struct unwind_state *VAR_1)
{

 FUNC_2(VAR_0);
 while (1) {
  FUNC_3(VAR_1);
  if (!FUNC_0((vm_offset_t)VAR_1->fp) ||
       !FUNC_0((vm_offset_t)VAR_1->pc))
   break;
  if (FUNC_1(VAR_0, VAR_1->pc) == -1)
   break;
 }
}
