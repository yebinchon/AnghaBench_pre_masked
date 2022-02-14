
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* lang_get_callee_fndecl ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_8 (scalar_t__) ;

tree
FUNC_9 (tree VAR_5)
{
  tree VAR_6;

  if (VAR_5 == VAR_3)
    return VAR_5;



  FUNC_7 (FUNC_3 (VAR_5) == VAR_1);



  VAR_6 = FUNC_4 (VAR_5, 0);

  FUNC_2 (VAR_6);


  if (FUNC_1 (VAR_6) && FUNC_3 (VAR_6) != VAR_2
      && FUNC_5 (VAR_6) && ! FUNC_6 (VAR_6)
      && FUNC_0 (VAR_6))
    VAR_6 = FUNC_0 (VAR_6);



  if (FUNC_3 (VAR_6) == VAR_0
      && FUNC_3 (FUNC_4 (VAR_6, 0)) == VAR_2)
    return FUNC_4 (VAR_6, 0);



  return VAR_4.lang_get_callee_fndecl (VAR_5);
}
