
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct paths_changed_args {int * changes; TYPE_1__* root; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,struct paths_changed_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_hash_t **VAR_3,
                   svn_fs_root_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  struct paths_changed_args VAR_6;
  VAR_6.root = VAR_4;
  VAR_6.changes = ((void*)0);
  FUNC_0(FUNC_1(VAR_4->fs, VAR_2, &VAR_6,
                             VAR_0, VAR_5));
  *VAR_3 = VAR_6.changes;
  return VAR_1;
}
