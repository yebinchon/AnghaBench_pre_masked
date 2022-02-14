
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cgraph_node {struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;
typedef TYPE_1__* ipa_reference_vars_info_t ;
typedef TYPE_2__* ipa_reference_global_vars_info_t ;
struct TYPE_5__ {scalar_t__ statics_read; scalar_t__ statics_written; } ;
struct TYPE_4__ {TYPE_2__* global; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct cgraph_node* FUNC_2 (struct cgraph_node*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (struct cgraph_node*) ;

__attribute__((used)) static void
FUNC_5 (struct cgraph_node *VAR_1)
{
  ipa_reference_vars_info_t VAR_2 = FUNC_4 (VAR_1);
  ipa_reference_global_vars_info_t VAR_3 = VAR_2->global;

  struct cgraph_edge *VAR_4;
  for (VAR_4 = VAR_1->callees; VAR_4; VAR_4 = VAR_4->next_callee)
    {
      struct cgraph_node *VAR_5 = VAR_4->callee;


      VAR_5 = FUNC_2 (VAR_5);
      if (VAR_5)
 {
   if (FUNC_4 (VAR_5))
     {
       ipa_reference_vars_info_t VAR_6 = FUNC_4 (VAR_5);
       ipa_reference_global_vars_info_t VAR_7 = VAR_6->global;

       if (VAR_3->statics_read
    != VAR_0)
  {
    if (VAR_7->statics_read
        == VAR_0)
      {
        FUNC_0 (VAR_3->statics_read);
        VAR_3->statics_read
   = VAR_0;
      }


    else if (VAR_3->statics_read
      != VAR_7->statics_read)
      FUNC_1 (VAR_3->statics_read,
         VAR_7->statics_read);
  }

       if (VAR_3->statics_written
    != VAR_0)
  {
    if (VAR_7->statics_written
        == VAR_0)
      {
        FUNC_0 (VAR_3->statics_written);
        VAR_3->statics_written
   = VAR_0;
      }


    else if (VAR_3->statics_written
      != VAR_7->statics_written)
      FUNC_1 (VAR_3->statics_written,
         VAR_7->statics_written);
  }
     }
   else
     {
       FUNC_3 ();
     }
 }
    }
}
