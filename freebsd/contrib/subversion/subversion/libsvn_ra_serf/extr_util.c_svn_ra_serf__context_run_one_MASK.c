
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scheduled; int session; int done; } ;
typedef TYPE_1__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

svn_error_t *
FUNC_4(svn_ra_serf__handler_t *VAR_0,
                             apr_pool_t *VAR_1)
{
  svn_error_t *VAR_2;


  FUNC_2(VAR_0);


  VAR_2 = FUNC_1(&VAR_0->done, VAR_0->session,
                                      VAR_1);

  if (VAR_0->scheduled)
    {



      FUNC_3(VAR_0);
    }

  return FUNC_0(VAR_2);
}
