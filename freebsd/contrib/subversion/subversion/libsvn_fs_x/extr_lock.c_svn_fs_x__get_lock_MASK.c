
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_lock_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int **,char const*,int ,int *) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,int ) ;

svn_error_t *
FUNC_4(svn_lock_t **VAR_2,
                   svn_fs_t *VAR_3,
                   const char *VAR_4,
                   apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_3(VAR_3, VAR_1));
  VAR_4 = FUNC_2(VAR_4, VAR_5);
  return FUNC_1(VAR_3, VAR_2, VAR_4, VAR_0, VAR_5);
}
