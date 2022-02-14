
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
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,char const**,int *,int *,int *,char const**,int *,int const**,char const**,char const**,int *,int *,int **,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const**,char const**,int *,int ,int *) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_status_t *VAR_1,
                     svn_node_kind_t *VAR_2,
                     svn_revnum_t *VAR_3,
                     const char **VAR_4,
                     const char **VAR_5,
                     const char **VAR_6,
                     svn_revnum_t *VAR_7,
                     apr_time_t *VAR_8,
                     const char **VAR_9,
                     svn_depth_t *VAR_10,
                     const svn_checksum_t **VAR_11,
                     const char **VAR_12,
                     const char **VAR_13,
                     const char **VAR_14,
                     const char **VAR_15,
                     svn_revnum_t *VAR_16,
                     svn_wc__db_lock_t **VAR_17,
                     svn_filesize_t *VAR_18,
                     apr_time_t *VAR_19,
                     const char **VAR_20,
                     svn_boolean_t *VAR_21,
                     svn_boolean_t *VAR_22,
                     svn_boolean_t *VAR_23,
                     svn_boolean_t *VAR_24,
                     svn_boolean_t *VAR_25,
                     svn_boolean_t *VAR_26,
                     svn_boolean_t *VAR_27,
                     svn_wc__db_t *VAR_28,
                     const char *VAR_29,
                     apr_pool_t *VAR_30,
                     apr_pool_t *VAR_31)
{
  svn_wc__db_wcroot_t *VAR_32;
  const char *VAR_33;
  apr_int64_t VAR_34, VAR_35;

  FUNC_1(FUNC_5(VAR_29));

  FUNC_0(FUNC_7(&VAR_32, &VAR_33, VAR_28,
                              VAR_29, VAR_31, VAR_31));
  FUNC_3(VAR_32);

  FUNC_2(
          FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_34,
                    VAR_7, VAR_8, VAR_9,
                    VAR_10, VAR_11, VAR_12, VAR_13,
                    &VAR_35, VAR_16, VAR_17,
                    VAR_18, VAR_19, VAR_20, VAR_21,
                    VAR_22, VAR_23, VAR_24,
                    VAR_25, VAR_26, VAR_27,
                    VAR_32, VAR_33, VAR_30, VAR_31),
          FUNC_6(VAR_5, VAR_6,
                                      VAR_32, VAR_34, VAR_30),
          FUNC_6(VAR_14, VAR_15,
                                      VAR_32, VAR_35,
                                      VAR_30),
        VAR_0,
        VAR_32);

  return VAR_0;
}
