
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {scalar_t__ size; int insns; void* pool_insn; void* first_insn; int label; int * execute; int ** constants; int * next; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct constant_pool *
FUNC_3 (void)
{
  struct constant_pool *VAR_2;
  int VAR_3;

  VAR_2 = (struct constant_pool *) FUNC_2 (sizeof *VAR_2);
  VAR_2->next = ((void*)0);
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    VAR_2->constants[VAR_3] = ((void*)0);

  VAR_2->execute = ((void*)0);
  VAR_2->label = FUNC_1 ();
  VAR_2->first_insn = VAR_1;
  VAR_2->pool_insn = VAR_1;
  VAR_2->insns = FUNC_0 (((void*)0));
  VAR_2->size = 0;

  return VAR_2;
}
