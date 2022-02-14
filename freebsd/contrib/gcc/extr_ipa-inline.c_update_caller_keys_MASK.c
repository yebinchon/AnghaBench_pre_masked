
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int inlinable; scalar_t__ disregard_inline_limits; } ;
struct TYPE_7__ {int estimated_growth; scalar_t__ inlined_to; } ;
struct cgraph_node {struct cgraph_edge* callers; TYPE_2__ local; TYPE_1__ global; int uid; } ;
struct cgraph_edge {char const* inline_failed; TYPE_3__* aux; struct cgraph_edge* next_caller; } ;
typedef TYPE_3__* fibnode_t ;
typedef int fibheap_t ;
typedef int bitmap ;
struct TYPE_9__ {int key; struct cgraph_edge* data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cgraph_node*,char const**) ;
 int FUNC_3 (struct cgraph_edge*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int,struct cgraph_edge*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (fibheap_t VAR_1, struct cgraph_node *VAR_2,
      bitmap VAR_3)
{
  struct cgraph_edge *VAR_4;
  const char *VAR_5;

  if (!VAR_2->local.inlinable || VAR_2->local.disregard_inline_limits
      || VAR_2->global.inlined_to)
    return;
  if (FUNC_0 (VAR_3, VAR_2->uid))
    return;
  FUNC_1 (VAR_3, VAR_2->uid);
  VAR_2->global.estimated_growth = VAR_0;

  if (!VAR_2->local.inlinable)
    return;

  if (!FUNC_2 (VAR_2, &VAR_5))
    {
      for (VAR_4 = VAR_2->callers; VAR_4; VAR_4 = VAR_4->next_caller)
 if (VAR_4->aux)
   {
     FUNC_4 (VAR_1, VAR_4->aux);
     VAR_4->aux = ((void*)0);
     if (VAR_4->inline_failed)
       VAR_4->inline_failed = VAR_5;
   }
      return;
    }

  for (VAR_4 = VAR_2->callers; VAR_4; VAR_4 = VAR_4->next_caller)
    if (VAR_4->inline_failed)
      {
 int VAR_6 = FUNC_3 (VAR_4);
 if (VAR_4->aux)
   {
     fibnode_t VAR_7 = VAR_4->aux;
     FUNC_7 (VAR_7->data == VAR_4);
     if (VAR_7->key == VAR_6)
       continue;


     if (FUNC_6 (VAR_1, VAR_7, VAR_6))
       continue;
     FUNC_4 (VAR_1, VAR_4->aux);
   }
 VAR_4->aux = FUNC_5 (VAR_1, VAR_6, VAR_4);
      }
}
