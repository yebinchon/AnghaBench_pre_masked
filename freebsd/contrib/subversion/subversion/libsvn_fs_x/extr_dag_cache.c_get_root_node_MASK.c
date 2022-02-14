
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* member_0; int member_1; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_13__ {TYPE_9__* dag_node_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
typedef int svn_fs_x__change_set_t ;
struct TYPE_14__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
struct TYPE_15__ {TYPE_3__* fs; } ;
typedef TYPE_4__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
struct TYPE_16__ {int * node; } ;
typedef TYPE_5__ cache_entry_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {int pool; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_9__*) ;
 TYPE_5__* FUNC_2 (TYPE_9__*,int ,TYPE_1__ const*) ;
 int FUNC_3 (int **,TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(dag_node_t **VAR_1,
              svn_fs_root_t *VAR_2,
              svn_fs_x__change_set_t VAR_3,
              apr_pool_t *VAR_4)
{
  svn_fs_t *VAR_5 = VAR_2->fs;
  svn_fs_x__data_t *VAR_6 = VAR_5->fsap_data;
  cache_entry_t *VAR_7;
  const svn_string_t VAR_8 = { "", 0 };


  FUNC_1(VAR_6->dag_node_cache);
  VAR_7 = FUNC_2(VAR_6->dag_node_cache, VAR_3, &VAR_8);



  if (VAR_7->node == ((void*)0))
    FUNC_0(FUNC_3(&VAR_7->node, VAR_5, VAR_3,
                               VAR_6->dag_node_cache->pool, VAR_4));


  *VAR_1 = VAR_7->node;
  return VAR_0;
}
