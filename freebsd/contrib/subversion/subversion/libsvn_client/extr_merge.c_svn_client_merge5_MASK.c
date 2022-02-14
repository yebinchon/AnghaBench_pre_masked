
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_12__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_client__conflict_report_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,TYPE_1__ const*,int *) ;
 int FUNC_4 (char const**,char const**,char const*,TYPE_2__*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,char const*,TYPE_1__ const*,char const*,TYPE_1__ const*,char const*,int ,int ,int ,int ,int ,int ,int ,int const*,TYPE_2__*,int *,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(const char *VAR_5,
                  const svn_opt_revision_t *VAR_6,
                  const char *VAR_7,
                  const svn_opt_revision_t *VAR_8,
                  const char *VAR_9,
                  svn_depth_t VAR_10,
                  svn_boolean_t VAR_11,
                  svn_boolean_t VAR_12,
                  svn_boolean_t VAR_13,
                  svn_boolean_t VAR_14,
                  svn_boolean_t VAR_15,
                  svn_boolean_t VAR_16,
                  const apr_array_header_t *VAR_17,
                  svn_client_ctx_t *VAR_18,
                  apr_pool_t *VAR_19)
{
  const char *VAR_20, *VAR_21;
  svn_client__conflict_report_t *VAR_22;



  if ((VAR_6->kind == VAR_4)
      || (VAR_8->kind == VAR_4))
    return FUNC_7(VAR_1, ((void*)0),
                            FUNC_2("Not all required revisions are specified"));
  if (FUNC_8(VAR_5) != FUNC_8(VAR_7))
    return FUNC_7(VAR_2, ((void*)0),
                            FUNC_2("Merge sources must both be "
                              "either paths or URLs"));



  FUNC_0(FUNC_3(VAR_5, VAR_6, VAR_19));
  FUNC_0(FUNC_3(VAR_7, VAR_8, VAR_19));

  FUNC_0(FUNC_4(&VAR_20, &VAR_21,
                                      VAR_9, VAR_18, VAR_19));

  if (!VAR_15)
    FUNC_1(
      FUNC_6(&VAR_22,
                               VAR_5, VAR_6, VAR_7, VAR_8,
                               VAR_20, VAR_10, VAR_11,
                               VAR_12,
                               VAR_13, VAR_14, VAR_15,
                               VAR_16, VAR_17, VAR_18, VAR_19, VAR_19),
      VAR_18->wc_ctx, VAR_21, VAR_0 , VAR_19);
  else
    FUNC_0(FUNC_6(&VAR_22,
                                     VAR_5, VAR_6, VAR_7, VAR_8,
                                     VAR_20, VAR_10, VAR_11,
                                     VAR_12,
                                     VAR_13, VAR_14, VAR_15,
                                     VAR_16, VAR_17, VAR_18, VAR_19,
                                     VAR_19));

  FUNC_0(FUNC_5(VAR_22, VAR_19));
  return VAR_3;
}
