
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int generate_vcall_entries; scalar_t__ vbase; int derived; } ;
typedef TYPE_1__ vtbl_init_data ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_0, vtbl_init_data* VAR_1)
{



  if (FUNC_0 (VAR_0) || VAR_0 == FUNC_1 (VAR_1->derived))
    {
      VAR_1->vbase = VAR_0;


      if (!FUNC_0 (VAR_0))
 VAR_1->generate_vcall_entries = 0;

      FUNC_2 (VAR_0, VAR_1);
    }
}
