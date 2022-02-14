
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe_vm86 {int tf_vm86_gs; } ;
struct db_variable {int dummy; } ;
typedef int db_expr_t ;
struct TYPE_2__ {int tf_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct db_variable *VAR_3, db_expr_t *VAR_4, int VAR_5)
{
 struct trapframe_vm86 *VAR_6;

 if (VAR_2 != ((void*)0) && VAR_2->tf_eflags & VAR_1) {
  VAR_6 = (void *)VAR_2;
  if (VAR_5 == VAR_0)
   *VAR_4 = VAR_6->tf_vm86_gs;
  else
   VAR_6->tf_vm86_gs = *VAR_4;
  return (1);
 }
 if (VAR_5 == VAR_0)
  *VAR_4 = FUNC_1();
 else
  FUNC_0(*VAR_4);
 return (1);
}
