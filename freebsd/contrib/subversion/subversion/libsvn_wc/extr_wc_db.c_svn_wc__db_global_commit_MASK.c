
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,int ,int ,char const*,int const*,int *,int ,int ,int const*,int *) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_t *VAR_2,
                         const char *VAR_3,
                         svn_revnum_t VAR_4,
                         svn_revnum_t VAR_5,
                         apr_time_t VAR_6,
                         const char *VAR_7,
                         const svn_checksum_t *VAR_8,
                         apr_hash_t *VAR_9,
                         svn_boolean_t VAR_10,
                         svn_boolean_t VAR_11,
                         const svn_skel_t *VAR_12,
                         apr_pool_t *VAR_13)
{
  const char *VAR_14;
  svn_wc__db_wcroot_t *VAR_15;

  FUNC_1(FUNC_7(VAR_3));
  FUNC_1(FUNC_2(VAR_4));

  FUNC_0(FUNC_8(&VAR_15, &VAR_14, VAR_2,
                              VAR_3, VAR_13, VAR_13));
  FUNC_4(VAR_15);

  FUNC_3(
    FUNC_5(VAR_15, VAR_14,
                VAR_4, VAR_5, VAR_6, VAR_7,
                VAR_8, VAR_9, VAR_10,
                VAR_11, VAR_12, VAR_13),
    VAR_15);


  FUNC_0(FUNC_6(VAR_15, VAR_3, VAR_1, VAR_13));

  return VAR_0;
}
