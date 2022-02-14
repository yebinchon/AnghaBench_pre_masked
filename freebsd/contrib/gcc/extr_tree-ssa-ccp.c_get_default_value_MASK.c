
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {void* lattice_val; int mem_ref; scalar_t__ value; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ prop_value_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static prop_value_t
FUNC_12 (tree VAR_10)
{
  tree VAR_11 = FUNC_5 (VAR_10);
  prop_value_t VAR_12 = { VAR_6, VAR_2, VAR_2 };

  if (!VAR_9 && !FUNC_11 (VAR_10))
    {


      VAR_12.lattice_val = VAR_8;
    }
  else if (FUNC_4 (VAR_10)
    && FUNC_10 (FUNC_4 (VAR_10)))
    {
      VAR_12.lattice_val = VAR_0;
      VAR_12.value = FUNC_4 (VAR_10);
    }
  else if (FUNC_8 (VAR_11)
    && FUNC_7 (VAR_11)
    && !FUNC_2 (VAR_11)
    && FUNC_0 (VAR_11)
    && FUNC_9 (FUNC_0 (VAR_11)))
    {


      VAR_12.lattice_val = VAR_0;
      VAR_12.value = FUNC_0 (VAR_11);
      VAR_12.mem_ref = VAR_11;
    }
  else
    {
      tree VAR_13 = FUNC_3 (VAR_10);

      if (FUNC_1 (VAR_13))
 {







   if (FUNC_11 (VAR_11) && FUNC_6 (VAR_11) != VAR_3)
     VAR_12.lattice_val = VAR_5;
   else if (VAR_9)
     VAR_12.lattice_val = VAR_7;
   else
     VAR_12.lattice_val = VAR_8;
 }
      else if (FUNC_6 (VAR_13) == VAR_1
        || FUNC_6 (VAR_13) == VAR_4)
 {



   VAR_12.lattice_val = FUNC_11 (VAR_11) ? VAR_5 : VAR_7;
 }
      else
 {

   VAR_12.lattice_val = VAR_8;
 }
    }

  return VAR_12;
}
