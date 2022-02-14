
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mutex__t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_2,
          const char *VAR_3,
          svn_mutex__t *VAR_4,
          apr_pool_t *VAR_5,
          apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_4(VAR_2, VAR_0));

  FUNC_0(FUNC_3(VAR_2));

  FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_5));

  FUNC_0(FUNC_6(VAR_2, VAR_5));
  FUNC_1(VAR_4,
                       FUNC_2(VAR_2, VAR_6, VAR_5));

  return VAR_1;
}
