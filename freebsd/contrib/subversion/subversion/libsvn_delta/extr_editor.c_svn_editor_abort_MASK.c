
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int * (* cb_abort ) (int ,int ) ;} ;
struct TYPE_9__ {int scratch_pool; int baton; TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * VAR_0 ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

svn_error_t *
FUNC_7(svn_editor_t *VAR_1)
{
  svn_error_t *VAR_2 = VAR_0;

  FUNC_2(VAR_1);

  if (VAR_1->funcs.cb_abort)
    {
      FUNC_3(VAR_1);
      VAR_2 = VAR_1->funcs.cb_abort(VAR_1->baton, VAR_1->scratch_pool);
      FUNC_0(VAR_1);
    }

  FUNC_1(VAR_1);

  FUNC_6(VAR_1->scratch_pool);
  return FUNC_5(VAR_2);
}
