
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_fs__p2l_entry_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int **,char const*,int *) ;
 char* FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_1,
                      const svn_fs_fs__id_part_t *VAR_2,
                      const svn_fs_fs__p2l_entry_t *VAR_3,
                      apr_pool_t *VAR_4)
{
  const char *VAR_5;
  apr_file_t *VAR_6;

  FUNC_1(FUNC_5(VAR_1));

  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);
  FUNC_0(FUNC_3(&VAR_6, VAR_5, VAR_4));
  FUNC_0(FUNC_2(VAR_6, VAR_3, VAR_4));
  FUNC_0(FUNC_6(VAR_6, VAR_4));

  return VAR_0;
}
