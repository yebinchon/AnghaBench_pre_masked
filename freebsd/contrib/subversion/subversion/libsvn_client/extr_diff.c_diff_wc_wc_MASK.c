
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
struct TYPE_7__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct diff_driver_info_t {char const* anchor; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char const* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;
 int FUNC_6 (int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const**,int *,int ,char const*,int ,int ,int const*,int const*,int ,int ,int *,int *) ;
 int FUNC_9 (scalar_t__*,int ,char const*,int ,int ,int *) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char **VAR_7,
           svn_boolean_t *VAR_8,
           struct diff_driver_info_t *VAR_9,
           const char *VAR_10,
           const svn_opt_revision_t *VAR_11,
           const char *VAR_12,
           const svn_opt_revision_t *VAR_13,
           svn_depth_t VAR_14,
           svn_boolean_t VAR_15,
           const apr_array_header_t *VAR_16,
           const svn_diff_tree_processor_t *VAR_17,
           svn_client_ctx_t *VAR_18,
           apr_pool_t *VAR_19,
           apr_pool_t *VAR_20)
{
  const char *VAR_21;

  FUNC_1(! FUNC_7(VAR_10));
  FUNC_1(! FUNC_7(VAR_12));

  FUNC_0(FUNC_5(&VAR_21, VAR_10, VAR_20));



  if ((FUNC_3(VAR_10, VAR_12) != 0)
      || (! ((VAR_11->kind == VAR_5)
             && (VAR_13->kind == VAR_6))))
    return FUNC_10(
       FUNC_6(VAR_1, ((void*)0),
                        FUNC_2("Only diffs between a path's text-base "
                          "and its working files are supported at this time"
                          )));

  if (VAR_9)
    {
      svn_node_kind_t VAR_22;

      FUNC_0(FUNC_9(&VAR_22, VAR_18->wc_ctx, VAR_21,
                              VAR_3, VAR_0, VAR_20));

      if (VAR_22 != VAR_4)
        VAR_9->anchor = FUNC_4(VAR_10, VAR_20);
      else
        VAR_9->anchor = VAR_10;
    }

  FUNC_0(FUNC_8(VAR_7, VAR_8,
                        VAR_18->wc_ctx, VAR_21, VAR_14,
                        VAR_15, VAR_16,
                        VAR_17,
                        VAR_18->cancel_func, VAR_18->cancel_baton,
                        VAR_19, VAR_20));
  return VAR_2;
}
