
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* ipa_reference_local_vars_info_t ;
typedef int * bitmap ;
struct TYPE_3__ {int * statics_written; } ;


 TYPE_1__* FUNC_0 (int ) ;

bitmap
FUNC_1 (tree VAR_0)
{
  ipa_reference_local_vars_info_t VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1)
    return VAR_1->statics_written;
  else
    return ((void*)0);
}
