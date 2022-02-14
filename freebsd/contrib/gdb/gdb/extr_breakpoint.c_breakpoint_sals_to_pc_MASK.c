
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; TYPE_1__* sals; } ;
struct TYPE_2__ {int pc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (struct symtabs_and_lines *VAR_0,
         char *VAR_1)
{
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->nelts; VAR_2++)
    {
      FUNC_2 (&VAR_0->sals[VAR_2]);
      if (FUNC_0 (VAR_0->sals[VAR_2].pc))
 {
   if (VAR_1 == ((void*)0))
     FUNC_1 ("Cannot break without a running program.");
   else
     FUNC_1 ("Cannot break on %s without a running program.",
     VAR_1);
 }
    }
}
