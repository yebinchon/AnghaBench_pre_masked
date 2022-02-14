
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct alias_info {size_t num_addressable_vars; size_t num_pointers; int ref_all_symbol_mem_tag; TYPE_2__** pointers; TYPE_1__** addressable_vars; } ;
struct TYPE_6__ {scalar_t__ symbol_mem_tag; } ;
struct TYPE_5__ {scalar_t__ var; } ;
struct TYPE_4__ {scalar_t__ var; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (struct alias_info *VAR_1)
{
  size_t VAR_2;

  if (VAR_0)
    FUNC_1 (VAR_1->ref_all_symbol_mem_tag, VAR_0);
  else
    {

      for (VAR_2 = 0; VAR_2 < VAR_1->num_addressable_vars; VAR_2++)
 {
   tree VAR_3 = VAR_1->addressable_vars[VAR_2]->var;
   if (FUNC_2 (VAR_3))
     FUNC_1 (VAR_1->ref_all_symbol_mem_tag, VAR_3);
        }



      for (VAR_2 = 0; VAR_2 < VAR_1->num_pointers; VAR_2++)
 {
   tree VAR_4 = VAR_1->pointers[VAR_2]->var, VAR_5;
   if (FUNC_0 (VAR_4))
     continue;
   VAR_5 = FUNC_3 (VAR_4)->symbol_mem_tag;
   if (FUNC_2 (VAR_5))
     FUNC_1 (VAR_1->ref_all_symbol_mem_tag, VAR_5);
 }
    }
}
