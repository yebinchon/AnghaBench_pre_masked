
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pending_error; int num_conns; TYPE_1__** conns; int timeout; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_interval_time_t ;
struct TYPE_5__ {int bkt_alloc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;

svn_error_t *
FUNC_7(svn_boolean_t *VAR_1,
                              svn_ra_serf__session_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4;
  apr_interval_time_t VAR_5 = VAR_2->timeout;

  FUNC_1(VAR_2->pending_error == VAR_0);

  VAR_4 = FUNC_4(VAR_3);
  while (!*VAR_1)
    {
      int VAR_6;

      FUNC_3(VAR_4);

      FUNC_0(FUNC_6(VAR_2, &VAR_5, VAR_4));


      for (VAR_6 = 0; VAR_6 < VAR_2->num_conns; VAR_6++)
        {
          FUNC_2(VAR_2->conns[VAR_6]->bkt_alloc);
        }
    }
  FUNC_5(VAR_4);

  return VAR_0;
}
