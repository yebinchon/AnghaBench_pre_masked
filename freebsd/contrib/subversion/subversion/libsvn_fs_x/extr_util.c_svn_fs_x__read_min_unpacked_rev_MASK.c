
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int ,int,int ,int *) ;
 int FUNC_4 (int *,char*,int*,int *) ;
 int FUNC_5 (int *,char*,int *) ;

svn_error_t *
FUNC_6(svn_revnum_t *VAR_4,
                                svn_fs_t *VAR_5,
                                apr_pool_t *VAR_6)
{
  char VAR_7[80];
  apr_file_t *VAR_8;
  apr_size_t VAR_9;

  FUNC_0(FUNC_3(&VAR_8,
                           FUNC_1(VAR_5, VAR_6),
                           VAR_2 | VAR_0,
                           VAR_1,
                           VAR_6));
  VAR_9 = sizeof(VAR_7);
  FUNC_0(FUNC_4(VAR_8, VAR_7, &VAR_9, VAR_6));
  FUNC_0(FUNC_2(VAR_8, VAR_6));

  FUNC_0(FUNC_5(VAR_4, VAR_7, ((void*)0)));
  return VAR_3;
}
