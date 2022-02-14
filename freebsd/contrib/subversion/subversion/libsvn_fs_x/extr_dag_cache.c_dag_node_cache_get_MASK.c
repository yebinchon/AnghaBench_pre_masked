
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_8__ {int dag_node_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
typedef int svn_fs_x__change_set_t ;
struct TYPE_9__ {TYPE_1__* fs; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int dag_node_t ;
struct TYPE_10__ {int * node; } ;
struct TYPE_7__ {TYPE_2__* fsap_data; } ;


 int FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (int ,int ,int const*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static dag_node_t *
FUNC_3(svn_fs_root_t *VAR_0,
                   const svn_string_t *VAR_1)
{
  svn_fs_x__data_t *VAR_2 = VAR_0->fs->fsap_data;
  svn_fs_x__change_set_t VAR_3 = FUNC_2(VAR_0);

  FUNC_0(VAR_2->dag_node_cache);
  return FUNC_1(VAR_2->dag_node_cache, VAR_3, VAR_1)->node;
}
