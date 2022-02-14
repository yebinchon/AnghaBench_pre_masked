
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {scalar_t__ lattice_val; scalar_t__ value; scalar_t__ mem_ref; } ;
typedef TYPE_1__ prop_value_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,char*,TYPE_1__) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ,int) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_7, prop_value_t VAR_8)
{
  prop_value_t *VAR_9 = FUNC_3 (VAR_7, 0);
  FUNC_2 (VAR_9->lattice_val <= VAR_8.lattice_val
              || (VAR_9->lattice_val == VAR_8.lattice_val
    && VAR_9->value == VAR_8.value
    && VAR_9->mem_ref == VAR_8.mem_ref)
       || (VAR_4
    && VAR_9->lattice_val == VAR_0
    && VAR_8.lattice_val == VAR_3));

  if (VAR_9->lattice_val != VAR_8.lattice_val)
    {
      if (VAR_5 && (VAR_6 & VAR_1))
 {
   FUNC_0 (VAR_5, "Lattice value changed to ", VAR_8);
   FUNC_1 (VAR_5, ".  %sdding SSA edges to worklist.\n",
            VAR_8.lattice_val != VAR_2 ? "A" : "Not a");
 }

      *VAR_9 = VAR_8;




      return (VAR_8.lattice_val != VAR_2);
    }

  return 0;
}
