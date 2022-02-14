
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {scalar_t__ x_dont_save_pending_sizes_p; } ;
struct TYPE_4__ {scalar_t__ (* global_bindings_p ) () ;} ;
struct TYPE_5__ {TYPE_1__ decls; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

tree
FUNC_8 (tree VAR_3)
{
  tree VAR_4;





  if (FUNC_1 (VAR_3)
      || VAR_1.decls.global_bindings_p () < 0
      || FUNC_0 (VAR_3))
    return VAR_3;

  VAR_3 = FUNC_4 (VAR_3);
  VAR_4 = FUNC_5 (VAR_3);

  if (VAR_0 && VAR_0->x_dont_save_pending_sizes_p)


    return VAR_3;

  if (VAR_1.decls.global_bindings_p ())
    {
      if (FUNC_1 (VAR_3))
 FUNC_2 ("type size can%'t be explicitly evaluated");
      else
 FUNC_2 ("variable-size type declared outside of any function");

      return VAR_2;
    }

  FUNC_3 (VAR_4);

  return VAR_3;
}
