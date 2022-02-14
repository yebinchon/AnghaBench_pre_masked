
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct node_kind_args {int kind; int const* id; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const**,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (int ,int ,struct node_kind_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_node_kind_t *VAR_3,
          svn_fs_root_t *VAR_4,
          const char *VAR_5,
          apr_pool_t *VAR_6)
{
  struct node_kind_args VAR_7;
  const svn_fs_id_t *VAR_8;


  FUNC_0(FUNC_1(&VAR_8, VAR_4, VAR_5, VAR_6));


  VAR_7.id = VAR_8;
  FUNC_0(FUNC_2(VAR_4->fs, VAR_2, &VAR_7,
                                 VAR_1, VAR_6));

  *VAR_3 = VAR_7.kind;
  return VAR_0;
}
