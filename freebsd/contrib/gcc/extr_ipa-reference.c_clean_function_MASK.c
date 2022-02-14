
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cgraph_node {int decl; } ;
typedef TYPE_1__* ipa_reference_vars_info_t ;
typedef TYPE_2__* ipa_reference_local_vars_info_t ;
typedef TYPE_2__* ipa_reference_global_vars_info_t ;
struct TYPE_9__ {TYPE_2__* reference_vars_info; } ;
struct TYPE_8__ {scalar_t__ statics_read; scalar_t__ statics_written; scalar_t__ statics_not_read; scalar_t__ statics_not_written; } ;
struct TYPE_7__ {TYPE_2__* global; TYPE_2__* local; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct cgraph_node*) ;

__attribute__((used)) static void
FUNC_4 (struct cgraph_node *VAR_1)
{
  ipa_reference_vars_info_t VAR_2 = FUNC_3 (VAR_1);
  ipa_reference_local_vars_info_t VAR_3 = VAR_2->local;
  ipa_reference_global_vars_info_t VAR_4 = VAR_2->global;

  if (VAR_3)
    {
      if (VAR_3->statics_read
   && VAR_3->statics_read != VAR_0)
 FUNC_0 (VAR_3->statics_read);
      if (VAR_3->statics_written
   &&VAR_3->statics_written != VAR_0)
 FUNC_0 (VAR_3->statics_written);
      FUNC_1 (VAR_3);
    }

  if (VAR_4)
    {
      if (VAR_4->statics_read
   && VAR_4->statics_read != VAR_0)
 FUNC_0 (VAR_4->statics_read);

      if (VAR_4->statics_written
   && VAR_4->statics_written != VAR_0)
 FUNC_0 (VAR_4->statics_written);

      if (VAR_4->statics_not_read
   && VAR_4->statics_not_read != VAR_0)
 FUNC_0 (VAR_4->statics_not_read);

      if (VAR_4->statics_not_written
   && VAR_4->statics_not_written != VAR_0)
 FUNC_0 (VAR_4->statics_not_written);
      FUNC_1 (VAR_4);
    }


  FUNC_1 (FUNC_2 (VAR_1->decl)->reference_vars_info);
  FUNC_2 (VAR_1->decl)->reference_vars_info = ((void*)0);
}
