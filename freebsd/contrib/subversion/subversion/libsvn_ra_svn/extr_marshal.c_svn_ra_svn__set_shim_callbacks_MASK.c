
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * shim_callbacks; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_delta_shim_callbacks_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_ra_svn_conn_t *VAR_1,
                               svn_delta_shim_callbacks_t *VAR_2)
{
  VAR_1->shim_callbacks = VAR_2;
  return VAR_0;
}
