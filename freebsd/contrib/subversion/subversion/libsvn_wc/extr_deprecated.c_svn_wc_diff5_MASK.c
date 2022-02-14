
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks3_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct diff_callbacks3_wrapper_baton {int anchor_abspath; int anchor; void* baton; int const* callbacks3; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct diff_callbacks3_wrapper_baton* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char const*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *,struct diff_callbacks3_wrapper_baton*,int ,int ,int ,int ,int const*,int *,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc_adm_access_t *VAR_2,
             const char *VAR_3,
             const svn_wc_diff_callbacks3_t *VAR_4,
             void *VAR_5,
             svn_depth_t VAR_6,
             svn_boolean_t VAR_7,
             const apr_array_header_t *VAR_8,
             apr_pool_t *VAR_9)
{
  struct diff_callbacks3_wrapper_baton *VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10));
  svn_wc_context_t *VAR_11;
  svn_wc__db_t *VAR_12 = FUNC_5(VAR_2);

  FUNC_0(FUNC_6(&VAR_11, ((void*)0), VAR_12, VAR_9));

  VAR_10->callbacks3 = VAR_4;
  VAR_10->baton = VAR_5;
  VAR_10->anchor = FUNC_7(VAR_2);
  VAR_10->anchor_abspath = FUNC_4(VAR_2);

  FUNC_0(FUNC_9(VAR_11,
                       FUNC_2(VAR_10->anchor_abspath, VAR_3, VAR_9),
                       &VAR_1,
                       VAR_10,
                       VAR_6,
                       VAR_7,
                       VAR_0,
                       VAR_0,
                       VAR_8,
                       ((void*)0), ((void*)0),
                       VAR_9));

  return FUNC_3(FUNC_8(VAR_11));
}
