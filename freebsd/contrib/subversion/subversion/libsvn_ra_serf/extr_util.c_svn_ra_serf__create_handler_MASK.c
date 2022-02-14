
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * conns; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_8__ {int done_delegate; struct TYPE_8__* done_delegate_baton; int conn; TYPE_1__* session; int * handler_pool; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

svn_ra_serf__handler_t *
FUNC_2(svn_ra_serf__session_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  svn_ra_serf__handler_t *VAR_5;

  VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->handler_pool = VAR_4;

  FUNC_1(VAR_4, VAR_5, VAR_1,
                            VAR_0);

  VAR_5->session = VAR_3;
  VAR_5->conn = VAR_3->conns[0];


  VAR_5->done_delegate_baton = VAR_5;
  VAR_5->done_delegate = VAR_2;

  return VAR_5;
}
