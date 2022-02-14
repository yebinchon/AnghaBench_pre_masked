
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;
struct gdbarch {struct obstack* obstack; int initialized_p; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct obstack*,int ) ;
 int FUNC_2 (struct obstack*) ;

void
FUNC_3 (struct gdbarch *VAR_0)
{
  struct obstack *VAR_1;
  FUNC_0 (VAR_0 != ((void*)0));
  FUNC_0 (!VAR_0->initialized_p);
  VAR_1 = VAR_0->obstack;
  FUNC_1 (VAR_1, 0);
  FUNC_2 (VAR_1);
}
