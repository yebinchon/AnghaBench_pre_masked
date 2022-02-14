
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct revision_root_args {int ** root_p; int rev; } ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int **,int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                       trail_t *VAR_2)
{
  struct revision_root_args *VAR_3 = VAR_1;
  dag_node_t *VAR_4;
  svn_fs_root_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_4, VAR_2->fs, VAR_3->rev,
                                         VAR_2, VAR_2->pool));
  VAR_5 = FUNC_1(VAR_2->fs, VAR_3->rev, VAR_4, VAR_2->pool);

  *VAR_3->root_p = VAR_5;
  return VAR_0;
}
