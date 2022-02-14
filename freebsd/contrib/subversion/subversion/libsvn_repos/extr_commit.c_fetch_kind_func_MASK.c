
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct edit_baton {int fs; int txn; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *,char const*,int *) ;
 int FUNC_3 (int **,int ,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_node_kind_t *VAR_1,
                void *VAR_2,
                const char *VAR_3,
                svn_revnum_t VAR_4,
                apr_pool_t *VAR_5)
{
  struct edit_baton *VAR_6 = VAR_2;
  svn_fs_root_t *VAR_7;

  if (!FUNC_1(VAR_4))
    VAR_4 = FUNC_4(VAR_6->txn);

  FUNC_0(FUNC_3(&VAR_7, VAR_6->fs, VAR_4, VAR_5));

  FUNC_0(FUNC_2(VAR_1, VAR_7, VAR_3, VAR_5));

  return VAR_0;
}
