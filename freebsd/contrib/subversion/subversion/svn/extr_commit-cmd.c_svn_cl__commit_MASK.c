
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_16__ {int log_msg_baton3; struct copy_warning_notify_baton* notify_baton2; int notify_func2; scalar_t__ config; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_17__ {scalar_t__ depth; scalar_t__ quiet; int revprop_table; int changelists; int include_externals; int keep_changelists; int targets; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
struct TYPE_18__ {TYPE_1__* ctx; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
typedef void* svn_boolean_t ;
struct copy_warning_notify_baton {scalar_t__ depth; void* warned; struct copy_warning_notify_baton* wrapped_baton; int wrapped_func; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
struct TYPE_19__ {int nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char const*) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__**,int *,int ,TYPE_1__*,void*,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (TYPE_4__**,TYPE_4__*,int *) ;
 int FUNC_8 (int *,TYPE_2__*,char const*,scalar_t__,int *) ;
 int * VAR_7 ;
 int * FUNC_9 (TYPE_4__*,scalar_t__,void*,int ,int ,int ,int ,int ,int ,int *,int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *,void**,int ,int ,void*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char const**,TYPE_4__**,TYPE_4__*,int ,int *,int *) ;
 int * FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (TYPE_4__*,int *) ;
 int FUNC_14 (char const**,char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_15(apr_getopt_t *VAR_10,
               void *VAR_11,
               apr_pool_t *VAR_12)
{
  svn_error_t *VAR_13;
  svn_cl__opt_state_t *VAR_14 = ((svn_cl__cmd_baton_t *) VAR_11)->opt_state;
  svn_client_ctx_t *VAR_15 = ((svn_cl__cmd_baton_t *) VAR_11)->ctx;
  apr_array_header_t *VAR_16;
  apr_array_header_t *VAR_17;
  const char *VAR_18;
  svn_config_t *VAR_19;
  svn_boolean_t VAR_20 = VAR_0;
  struct copy_warning_notify_baton VAR_21;

  FUNC_0(FUNC_4(&VAR_16, VAR_10,
                                                      VAR_14->targets,
                                                      VAR_15, VAR_0, VAR_12));

  FUNC_1(FUNC_5(VAR_16),
            FUNC_2("Commit targets must be local paths"));


  FUNC_13(VAR_16, VAR_12);

  FUNC_0(FUNC_7(&VAR_16, VAR_16, VAR_12));


  FUNC_0(FUNC_11(&VAR_18, &VAR_17, VAR_16,
                                      VAR_5, VAR_12, VAR_12));

  if ((! VAR_17) || (! VAR_17->nelts))
    {
      const char *VAR_22, *VAR_23;

      FUNC_0(FUNC_14(&VAR_22, &VAR_23, VAR_15->wc_ctx,
                                        VAR_18, VAR_12, VAR_12));
      if (*VAR_23)
        VAR_18 = FUNC_3(VAR_12, VAR_22);
    }

  if (VAR_14->depth == VAR_9)
    VAR_14->depth = VAR_8;

  VAR_19 = VAR_15->config
           ? FUNC_12(VAR_15->config, VAR_1)
           : ((void*)0);
  if (VAR_19)
    FUNC_0(FUNC_10(VAR_19, &VAR_20,
                                VAR_3,
                                VAR_2, VAR_0));





  FUNC_0(FUNC_8(&(VAR_15->log_msg_baton3),
                                     VAR_14, VAR_18,
                                     VAR_15->config, VAR_12));





  if (VAR_14->depth < VAR_8)
    {
      VAR_21.wrapped_func = VAR_15->notify_func2;
      VAR_21.wrapped_baton = VAR_15->notify_baton2;
      VAR_21.depth = VAR_14->depth;
      VAR_21.warned = VAR_0;
      VAR_15->notify_func2 = VAR_6;
      VAR_15->notify_baton2 = &VAR_21;
    }


  VAR_13 = FUNC_9(VAR_16,
                           VAR_14->depth,
                           VAR_20,
                           VAR_14->keep_changelists,
                           VAR_5 ,
                           VAR_14->include_externals,
                           VAR_14->include_externals,
                           VAR_14->changelists,
                           VAR_14->revprop_table,
                           (VAR_14->quiet
                            ? ((void*)0) : VAR_7),
                           ((void*)0),
                           VAR_15,
                           VAR_12);
  FUNC_0(FUNC_6(VAR_15->log_msg_baton3, VAR_13, VAR_12));

  return VAR_4;
}
