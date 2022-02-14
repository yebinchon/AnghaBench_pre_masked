
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_client__conflict_report_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int FUNC_2 (char const**,char const**,char const*,TYPE_1__*,int *) ;
 int FUNC_3 (int **,char const*,int const*,char const*,int ,int ,int const*,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,int *) ;

svn_error_t *
FUNC_5(const char *VAR_2,
                             const svn_opt_revision_t *VAR_3,
                             const char *VAR_4,
                             svn_boolean_t VAR_5,
                             const apr_array_header_t *VAR_6,
                             svn_client_ctx_t *VAR_7,
                             apr_pool_t *VAR_8)
{
  const char *VAR_9, *VAR_10;
  svn_client__conflict_report_t *VAR_11;

  FUNC_0(FUNC_2(&VAR_9, &VAR_10,
                                      VAR_4, VAR_7, VAR_8));

  if (!VAR_5)
    FUNC_1(
      FUNC_3(&VAR_11,
                               VAR_2, VAR_3,
                               VAR_9,
                               VAR_0 ,
                               VAR_5, VAR_6, VAR_7, VAR_8, VAR_8),
      VAR_7->wc_ctx, VAR_10, VAR_0 , VAR_8);
  else
    FUNC_0(FUNC_3(&VAR_11,
                                     VAR_2, VAR_3,
                                     VAR_9,
                                     VAR_0 ,
                                     VAR_5, VAR_6, VAR_7, VAR_8, VAR_8));

  FUNC_0(FUNC_4(VAR_11, VAR_8));
  return VAR_1;
}
