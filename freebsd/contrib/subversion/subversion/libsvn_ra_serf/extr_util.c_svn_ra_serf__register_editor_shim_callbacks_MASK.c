
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_5__ {int * shim_callbacks; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int svn_delta_shim_callbacks_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_ra_session_t *VAR_1,
                                    svn_delta_shim_callbacks_t *VAR_2)
{
  svn_ra_serf__session_t *VAR_3 = VAR_1->priv;

  VAR_3->shim_callbacks = VAR_2;
  return VAR_0;
}
