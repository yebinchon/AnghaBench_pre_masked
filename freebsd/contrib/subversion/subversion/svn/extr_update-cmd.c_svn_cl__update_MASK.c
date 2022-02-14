
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_9__ {struct svn_cl__check_externals_failed_notify_baton* notify_baton2; int notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_10__ {scalar_t__ depth; scalar_t__ set_depth; int quiet; int parents; int adds_as_modification; int force; int ignore_externals; int start_revision; scalar_t__ changelists; int targets; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
typedef int svn_cl__conflict_stats_t ;
struct TYPE_11__ {TYPE_1__* ctx; int * conflict_stats; TYPE_2__* opt_state; } ;
typedef TYPE_3__ svn_cl__cmd_baton_t ;
typedef void* svn_boolean_t ;
struct svn_cl__check_externals_failed_notify_baton {struct svn_cl__check_externals_failed_notify_baton* wrapped_baton; void* had_externals_error; int wrapped_func; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int **,int *,int ,TYPE_1__*,void*,int *) ;
 int FUNC_4 (int **,scalar_t__,int *,scalar_t__,TYPE_1__*,int *,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int **,int *,int *) ;
 int * FUNC_8 (struct svn_cl__check_externals_failed_notify_baton*,int *) ;
 int FUNC_9 (int *,int *,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_10 (int **,int *,int *,scalar_t__,void*,int ,int ,int ,int ,TYPE_1__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int *,int *) ;

svn_error_t *
FUNC_14(apr_getopt_t *VAR_7,
               void *VAR_8,
               apr_pool_t *VAR_9)
{
  svn_cl__opt_state_t *VAR_10 = ((svn_cl__cmd_baton_t *) VAR_8)->opt_state;
  svn_cl__conflict_stats_t *VAR_11 =
    ((svn_cl__cmd_baton_t *) VAR_8)->conflict_stats;
  svn_client_ctx_t *VAR_12 = ((svn_cl__cmd_baton_t *) VAR_8)->ctx;
  apr_array_header_t *VAR_13;
  svn_depth_t VAR_14;
  svn_boolean_t VAR_15;
  struct svn_cl__check_externals_failed_notify_baton VAR_16;
  apr_array_header_t *VAR_17;
  apr_array_header_t *VAR_18;
  svn_error_t *VAR_19 = VAR_2;
  svn_error_t *VAR_20 = VAR_2;

  FUNC_0(FUNC_3(&VAR_13, VAR_7,
                                                      VAR_10->targets,
                                                      VAR_12, VAR_0,
                                                      VAR_9));


  FUNC_13(VAR_13, VAR_9);

  FUNC_0(FUNC_7(&VAR_13, VAR_13, VAR_9));

  FUNC_0(FUNC_5(VAR_13));



  if (VAR_10->changelists)
    {
      svn_depth_t VAR_21 = VAR_10->depth;
      if (VAR_21 == VAR_6)
        VAR_21 = VAR_5;
      FUNC_0(FUNC_4(&VAR_13,
                                       VAR_10->changelists, VAR_13,
                                       VAR_21, VAR_12, VAR_9,
                                       VAR_9));
    }


  if (VAR_10->set_depth != VAR_6)
    {
      VAR_14 = VAR_10->set_depth;
      VAR_15 = VAR_3;
    }
  else
    {
      VAR_14 = VAR_10->depth;
      VAR_15 = VAR_0;
    }

  VAR_16.wrapped_func = VAR_12->notify_func2;
  VAR_16.wrapped_baton = VAR_12->notify_baton2;
  VAR_16.had_externals_error = VAR_0;
  VAR_12->notify_func2 = VAR_4;
  VAR_12->notify_baton2 = &VAR_16;

  FUNC_0(FUNC_10(&VAR_17, VAR_13,
                             &(VAR_10->start_revision),
                             VAR_14, VAR_15,
                             VAR_10->ignore_externals,
                             VAR_10->force,
                             VAR_10->adds_as_modification,
                             VAR_10->parents,
                             VAR_12, VAR_9));

  if (VAR_16.had_externals_error)
    VAR_20 = FUNC_12(VAR_1,
                                     ((void*)0),
                                     FUNC_1("Failure occurred processing one or "
                                       "more externals definitions"));


  FUNC_0(FUNC_6(&VAR_18, VAR_11,
                                           VAR_9, VAR_9));
  if (VAR_18)
    FUNC_0(FUNC_9(VAR_18, VAR_11,
                                   VAR_10, VAR_12, VAR_9));

  if (! VAR_10->quiet)
    {
      VAR_19 = FUNC_2(VAR_13, VAR_17, VAR_9);
      if (VAR_19)
        return FUNC_11(VAR_20, VAR_19);




      VAR_19 = FUNC_8(VAR_16.wrapped_baton,
                                                  VAR_9);
      if (VAR_19)
        return FUNC_11(VAR_20, VAR_19);
    }

  return FUNC_11(VAR_20, VAR_19);
}
