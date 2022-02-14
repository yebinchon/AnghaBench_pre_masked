
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pending_error; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_6__ {void* done; void* discard_body; TYPE_1__* session; int done_delegate_baton; int * (* done_delegate ) (int *,int ,int *) ;int scheduled; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_3 ;
 int FUNC_2 (int *,int *,TYPE_2__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static apr_status_t
FUNC_6(serf_request_t *VAR_4,
                   serf_bucket_t *VAR_5,
                   void *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_ra_serf__handler_t *VAR_8 = VAR_6;
  svn_error_t *VAR_9;
  apr_status_t VAR_10;
  apr_status_t VAR_11;
  apr_pool_t *VAR_12 = VAR_7;

  VAR_9 = FUNC_5(FUNC_2(VAR_4, VAR_5,
                                        VAR_8, &VAR_10,
                                        VAR_12));


  VAR_11 = FUNC_3(VAR_8->session, VAR_9);
  if (!VAR_11)
    VAR_11 = VAR_10;


  if (FUNC_0(VAR_11) || FUNC_0(VAR_10))
    {
      svn_ra_serf__session_t *VAR_13 = VAR_8->session;
      VAR_8->done = VAR_3;
      VAR_8->scheduled = VAR_2;
      VAR_11 = VAR_1;



      FUNC_3(VAR_13,
                 VAR_8->done_delegate(VAR_4, VAR_8->done_delegate_baton,
                                        VAR_12));
    }
  else if (FUNC_1(VAR_11)
           && VAR_8->session->pending_error)
    {
      VAR_8->discard_body = VAR_3;
      VAR_8->done = VAR_3;







      VAR_11 = VAR_0;
    }

  return VAR_11;
}
