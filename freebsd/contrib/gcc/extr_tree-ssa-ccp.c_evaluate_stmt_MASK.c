
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_3__ {void* value; scalar_t__ lattice_val; void* mem_ref; } ;
typedef TYPE_1__ prop_value_t ;
typedef scalar_t__ ccp_lattice_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,void*,int ) ;
 void* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;

__attribute__((used)) static prop_value_t
FUNC_7 (tree VAR_5)
{
  prop_value_t VAR_6;
  tree VAR_7 = VAR_1;
  ccp_lattice_t VAR_8 = FUNC_6 (VAR_5);
  bool VAR_9;

  VAR_6.mem_ref = VAR_1;

  FUNC_2 ();



  if (VAR_8 == VAR_0)
    VAR_7 = FUNC_0 (VAR_5);


  if (VAR_8 == VAR_4)
    VAR_7 = FUNC_4 (VAR_5);





  else if (!VAR_7)
    VAR_7 = FUNC_1 (FUNC_4 (VAR_5));

  VAR_9 = VAR_7 && FUNC_5 (VAR_7);

  FUNC_3 (VAR_9, VAR_5, 0);

  if (VAR_9)
    {

      VAR_6.lattice_val = VAR_0;
      VAR_6.value = VAR_7;
    }
  else
    {



      if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
 VAR_6.lattice_val = VAR_8;
      else
 VAR_6.lattice_val = VAR_4;

      VAR_6.value = VAR_1;
    }

  return VAR_6;
}
