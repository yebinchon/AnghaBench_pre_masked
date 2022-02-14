
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* ipa_reference_vars_info_t ;
typedef int * ipa_reference_local_vars_info_t ;
struct TYPE_4__ {TYPE_1__* reference_vars_info; } ;
struct TYPE_3__ {int * local; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static ipa_reference_local_vars_info_t
FUNC_1 (tree VAR_0)
{
  ipa_reference_vars_info_t VAR_1 = FUNC_0 (VAR_0)->reference_vars_info;

  if (VAR_1)
    return VAR_1->local;
  else

    return ((void*)0);
}
