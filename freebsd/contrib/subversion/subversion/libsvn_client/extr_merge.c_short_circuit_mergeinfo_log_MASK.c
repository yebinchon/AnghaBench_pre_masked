
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_mergeinfo_catalog_t ;
typedef int svn_log_entry_receiver_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int ,int) ;
 TYPE_1__* FUNC_3 (int ,char const*,int const*,int *,char const*,int const*,int const*,int const*,int ,int *,int ,int ,int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,char const**,int *) ;
 int FUNC_8 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t*
FUNC_9(svn_mergeinfo_catalog_t *VAR_4,
                            svn_boolean_t VAR_5,
                            const char *VAR_6,
                            const svn_opt_revision_t *VAR_7,
                            const char *VAR_8,
                            const svn_opt_revision_t *VAR_9,
                            const svn_opt_revision_t *VAR_10,
                            const svn_opt_revision_t *VAR_11,
                            svn_log_entry_receiver_t VAR_12,
                            svn_revnum_t *VAR_13,
                            svn_client_ctx_t *VAR_14,
                            svn_ra_session_t *VAR_15,
                            apr_pool_t *VAR_16,
                            apr_pool_t *VAR_17)
{
  apr_array_header_t *VAR_18;
  svn_error_t *VAR_19;
  const char *VAR_20;

  FUNC_0(FUNC_7(VAR_15, &VAR_20, VAR_17));

  VAR_18 = FUNC_2(VAR_17, 0, sizeof(const char *));
  VAR_19 = FUNC_3(VAR_5,
                                  VAR_6,
                                  VAR_7,
                                  VAR_4,
                                  VAR_8,
                                  VAR_9,
                                  VAR_10,
                                  VAR_11,
                                  VAR_12, VAR_13,
                                  VAR_2, VAR_3,
                                  VAR_18, VAR_14, VAR_15,
                                  VAR_16, VAR_17);

  VAR_19 = FUNC_5(
                  VAR_19,
                  FUNC_8(VAR_15, VAR_20, VAR_17));

  if (VAR_19)
    {




      if (FUNC_1(*VAR_13)
          && VAR_19->apr_err == VAR_0)
        {
          FUNC_4(VAR_19);
          VAR_19 = ((void*)0);
        }
      else
        {
          return FUNC_6(VAR_19);
        }
    }
  return VAR_1;
}
