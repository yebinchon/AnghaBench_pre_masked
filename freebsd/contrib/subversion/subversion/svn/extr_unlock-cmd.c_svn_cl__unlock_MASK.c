
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_12__ {struct notify_unlock_baton_t* notify_baton2; int notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_13__ {int force; int targets; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct TYPE_14__ {TYPE_1__* ctx; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
struct notify_unlock_baton_t {scalar_t__ had_failure; struct notify_unlock_baton_t* inner_baton; int inner_notify; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
struct TYPE_15__ {int nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__**,int *,int ,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**,TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_1__*,int *) ;
 int * FUNC_6 (int ,int *,int *) ;

svn_error_t *
FUNC_7(apr_getopt_t *VAR_5,
               void *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_cl__opt_state_t *VAR_8 = ((svn_cl__cmd_baton_t *) VAR_6)->opt_state;
  svn_client_ctx_t *VAR_9 = ((svn_cl__cmd_baton_t *) VAR_6)->ctx;
  apr_array_header_t *VAR_10;
  struct notify_unlock_baton_t VAR_11;

  FUNC_0(FUNC_2(&VAR_10, VAR_5,
                                                      VAR_8->targets,
                                                      VAR_9, VAR_0,
                                                      VAR_7));


  if (! VAR_10->nelts)
    return FUNC_6(VAR_1, 0, ((void*)0));

  FUNC_0(FUNC_4(&VAR_10, VAR_10, VAR_7));

  FUNC_0(FUNC_3(VAR_10));

  VAR_11.inner_notify = VAR_9->notify_func2;
  VAR_11.inner_baton = VAR_9->notify_baton2;
  VAR_11.had_failure = VAR_0;

  VAR_9->notify_func2 = VAR_4;
  VAR_9->notify_baton2 = &VAR_11;

  FUNC_0(FUNC_5(VAR_10, VAR_8->force, VAR_9, VAR_7));

  if (VAR_11.had_failure)
    return FUNC_6(VAR_2, ((void*)0),
                            FUNC_1("One or more locks could not be released"));

  return VAR_3;
}
