
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (void*,char const*,int *) ;
 int FUNC_2 (int **,void*,int ,int *) ;
 int FUNC_3 (int *,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_node_kind_t *VAR_1,
                void *VAR_2,
                const char *VAR_3,
                svn_revnum_t VAR_4,
                apr_pool_t *VAR_5)
{
  svn_fs_root_t *VAR_6;

  VAR_3 = FUNC_1(VAR_2, VAR_3, VAR_5);
  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_4, VAR_5));

  FUNC_0(FUNC_3(VAR_1, VAR_6, VAR_3, VAR_5));

  return VAR_0;
}
