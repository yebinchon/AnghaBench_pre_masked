
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_21__ {int log_msg_baton3; scalar_t__ log_msg_func3; int config; int * notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_22__ {scalar_t__ depth; scalar_t__ quiet; int dry_run; int keep_local; int changelists; int targets; scalar_t__ remove; scalar_t__ list; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct TYPE_23__ {TYPE_1__* ctx; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_24__ {scalar_t__ ind; scalar_t__ argc; } ;
typedef TYPE_4__ apr_getopt_t ;
struct TYPE_25__ {int nelts; } ;
typedef TYPE_5__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const**,TYPE_4__*,int *,int *) ;
 int * FUNC_3 (char const*,int,TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_5__**,TYPE_4__*,int ,TYPE_1__*,int ,int *) ;
 int * FUNC_5 (TYPE_5__*) ;
 int * FUNC_6 (int ,int *,int *) ;
 int * FUNC_7 (TYPE_5__**,TYPE_5__*,int *) ;
 int * FUNC_8 (int *,TYPE_2__*,int *,int ,int *) ;
 int * FUNC_9 (int *,char const*,char const*,TYPE_1__*,int *) ;
 int * FUNC_10 (char const*,TYPE_5__*,scalar_t__,int ,int ,int ,TYPE_1__*,int *) ;
 int * FUNC_11 (char const*,char const*,int ,TYPE_1__*,int *) ;
 int * FUNC_12 (int *,char*,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_13 (char const**,char*,int *) ;
 int * FUNC_14 (int ,int ,int *) ;
 int * FUNC_15 (int ,int *,int ) ;
 int FUNC_16 (TYPE_5__*,int *) ;

svn_error_t *
FUNC_17(apr_getopt_t *VAR_7,
               void *VAR_8,
               apr_pool_t *VAR_9)
{
  svn_cl__opt_state_t *VAR_10 = ((svn_cl__cmd_baton_t *) VAR_8)->opt_state;
  svn_client_ctx_t *VAR_11 = ((svn_cl__cmd_baton_t *) VAR_8)->ctx;
  const char *VAR_12;
  const char *VAR_13;
  apr_array_header_t *VAR_14;
  svn_boolean_t VAR_15;

  if (VAR_10->quiet)
    VAR_11->notify_func2 = ((void*)0);

  FUNC_0(FUNC_13(&VAR_12, "", VAR_9));

  if (VAR_10->list)
    {
      if (VAR_7->ind < VAR_7->argc)
        return FUNC_14(VAR_1, 0, ((void*)0));

      FUNC_0(FUNC_3(VAR_12,
                           ! VAR_10->quiet ,
                           VAR_11, VAR_9));
      return VAR_4;
    }

  FUNC_0(FUNC_2(&VAR_13, VAR_7, VAR_9, VAR_9));

  if (VAR_10->remove)
    {
      if (VAR_7->ind < VAR_7->argc)
        return FUNC_14(VAR_1, 0, ((void*)0));

      FUNC_0(FUNC_11(VAR_13, VAR_12,
                                        VAR_10->dry_run,
                                        VAR_11, VAR_9));
      if (! VAR_10->quiet)
        FUNC_0(FUNC_12(VAR_9, "deleted '%s'\n", VAR_13));
      return VAR_4;
    }


  FUNC_0(FUNC_4(&VAR_14, VAR_7,
                                                      VAR_10->targets,
                                                      VAR_11, VAR_0, VAR_9));
  FUNC_16(VAR_14, VAR_9);

  {
      svn_depth_t VAR_16 = VAR_10->depth;
      svn_error_t *VAR_17;



      if (!VAR_14->nelts)
        return FUNC_14(VAR_2, 0, ((void*)0));

      FUNC_0(FUNC_5(VAR_14));

      if (VAR_16 == VAR_6)
        VAR_16 = VAR_5;

      FUNC_0(FUNC_7(&VAR_14, VAR_14, VAR_9));

      if (VAR_11->log_msg_func3)
        FUNC_0(FUNC_8(&VAR_11->log_msg_baton3,
                                           VAR_10, ((void*)0), VAR_11->config,
                                           VAR_9));
      VAR_17 = FUNC_10(VAR_13,
                              VAR_14, VAR_16, VAR_10->changelists,
                              VAR_10->keep_local, VAR_10->dry_run,
                              VAR_11, VAR_9);
      if (VAR_11->log_msg_func3)
        FUNC_0(FUNC_6(VAR_11->log_msg_baton3,
                                        VAR_17, VAR_9));
      else
        FUNC_0(VAR_17);
  }


  FUNC_0(FUNC_9(&VAR_15,
                                       VAR_13, VAR_12, VAR_11, VAR_9));
  if (! VAR_15)
    {
      FUNC_0(FUNC_11(VAR_13, VAR_12,
                                        VAR_10->dry_run, VAR_11, VAR_9));
      return FUNC_15(VAR_3, ((void*)0),
                               FUNC_1("No changes were shelved"));
    }

  if (! VAR_10->quiet)
    FUNC_0(FUNC_12(VAR_9, "shelved '%s'\n", VAR_13));

  return VAR_4;
}
