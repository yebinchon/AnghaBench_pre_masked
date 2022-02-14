
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
typedef int apr_pool_t ;


 char* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char const*,int ,int *) ;
 int FUNC_3 (int **,struct edit_baton*) ;
 int FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
          const char *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  const char *VAR_6 = FUNC_0(VAR_2, VAR_4);
  svn_fs_root_t *VAR_7;

  FUNC_1(FUNC_3(&VAR_7, VAR_5));
  FUNC_1(FUNC_2(VAR_7, VAR_6, VAR_3, VAR_4));

  FUNC_1(FUNC_4(VAR_7, VAR_6, VAR_4));

  return VAR_0;
}
