
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_11__ {scalar_t__ depth; scalar_t__ accept_which; scalar_t__ non_interactive; int targets; } ;
typedef TYPE_1__ svn_cl__opt_state_t ;
typedef int svn_cl__conflict_stats_t ;
struct TYPE_12__ {int * ctx; int * conflict_stats; TYPE_1__* opt_state; } ;
typedef TYPE_2__ svn_cl__cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
struct TYPE_13__ {int nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_3__**,int *,int ,int *,int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;

svn_error_t *
FUNC_8(apr_getopt_t *VAR_10,
                void *VAR_11,
                apr_pool_t *VAR_12)
{
  svn_cl__opt_state_t *VAR_13 = ((svn_cl__cmd_baton_t *) VAR_11)->opt_state;
  svn_cl__conflict_stats_t *VAR_14 =
    ((svn_cl__cmd_baton_t *) VAR_11)->conflict_stats;
  svn_client_ctx_t *VAR_15 = ((svn_cl__cmd_baton_t *) VAR_11)->ctx;
  apr_array_header_t *VAR_16;

  FUNC_0(FUNC_2(&VAR_16, VAR_10,
                                                      VAR_13->targets,
                                                      VAR_15, VAR_0,
                                                      VAR_12));
  if (! VAR_16->nelts)
    FUNC_7(VAR_16, VAR_12);

  if (VAR_13->depth == VAR_9)
    {
      if (VAR_13->accept_which == VAR_6)
        VAR_13->depth = VAR_8;
      else
        VAR_13->depth = VAR_7;
    }

  FUNC_0(FUNC_4(&VAR_16, VAR_16, VAR_12));

  FUNC_0(FUNC_3(VAR_16));

  if (VAR_13->accept_which == VAR_6 &&
      VAR_13->non_interactive)
    {
      return FUNC_6(VAR_1, ((void*)0),
                              FUNC_1("missing --accept option"));
    }
  else if (VAR_13->accept_which == VAR_5 ||
           VAR_13->accept_which == VAR_3 ||
           VAR_13->accept_which == VAR_4)
    {
      return FUNC_6(VAR_1, ((void*)0),
                              FUNC_1("invalid 'accept' ARG"));
    }

  FUNC_0(FUNC_5(VAR_16, VAR_14,
                                 VAR_13, VAR_15, VAR_12));

  return VAR_2;
}
