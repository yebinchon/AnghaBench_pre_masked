
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_18__ {scalar_t__ depth; int changelists; int targets; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct TYPE_19__ {int * ctx; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
struct TYPE_20__ {int nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__**,int *,int ,int *,int ,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__**,TYPE_4__*,int *) ;
 TYPE_1__* FUNC_6 (TYPE_4__*,scalar_t__,int ,int ,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_7 (int ,int ,int *) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;

svn_error_t *
FUNC_10(apr_getopt_t *VAR_5,
               void *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_cl__opt_state_t *VAR_8 = ((svn_cl__cmd_baton_t *) VAR_6)->opt_state;
  svn_client_ctx_t *VAR_9 = ((svn_cl__cmd_baton_t *) VAR_6)->ctx;
  apr_array_header_t *VAR_10 = ((void*)0);
  svn_error_t *VAR_11;

  FUNC_1(FUNC_3(&VAR_10, VAR_5,
                                                      VAR_8->targets,
                                                      VAR_9, VAR_0,
                                                      VAR_7));


  if (! VAR_10->nelts)
    return FUNC_7(VAR_1, 0, ((void*)0));



  if (VAR_8->depth == VAR_4)
    VAR_8->depth = VAR_3;

  FUNC_1(FUNC_5(&VAR_10, VAR_10, VAR_7));

  FUNC_1(FUNC_4(VAR_10));

  VAR_11 = FUNC_6(VAR_10, VAR_8->depth,
                           VAR_8->changelists,
                           VAR_0 ,
                           VAR_0 ,
                           VAR_9, VAR_7);
  if (VAR_11
      && (VAR_11->apr_err == VAR_2)
      && (! FUNC_0(VAR_8->depth)))
    {
      VAR_11 = FUNC_8
        (VAR_11, FUNC_2("Try 'svn revert --depth infinity' instead?"));
    }

  return FUNC_9(VAR_11);
}
