
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int *,char const*,char const*,char const*,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int **,char const*,char const*,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_sqlite__db_t **VAR_2,
          apr_int64_t *VAR_3,
          apr_int64_t *VAR_4,
          const char *VAR_5,
          const char *VAR_6,
          const char *VAR_7,
          const char *VAR_8,
          const char *VAR_9,
          svn_revnum_t VAR_10,
          svn_depth_t VAR_11,
          svn_boolean_t VAR_12,
          apr_int32_t VAR_13,
          apr_pool_t *VAR_14,
          apr_pool_t *VAR_15)
{
  FUNC_0(FUNC_3(VAR_2, VAR_5, VAR_8,
                                  VAR_1, VAR_12,
                                  VAR_13,
                                  ((void*)0) ,
                                  VAR_14, VAR_15));

  FUNC_1(FUNC_2(VAR_3, VAR_4,
                                *VAR_2, VAR_6, VAR_7,
                                VAR_9, VAR_10,
                                VAR_11, VAR_15),
                        *VAR_2);

  return VAR_0;
}
