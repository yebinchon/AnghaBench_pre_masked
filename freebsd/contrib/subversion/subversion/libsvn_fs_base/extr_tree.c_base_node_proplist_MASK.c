
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct node_proplist_args {char const* path; TYPE_1__* root; int ** table_p; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,struct node_proplist_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_hash_t **VAR_3,
                   svn_fs_root_t *VAR_4,
                   const char *VAR_5,
                   apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7;
  struct node_proplist_args VAR_8;

  VAR_8.table_p = &VAR_7;
  VAR_8.root = VAR_4;
  VAR_8.path = VAR_5;

  FUNC_0(FUNC_1(VAR_4->fs, VAR_2, &VAR_8,
                                 VAR_0, VAR_6));

  *VAR_3 = VAR_7;
  return VAR_1;
}
