
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipa_dfs_info {struct cgraph_node* aux; } ;
struct TYPE_5__ {scalar_t__ inlined_to; } ;
struct cgraph_node {TYPE_1__ global; struct cgraph_edge* callees; struct ipa_dfs_info* aux; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;
typedef TYPE_2__* ipa_reference_vars_info_t ;
typedef TYPE_3__* ipa_reference_local_vars_info_t ;
struct TYPE_7__ {int calls_write_all; int calls_read_all; int statics_written; int statics_read; } ;
struct TYPE_6__ {TYPE_3__* local; } ;


 int FUNC_0 (int ,int ) ;
 struct cgraph_node* FUNC_1 (struct cgraph_node*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct cgraph_node*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (struct cgraph_node*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7 (struct cgraph_node *VAR_1,
    struct cgraph_node *VAR_2)
{
  struct cgraph_edge *VAR_3;
  ipa_reference_local_vars_info_t VAR_4 =
    FUNC_6 (VAR_1)->local;


  struct ipa_dfs_info *VAR_5 = VAR_2->aux;

  if (VAR_5->aux)
    return;

  VAR_5->aux = VAR_2;

  for (VAR_3 = VAR_2->callees; VAR_3; VAR_3 = VAR_3->next_callee)
    {
      struct cgraph_node *VAR_6 = VAR_3->callee;
      if (VAR_6->global.inlined_to)
 {
   ipa_reference_vars_info_t VAR_7;
   ipa_reference_local_vars_info_t VAR_8;
   struct cgraph_node* VAR_9 = VAR_6;

   VAR_6 = FUNC_1 (VAR_6);
   if (VAR_6)
     {
       VAR_7 = FUNC_6 (VAR_6);
       VAR_8 = VAR_7->local;
       if (VAR_4 != VAR_8)
  {
    FUNC_0 (VAR_4->statics_read,
       VAR_8->statics_read);
    FUNC_0 (VAR_4->statics_written,
       VAR_8->statics_written);
  }
       VAR_4->calls_read_all |= VAR_8->calls_read_all;
       VAR_4->calls_write_all |= VAR_8->calls_write_all;
       FUNC_7 (VAR_1, VAR_6);
     }
   else
     {
       FUNC_4(VAR_0, "suspect inlining of ");
       FUNC_3 (VAR_0, VAR_9);
       FUNC_4(VAR_0, "\ninto ");
       FUNC_3 (VAR_0, VAR_1);
       FUNC_2 (VAR_0);
       FUNC_5(0);
     }
 }
    }

  VAR_5->aux = ((void*)0);
}
