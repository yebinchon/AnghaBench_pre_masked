
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int *,int ,char const*,char const*,char const*,int ,int *,int *,int ,int ,void*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_6(svn_wc__db_t *VAR_3,
                                         const char *VAR_4,
                                         svn_depth_t VAR_5,
                                         const char *VAR_6,
                                         const char *VAR_7,
                                         const char *VAR_8,
                                         svn_revnum_t VAR_9,
                                         apr_hash_t *VAR_10,
                                         apr_hash_t *VAR_11,
                                         svn_boolean_t VAR_12,
                                         svn_wc_notify_func2_t VAR_13,
                                         void *VAR_14,
                                         apr_pool_t *VAR_15)
{
  const char *VAR_16;
  svn_wc__db_wcroot_t *VAR_17;

  FUNC_0(FUNC_5(&VAR_17, &VAR_16, VAR_3,
                              VAR_4, VAR_15, VAR_15));

  FUNC_2(VAR_17);

  if (FUNC_4(VAR_10, VAR_16))
    return VAR_0;

  if (VAR_5 == VAR_2)
    VAR_5 = VAR_1;

  FUNC_1(
    FUNC_3(VAR_17, VAR_16, VAR_3,
                               VAR_5, VAR_6, VAR_7,
                               VAR_8, VAR_9,
                               VAR_10, VAR_11, VAR_12,
                               VAR_13, VAR_14, VAR_15),
    VAR_17);

  return VAR_0;
}
