
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int cancel_baton; int * (* cancel_func ) (int ) ;} ;
typedef TYPE_1__ svn_editor_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_editor_t *VAR_0)
{
  svn_error_t *VAR_1 = ((void*)0);

  if (VAR_0->cancel_func)
    {
      FUNC_1(VAR_0);
      VAR_1 = VAR_0->cancel_func(VAR_0->cancel_baton);
      FUNC_0(VAR_0);
    }

  return FUNC_3(VAR_1);
}
