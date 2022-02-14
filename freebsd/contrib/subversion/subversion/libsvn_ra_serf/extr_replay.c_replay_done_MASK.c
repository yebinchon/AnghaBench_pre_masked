
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int code; } ;
struct TYPE_6__ {TYPE_1__ sline; scalar_t__ server_error; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct revision_report_t {int pool; int * replay_reports; int * done; TYPE_2__* report_handler; } ;
typedef int serf_request_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_request_t *VAR_2,
            void *VAR_3,
            apr_pool_t *VAR_4)
{
  struct revision_report_t *VAR_5 = VAR_3;
  svn_ra_serf__handler_t *VAR_6 = VAR_5->report_handler;

  if (VAR_6->server_error)
    return FUNC_2(VAR_6, VAR_4);
  else if (VAR_6->sline.code != 200)
    return FUNC_0(FUNC_3(VAR_6));

  *VAR_5->done = VAR_1;


  if (VAR_5->replay_reports)
    {
      (*VAR_5->replay_reports)--;
    }

  FUNC_1(VAR_5->pool);

  return VAR_0;
}
