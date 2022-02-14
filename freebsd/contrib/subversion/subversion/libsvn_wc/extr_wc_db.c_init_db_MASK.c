
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char const*,char const*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,int ,char*,int ,int ,int ,char const*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_8(
        apr_int64_t *VAR_11,
        apr_int64_t *VAR_12,

        svn_sqlite__db_t *VAR_13,
        const char *VAR_14,
        const char *VAR_15,
        const char *VAR_16,
        svn_revnum_t VAR_17,
        svn_depth_t VAR_18,
        apr_pool_t *VAR_19)
{
  svn_sqlite__stmt_t *VAR_20;


  FUNC_0(FUNC_3(VAR_13, VAR_0));

  FUNC_0(FUNC_7(VAR_13, VAR_19));


  FUNC_0(FUNC_1(VAR_11, VAR_14, VAR_15,
                          VAR_13, VAR_19));



  FUNC_0(FUNC_4(&VAR_20, VAR_13, VAR_2));
  FUNC_0(FUNC_5(VAR_12, VAR_20));

  if (VAR_16)
    {
      svn_wc__db_status_t VAR_21 = VAR_10;

      if (VAR_17 > 0)
        VAR_21 = VAR_9;

      FUNC_0(FUNC_4(&VAR_20, VAR_13, VAR_1));
      FUNC_0(FUNC_2(VAR_20, "isdsisrtst",
                                *VAR_12,
                                "",
                                0,
                                VAR_4,
                                *VAR_11,
                                VAR_16,
                                VAR_17,
                                VAR_7, VAR_21,
                                FUNC_6(VAR_5,
                                                   VAR_18),
                                VAR_6, VAR_8 ));

      FUNC_0(FUNC_5(((void*)0), VAR_20));
    }

  return VAR_3;
}
