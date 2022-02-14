
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lattice_val; void* mem_ref; void* value; } ;
typedef TYPE_1__ prop_value_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void*) ;

__attribute__((used)) static void
FUNC_3 (prop_value_t *VAR_6, prop_value_t *VAR_7)
{
  if (VAR_6->lattice_val == VAR_2)
    {

      *VAR_6 = *VAR_7;
    }
  else if (VAR_7->lattice_val == VAR_2)
    {


      ;
    }
  else if (VAR_6->lattice_val == VAR_3
           || VAR_7->lattice_val == VAR_3)
    {

      FUNC_0 (VAR_5);


      VAR_6->lattice_val = VAR_3;
      VAR_6->value = VAR_1;
      VAR_6->mem_ref = VAR_1;
    }
  else if (VAR_6->lattice_val == VAR_4
           || VAR_7->lattice_val == VAR_4)
    {

      VAR_6->lattice_val = VAR_4;
      VAR_6->value = VAR_1;
      VAR_6->mem_ref = VAR_1;
    }
  else if (VAR_6->lattice_val == VAR_0
    && VAR_7->lattice_val == VAR_0
    && FUNC_2 (VAR_6->value, VAR_7->value) == 1
    && (!VAR_5
        || (VAR_6->mem_ref && VAR_7->mem_ref
     && FUNC_1 (VAR_6->mem_ref, VAR_7->mem_ref, 0))))
    {





      VAR_6->lattice_val = VAR_0;
      VAR_6->value = VAR_6->value;
      VAR_6->mem_ref = VAR_6->mem_ref;
    }
  else
    {

      VAR_6->lattice_val = VAR_4;
      VAR_6->value = VAR_1;
      VAR_6->mem_ref = VAR_1;
    }
}
