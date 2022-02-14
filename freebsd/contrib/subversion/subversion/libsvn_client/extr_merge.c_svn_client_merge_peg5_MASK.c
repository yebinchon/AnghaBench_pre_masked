
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_13__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_client__conflict_report_t ;
typedef int svn_boolean_t ;
typedef int automatic_merge_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,char const*,int const*,char const*,int ,int ,int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int **,int *,char const*,int ,int ,int ,int ,int ,TYPE_2__ const*,TYPE_1__*,int *,int *) ;
 int FUNC_5 (char const**,char const**,char const*,TYPE_1__*,int *) ;
 int FUNC_6 (int **,char const*,int const*,TYPE_2__ const*,char const*,int ,int ,int ,int ,int ,int ,int ,TYPE_2__ const*,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int ,int *,int ) ;

svn_error_t *
FUNC_9(const char *VAR_4,
                      const apr_array_header_t *VAR_5,
                      const svn_opt_revision_t *VAR_6,
                      const char *VAR_7,
                      svn_depth_t VAR_8,
                      svn_boolean_t VAR_9,
                      svn_boolean_t VAR_10,
                      svn_boolean_t VAR_11,
                      svn_boolean_t VAR_12,
                      svn_boolean_t VAR_13,
                      svn_boolean_t VAR_14,
                      const apr_array_header_t *VAR_15,
                      svn_client_ctx_t *VAR_16,
                      apr_pool_t *VAR_17)
{
  const char *VAR_18, *VAR_19;
  svn_client__conflict_report_t *VAR_20;


  if (VAR_5 != ((void*)0) && VAR_5->nelts == 0)
    return VAR_2;

  FUNC_0(FUNC_5(&VAR_18, &VAR_19,
                                      VAR_7, VAR_16, VAR_17));


  if (VAR_5 == ((void*)0))
    {
      automatic_merge_t *VAR_21;

      if (VAR_9)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_2("Cannot merge automatically while "
                                  "ignoring mergeinfo"));


      FUNC_0(FUNC_3(
                                    &VAR_21,
                                    VAR_4, VAR_6,
                                    VAR_18,
                                    VAR_14,
                                    VAR_3 ,
                                    VAR_3 ,
                                    VAR_16, VAR_17, VAR_17));

      if (!VAR_13)
        FUNC_1(
          FUNC_4(&VAR_20,
                                    VAR_21,
                                    VAR_18, VAR_8,
                                    VAR_10,
                                    VAR_11, VAR_12, VAR_13,
                                    VAR_15, VAR_16, VAR_17, VAR_17),
          VAR_16->wc_ctx, VAR_19, VAR_0 , VAR_17);
      else
        FUNC_0(FUNC_4(&VAR_20,
                                    VAR_21,
                                    VAR_18, VAR_8,
                                    VAR_10,
                                    VAR_11, VAR_12, VAR_13,
                                    VAR_15, VAR_16, VAR_17, VAR_17));
    }
  else if (!VAR_13)
    FUNC_1(
      FUNC_6(&VAR_20,
                       VAR_4, VAR_6,
                       VAR_5,
                       VAR_18, VAR_8, VAR_9,
                       VAR_10,
                       VAR_11, VAR_12, VAR_13,
                       VAR_14, VAR_15, VAR_16, VAR_17, VAR_17),
      VAR_16->wc_ctx, VAR_19, VAR_0 , VAR_17);
  else
    FUNC_0(FUNC_6(&VAR_20,
                       VAR_4, VAR_6,
                       VAR_5,
                       VAR_18, VAR_8, VAR_9,
                       VAR_10,
                       VAR_11, VAR_12, VAR_13,
                       VAR_14, VAR_15, VAR_16, VAR_17, VAR_17));

  FUNC_0(FUNC_7(VAR_20, VAR_17));
  return VAR_2;
}
