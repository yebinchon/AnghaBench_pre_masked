
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct cgraph_varpool_node {int externally_visible; scalar_t__ finalized; int decl; struct cgraph_varpool_node* next; } ;
struct TYPE_2__ {int externally_visible; scalar_t__ finalized; } ;
struct cgraph_node {TYPE_1__ local; int decl; struct cgraph_node* next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cgraph_node*) ;
 struct cgraph_node* VAR_1 ;
 int FUNC_3 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* VAR_2 ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7 (struct cgraph_node *VAR_3,
                                          struct cgraph_varpool_node *VAR_4)
{
  struct cgraph_node *VAR_5;
  struct cgraph_varpool_node *VAR_6;

  for (VAR_5 = VAR_1; VAR_5 != VAR_3; VAR_5 = VAR_5->next)
    {
      tree VAR_7 = VAR_5->decl;
      if (FUNC_4 ("used", FUNC_0 (VAR_7)))
 {
   FUNC_5 (VAR_7);
   if (VAR_5->local.finalized)
      FUNC_2 (VAR_5);
 }
      if (FUNC_4 ("externally_visible", FUNC_0 (VAR_7)))
 {
   if (! FUNC_1 (VAR_5->decl))
     FUNC_6 (VAR_0,
       "%J%<externally_visible%> attribute have effect only on public objects",
       VAR_5->decl);
   else
     {
       if (VAR_5->local.finalized)
  FUNC_2 (VAR_5);
       VAR_5->local.externally_visible = 1;
     }
 }
    }
  for (VAR_6 = VAR_2; VAR_6 != VAR_4; VAR_6 = VAR_6->next)
    {
      tree VAR_8 = VAR_6->decl;
      if (FUNC_4 ("used", FUNC_0 (VAR_8)))
 {
   FUNC_5 (VAR_8);
   if (VAR_6->finalized)
     FUNC_3 (VAR_6);
 }
      if (FUNC_4 ("externally_visible", FUNC_0 (VAR_8)))
 {
   if (! FUNC_1 (VAR_6->decl))
     FUNC_6 (VAR_0,
       "%J%<externally_visible%> attribute have effect only on public objects",
       VAR_6->decl);
   else
     {
       if (VAR_6->finalized)
  FUNC_3 (VAR_6);
       VAR_6->externally_visible = 1;
     }
 }
    }
}
