
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_9__ {TYPE_2__* dag_node_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_2__ svn_fs_x__dag_cache_t ;
typedef int dag_node_t ;
struct TYPE_11__ {int node; } ;
typedef TYPE_3__ cache_entry_t ;
struct TYPE_13__ {TYPE_1__* fsap_data; } ;
struct TYPE_12__ {int change_set; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *) ;

void
FUNC_7(dag_node_t *VAR_0)
{
  svn_fs_x__data_t *VAR_1 = FUNC_5(VAR_0)->fsap_data;
  const char *VAR_2 = FUNC_4(VAR_0);
  svn_fs_x__dag_cache_t *VAR_3 = VAR_1->dag_node_cache;

  cache_entry_t *VAR_4;
  svn_string_t VAR_5;

  FUNC_0(VAR_3);
  VAR_4 = FUNC_1(VAR_3, FUNC_6(VAR_0)->change_set,
                        FUNC_2(&VAR_5, VAR_2));
  VAR_4->node = FUNC_3(VAR_0, VAR_3->pool);
}
