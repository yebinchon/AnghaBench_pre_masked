
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_varpool_node {scalar_t__ force_output; scalar_t__ finalized; scalar_t__ needed; struct cgraph_varpool_node* next_needed; int decl; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* VAR_0 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct cgraph_varpool_node*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  struct cgraph_varpool_node *VAR_3, *VAR_4 = VAR_0;

  FUNC_6 ();

  if (VAR_1 || VAR_2)
    return;

  while (VAR_4)
    {
      tree VAR_5 = VAR_4->decl;
      VAR_3 = VAR_4->next_needed;
      VAR_4->needed = 0;

      if (VAR_4->finalized
   && ((FUNC_1 (VAR_5)
        && FUNC_3 (FUNC_0 (VAR_5)))
       || VAR_4->force_output
       || FUNC_7 (VAR_4, VAR_5)





       || FUNC_2 (VAR_5)))
 FUNC_5 (VAR_4);

      VAR_4 = VAR_3;
    }

  FUNC_8 ();
  FUNC_4 ();
}
