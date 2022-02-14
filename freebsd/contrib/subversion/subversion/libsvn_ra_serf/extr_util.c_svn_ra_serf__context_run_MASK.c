
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pending_error; scalar_t__ timeout; int context; int cancel_baton; int * (* cancel_func ) (int ) ;} ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_interval_time_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__,int *,int *) ;
 int * FUNC_9 (scalar_t__,int *) ;

svn_error_t *
FUNC_10(svn_ra_serf__session_t *VAR_5,
                         apr_interval_time_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  apr_status_t VAR_8;
  svn_error_t *VAR_9;
  FUNC_4(VAR_5->pending_error == VAR_3);

  if (VAR_5->cancel_func)
    FUNC_1(VAR_5->cancel_func(VAR_5->cancel_baton));

  VAR_8 = FUNC_5(VAR_5->context,
                            VAR_4,
                            VAR_7);

  VAR_9 = VAR_5->pending_error;
  VAR_5->pending_error = VAR_3;





  if (FUNC_0(VAR_8))
    {
      VAR_8 = 0;

      if (VAR_5->timeout)
        {
          if (*VAR_6 > VAR_4)
            {
              *VAR_6 -= VAR_4;
            }
          else
            {
              return
                  FUNC_7(
                        VAR_9,
                        FUNC_8(VAR_2, ((void*)0),
                                         FUNC_3("Connection timed out")));
            }
        }
    }
  else
    {
      *VAR_6 = VAR_5->timeout;
    }

  FUNC_1(VAR_9);
  if (VAR_8)
    {


      if (VAR_8 >= VAR_0 && VAR_8 < VAR_1)
        {

          FUNC_2(FUNC_8(VAR_8, ((void*)0), ((void*)0)),
                    FUNC_3("Error running context"));
        }

      return FUNC_9(VAR_8, FUNC_3("Error running context"));
    }

  return VAR_3;
}
