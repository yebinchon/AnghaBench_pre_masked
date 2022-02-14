
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
 int FUNC_3 (int **,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*,char const*,int *) ;
 char* FUNC_6 (char const*,char const*) ;

svn_error_t *
FUNC_7(svn_revnum_t *VAR_2,
                         const char **VAR_3,
                         svn_revnum_t *VAR_4,
                         svn_fs_t *VAR_5,
                         svn_revnum_t VAR_6,
                         const char *VAR_7,
                         apr_pool_t *VAR_8)
{
  svn_fs_root_t *VAR_9, *VAR_10;
  const char *VAR_11, *VAR_12, *VAR_13;
  svn_revnum_t VAR_14;


  if (VAR_2)
    *VAR_2 = VAR_0;
  if (VAR_4)
    *VAR_4 = VAR_0;
  if (VAR_3)
    *VAR_3 = ((void*)0);



  FUNC_0(FUNC_3(&VAR_9, VAR_5, VAR_6, VAR_8));
  FUNC_0(FUNC_1(&VAR_10, &VAR_11, VAR_9, VAR_7, VAR_8));
  if (! VAR_10)
    return VAR_1;
  FUNC_0(FUNC_2(&VAR_14, &VAR_12,
                             VAR_10, VAR_11, VAR_8));
  VAR_13 = FUNC_6(VAR_11, VAR_7);
  if (VAR_3)
    *VAR_3 = FUNC_5(VAR_12, VAR_13, VAR_8);
  if (VAR_2)
    *VAR_2 = FUNC_4(VAR_10);
  if (VAR_4)
    *VAR_4 = VAR_14;
  return VAR_1;
}
