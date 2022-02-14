
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct edit_baton {int * root; int txn_pool; int txn; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_root_t **VAR_1,
         struct edit_baton *VAR_2)
{
  if (VAR_2->root == ((void*)0))
    FUNC_0(FUNC_1(&VAR_2->root, VAR_2->txn, VAR_2->txn_pool));
  *VAR_1 = VAR_2->root;
  return VAR_0;
}
