
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int FUNC_1 (int*,int *,int *) ;
 int FUNC_2 (int*,int *,int *) ;
 int FUNC_3 (int *,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_int64_t *VAR_1,
               int *VAR_2,
               svn_sqlite__db_t *VAR_3,
               apr_pool_t *VAR_4)
{
  *VAR_1 = -1;
  *VAR_2 = -1;

  FUNC_0(
        FUNC_2(VAR_1, VAR_3, VAR_4),
        FUNC_1(VAR_2, VAR_3, VAR_4),
        FUNC_3(VAR_3, *VAR_2, VAR_4),
        VAR_0,
        VAR_3);

  return VAR_0;
}
