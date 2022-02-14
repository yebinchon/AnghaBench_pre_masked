
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_stack {int depth; int * name; int start_addr; int old_blocks; int * params; int * locals; } ;
typedef int CORE_ADDR ;


 struct context_stack* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,int) ;

struct context_stack *
FUNC_1 (int VAR_6, CORE_ADDR VAR_7)
{
  struct context_stack *VAR_8;

  if (VAR_1 == VAR_2)
    {
      VAR_2 *= 2;
      VAR_0 = (struct context_stack *)
 FUNC_0 ((char *) VAR_0,
    (VAR_2 * sizeof (struct context_stack)));
    }

  VAR_8 = &VAR_0[VAR_1++];
  VAR_8->depth = VAR_6;
  VAR_8->locals = VAR_3;
  VAR_8->params = VAR_4;
  VAR_8->old_blocks = VAR_5;
  VAR_8->start_addr = VAR_7;
  VAR_8->name = ((void*)0);

  VAR_3 = ((void*)0);
  VAR_4 = ((void*)0);

  return VAR_8;
}
