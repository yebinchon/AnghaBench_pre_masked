
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* ipa_reference_local_vars_info_t ;
struct TYPE_3__ {int statics_read; int statics_written; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (ipa_reference_local_vars_info_t VAR_3,
        tree VAR_4, bool VAR_5)
{
  if (!VAR_4) return;

  if ((FUNC_1 (VAR_4) == VAR_1 || FUNC_1 (VAR_4) == VAR_0)
      && (FUNC_3 (VAR_4)))
    {
      if (VAR_5)
 {
   if (VAR_3)
     FUNC_2 (VAR_3->statics_written, FUNC_0 (VAR_4));


   FUNC_2 (VAR_2, FUNC_0 (VAR_4));
 }
      else if (VAR_3)
 FUNC_2 (VAR_3->statics_read, FUNC_0 (VAR_4));
    }
}
