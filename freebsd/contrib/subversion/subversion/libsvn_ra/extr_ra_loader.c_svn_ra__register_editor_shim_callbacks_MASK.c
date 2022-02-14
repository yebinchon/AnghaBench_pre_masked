
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_shim_callbacks_t ;
struct TYPE_5__ {int (* register_editor_shim_callbacks ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;

svn_error_t *
FUNC_2(svn_ra_session_t *VAR_1,
                                       svn_delta_shim_callbacks_t *VAR_2)
{
  FUNC_0(VAR_1->vtable->register_editor_shim_callbacks(VAR_1, VAR_2));
  return VAR_0;
}
