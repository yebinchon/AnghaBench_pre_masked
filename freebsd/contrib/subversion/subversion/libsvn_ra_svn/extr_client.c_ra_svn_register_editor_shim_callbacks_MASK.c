
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * shim_callbacks; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
struct TYPE_6__ {TYPE_1__* conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_shim_callbacks_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(svn_ra_session_t *VAR_1,
                                      svn_delta_shim_callbacks_t *VAR_2)
{
  svn_ra_svn__session_baton_t *VAR_3 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_4 = VAR_3->conn;

  VAR_4->shim_callbacks = VAR_2;

  return VAR_0;
}
