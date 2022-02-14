
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_15__ {int wrapped_report_baton; TYPE_1__* wrapped_reporter; int pool; int set_locks_baton; int depth; int ctx; int ancestor; } ;
typedef TYPE_3__ report_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_13__ {TYPE_2__* (* finish_report ) (int ,int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (int **,int ,int *,int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,int **,char*,int ,int ) ;
 TYPE_2__* FUNC_8 (int *,char const**,int ) ;
 TYPE_2__* FUNC_9 (int ,int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_2, apr_pool_t *VAR_3)
{
  report_baton_t *VAR_4 = VAR_2;
  svn_ra_session_t *VAR_5;
  apr_hash_t *VAR_6;
  const char *VAR_7;
  apr_pool_t *VAR_8 = FUNC_5(VAR_3);
  svn_error_t *VAR_9 = VAR_1;



  FUNC_0(FUNC_3(&VAR_5, VAR_4->ancestor, ((void*)0),
                                      VAR_4->ctx, VAR_8, VAR_8));




  VAR_9 = FUNC_7(VAR_5, &VAR_6, "", VAR_4->depth, VAR_4->pool);
  if (VAR_9 && VAR_9->apr_err == VAR_0)
    {
      FUNC_4(VAR_9);
      VAR_9 = VAR_1;
      VAR_6 = FUNC_1(VAR_4->pool);
    }
  FUNC_0(VAR_9);

  FUNC_0(FUNC_8(VAR_5, &VAR_7, VAR_4->pool));


  FUNC_6(VAR_8);

  FUNC_0(FUNC_9(VAR_4->set_locks_baton, VAR_6,
                                        VAR_7, VAR_4->pool));

  return VAR_4->wrapped_reporter->finish_report(VAR_4->wrapped_report_baton, VAR_3);
}
