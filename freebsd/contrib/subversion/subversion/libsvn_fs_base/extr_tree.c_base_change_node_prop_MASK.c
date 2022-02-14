
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_4__ {int fs; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct change_node_prop_args {char const* path; char const* name; int const* value; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,struct change_node_prop_args*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_root_t *VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      const svn_string_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  struct change_node_prop_args VAR_7;

  if (! VAR_2->is_txn_root)
    return FUNC_0(VAR_2);

  VAR_7.root = VAR_2;
  VAR_7.path = VAR_3;
  VAR_7.name = VAR_4;
  VAR_7.value = VAR_5;
  return FUNC_1(VAR_2->fs, VAR_1, &VAR_7,
                                VAR_0, VAR_6);
}
