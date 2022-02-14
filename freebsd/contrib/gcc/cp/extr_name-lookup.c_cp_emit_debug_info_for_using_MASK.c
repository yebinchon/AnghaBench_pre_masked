
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int (* imported_module_or_decl ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

void
FUNC_8 (tree VAR_7, tree VAR_8)
{

  if (VAR_6 || VAR_4)
    return;



  if (FUNC_6 (VAR_7) == VAR_0
      && FUNC_3 (VAR_7)
      && FUNC_2 (VAR_7))
    return;



  if (VAR_8 == VAR_5)
    VAR_8 = VAR_1;

  if (FUNC_1 (VAR_7))
    VAR_7 = FUNC_0 (VAR_7);


  for (VAR_7 = FUNC_4 (VAR_7); VAR_7; VAR_7 = FUNC_5 (VAR_7))
    if (FUNC_6 (VAR_7) != VAR_2)
      (*VAR_3->imported_module_or_decl) (VAR_7, VAR_8);
}
