
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varasm_status {scalar_t__ deferred_constants; int pool; } ;
struct function {struct varasm_status* varasm; } ;


 int FUNC_0 () ;
 struct varasm_status* FUNC_1 (int) ;

void
FUNC_2 (struct function *VAR_0)
{
  struct varasm_status *VAR_1;

  VAR_1 = FUNC_1 (sizeof (struct varasm_status));
  VAR_0->varasm = VAR_1;

  VAR_1->pool = FUNC_0 ();
  VAR_1->deferred_constants = 0;
}
