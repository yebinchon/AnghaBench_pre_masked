
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_link {int ref; struct df_link* next; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;

void
FUNC_6 (struct df_link *VAR_0, FILE *VAR_1)
{
  FUNC_5 (VAR_1, "{ ");
  for (; VAR_0; VAR_0 = VAR_0->next)
    {
      FUNC_5 (VAR_1, "%c%d(bb %d insn %d) ",
        FUNC_4 (VAR_0->ref) ? 'd' : 'u',
        FUNC_1 (VAR_0->ref),
        FUNC_0 (VAR_0->ref),
        FUNC_2 (VAR_0->ref) ? FUNC_3 (VAR_0->ref) : -1);
    }
  FUNC_5 (VAR_1, "}");
}
