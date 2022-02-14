
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {int dummy; } ;
struct df_ref {int flags; int insn; } ;
struct df_link {struct df_ref* ref; scalar_t__ next; } ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct df_ref*) ;
 struct df_link* FUNC_2 (struct df_ref*) ;
 struct invariant* FUNC_3 (struct df_ref*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static struct invariant *
FUNC_5 (struct df_ref *VAR_2)
{
  struct df_link *VAR_3;
  struct df_ref *VAR_4;
  basic_block VAR_5 = FUNC_0 (VAR_2->insn), VAR_6;

  if (VAR_2->flags & VAR_1)
    return ((void*)0);

  VAR_3 = FUNC_2 (VAR_2);
  if (!VAR_3 || VAR_3->next)
    return ((void*)0);
  VAR_4 = VAR_3->ref;
  if (!FUNC_3 (VAR_4))
    return ((void*)0);

  VAR_6 = FUNC_1 (VAR_4);
  if (!FUNC_4 (VAR_0, VAR_5, VAR_6))
    return ((void*)0);
  return FUNC_3 (VAR_4);
}
