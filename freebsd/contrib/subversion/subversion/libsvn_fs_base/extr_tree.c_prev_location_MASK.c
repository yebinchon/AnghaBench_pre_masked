
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int **,char const**,int *,char const*,int *) ;
 int FUNC_2 (int *,char const**,int *,char const*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 char* FUNC_4 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
              svn_revnum_t *VAR_3,
              svn_fs_t *VAR_4,
              svn_fs_root_t *VAR_5,
              const char *VAR_6,
              apr_pool_t *VAR_7)
{
  const char *VAR_8, *VAR_9, *VAR_10;
  svn_fs_root_t *VAR_11;
  svn_revnum_t VAR_12;



  FUNC_0(FUNC_1(&VAR_11, &VAR_8, VAR_5, VAR_6, VAR_7));
  if (! VAR_11)
    {
      *VAR_3 = VAR_0;
      *VAR_2 = ((void*)0);
      return VAR_1;
    }
  FUNC_0(FUNC_2(&VAR_12, &VAR_9,
                           VAR_11, VAR_8, VAR_7));
  VAR_10 = FUNC_4(VAR_8, VAR_6);
  *VAR_2 = FUNC_3(VAR_9, VAR_10, VAR_7);
  *VAR_3 = VAR_12;
  return VAR_1;
}
