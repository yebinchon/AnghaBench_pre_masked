
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int (* imported_module_or_decl ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 () ;

void
FUNC_11 (tree VAR_8)
{
  tree VAR_9 = VAR_1;

  if (VAR_8 == VAR_5)
    return;

  FUNC_7 (FUNC_1 (VAR_8) == VAR_0);

  if (FUNC_5 ())
    FUNC_2 (FUNC_4 (VAR_2, VAR_8));
  VAR_8 = FUNC_0 (VAR_8);

  if (!FUNC_10 ())
    {
      FUNC_8 (VAR_8);
      VAR_9 = FUNC_6 ();
    }
  else
    {

      FUNC_3 (VAR_3, VAR_8, 0);
      if (VAR_3 != VAR_6)
 VAR_9 = VAR_3;
    }


  if (!VAR_7)
    (*VAR_4->imported_module_or_decl) (VAR_8, VAR_9);
}
