
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int written_since_error_check; int may_check_for_error; scalar_t__ error_check_interval; int block_baton; int (* block_handler ) (TYPE_1__*,int *,int ) ;int stream; int current_out; TYPE_2__* session; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
struct TYPE_8__ {scalar_t__ bytes_read; scalar_t__ bytes_written; TYPE_3__* callbacks; int callbacks_baton; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_9__ {int progress_baton; int (* progress_func ) (scalar_t__,int,int ,int *) ;int (* cancel_func ) (int ) ;} ;
typedef TYPE_3__ svn_ra_callbacks2_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char const*,int*) ;

__attribute__((used)) static svn_error_t *FUNC_9(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                                    const char *VAR_3, apr_size_t VAR_4)
{
  const char *VAR_5 = VAR_3 + VAR_4;
  apr_size_t VAR_6;
  apr_pool_t *VAR_7 = ((void*)0);
  svn_ra_svn__session_baton_t *VAR_8 = VAR_1->session;




  VAR_1->current_out += VAR_4;
  FUNC_0(FUNC_1(VAR_1));

  while (VAR_3 < VAR_5)
    {
      VAR_6 = VAR_5 - VAR_3;

      if (VAR_8 && VAR_8->callbacks && VAR_8->callbacks->cancel_func)
        FUNC_0((VAR_8->callbacks->cancel_func)(VAR_8->callbacks_baton));

      FUNC_0(FUNC_8(VAR_1->stream, VAR_3, &VAR_6));
      if (VAR_6 == 0)
        {
          if (!VAR_7)
            VAR_7 = FUNC_6(VAR_2);
          else
            FUNC_5(VAR_7);
          FUNC_0(VAR_1->block_handler(VAR_1, VAR_7, VAR_1->block_baton));
        }
      VAR_3 += VAR_6;

      if (VAR_8)
        {
          const svn_ra_callbacks2_t *VAR_9 = VAR_8->callbacks;
          VAR_8->bytes_written += VAR_6;

          if (VAR_9 && VAR_9->progress_func)
            (VAR_9->progress_func)(VAR_8->bytes_written + VAR_8->bytes_read,
                                -1, VAR_9->progress_baton, VAR_7);
        }
    }

  VAR_1->written_since_error_check += VAR_4;
  VAR_1->may_check_for_error
    = VAR_1->written_since_error_check >= VAR_1->error_check_interval;

  if (VAR_7)
    FUNC_7(VAR_7);
  return VAR_0;
}
