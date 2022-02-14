
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ copyfrom_path; int node_rev_id; } ;
typedef TYPE_1__ svn_fs_path_change2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static svn_fs_path_change2_t *
FUNC_3(const svn_fs_path_change2_t *VAR_0,
                apr_pool_t *VAR_1)
{
  svn_fs_path_change2_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                              sizeof(*VAR_0));
  VAR_2->node_rev_id = FUNC_2(VAR_0->node_rev_id, VAR_1);
  if (VAR_0->copyfrom_path)
    VAR_2->copyfrom_path = FUNC_1(VAR_1, VAR_0->copyfrom_path);

  return VAR_2;
}
