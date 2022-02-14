
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int *,int *,char const**,scalar_t__*,int *,int *,char const**,int *,int const**,char const**,int **,int *,int **,int *,int *,char const*,int *,int *) ;
 int FUNC_6 (char const**,char const**,int *,scalar_t__,int *) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_status_t *VAR_2,
                         svn_node_kind_t *VAR_3,
                         svn_revnum_t *VAR_4,
                         const char **VAR_5,
                         const char **VAR_6,
                         const char **VAR_7,
                         svn_revnum_t *VAR_8,
                         apr_time_t *VAR_9,
                         const char **VAR_10,
                         svn_depth_t *VAR_11,
                         const svn_checksum_t **VAR_12,
                         const char **VAR_13,
                         svn_wc__db_lock_t **VAR_14,
                         svn_boolean_t *VAR_15,
                         apr_hash_t **VAR_16,
                         svn_boolean_t *VAR_17,
                         svn_wc__db_t *VAR_18,
                         const char *VAR_19,
                         apr_pool_t *VAR_20,
                         apr_pool_t *VAR_21)
{
  svn_wc__db_wcroot_t *VAR_22;
  const char *VAR_23;
  apr_int64_t VAR_24;

  FUNC_1(FUNC_4(VAR_19));

  FUNC_0(FUNC_7(&VAR_22, &VAR_23, VAR_18,
                              VAR_19, VAR_21, VAR_21));
  FUNC_3(VAR_22);

  FUNC_2(
          FUNC_5(VAR_2, VAR_3, VAR_4,
                                            VAR_5, &VAR_24,
                                            VAR_8, VAR_9,
                                            VAR_10, VAR_11,
                                            VAR_12, VAR_13, VAR_14,
                                            VAR_15, VAR_16, VAR_17,
                                            VAR_22, VAR_23,
                                            VAR_20, VAR_21),
          FUNC_6(VAR_6, VAR_7,
                                      VAR_22, VAR_24, VAR_20),
          VAR_1,
          VAR_1,
          VAR_22);
  FUNC_1(VAR_24 != VAR_0);

  return VAR_1;
}
