
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inlined_to; int insns; } ;
struct TYPE_3__ {scalar_t__ inlinable; int self_insns; } ;
struct cgraph_node {TYPE_2__ global; struct cgraph_node* next; scalar_t__ callers; scalar_t__ reachable; scalar_t__ needed; TYPE_1__ local; scalar_t__ analyzed; int decl; int aux; } ;


 scalar_t__ FUNC_0 (struct cgraph_node*,int) ;
 int VAR_0 ;
 struct cgraph_node* VAR_1 ;
 int FUNC_1 (struct cgraph_node**) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct cgraph_node** FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cgraph_node**) ;
 int VAR_4 ;
 struct cgraph_node** VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static unsigned int
FUNC_8 (void)
{
  struct cgraph_node *VAR_7;
  int VAR_8;

  if (VAR_6 || VAR_3)
    return 0;





  VAR_5 = FUNC_5 (sizeof (*VAR_5) * VAR_0);
  VAR_4 = FUNC_1 (VAR_5);
  for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--)
    {
      VAR_7 = VAR_5[VAR_8];
      if (VAR_7->analyzed && (VAR_7->needed || VAR_7->reachable))
        VAR_7->local.self_insns = VAR_7->global.insns
   = FUNC_3 (VAR_7->decl);
    }
  for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--)
    {
      VAR_7 = VAR_5[VAR_8];
      if (VAR_7->analyzed && VAR_7->local.inlinable
   && (VAR_7->needed || VAR_7->reachable)
   && VAR_7->callers)
 {
   if (FUNC_0 (VAR_7, 1))
     FUNC_6 ();
 }
    }
  FUNC_2 (1, VAR_2);




  FUNC_7 (VAR_5);
  VAR_5 = ((void*)0);
  VAR_4 = 0;
  return 0;
}
