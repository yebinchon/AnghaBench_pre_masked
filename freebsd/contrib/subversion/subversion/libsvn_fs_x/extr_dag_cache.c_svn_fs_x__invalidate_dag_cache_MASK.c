
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* dag_node_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {TYPE_5__* buckets; } ;
typedef TYPE_3__ svn_fs_x__dag_cache_t ;
typedef scalar_t__ svn_fs_x__change_set_t ;
struct TYPE_11__ {TYPE_1__* fs; } ;
typedef TYPE_4__ svn_fs_root_t ;
struct TYPE_12__ {scalar_t__ change_set; int * node; int path; } ;
typedef TYPE_5__ cache_entry_t ;
typedef size_t apr_size_t ;
struct TYPE_8__ {TYPE_2__* fsap_data; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

void
FUNC_3(svn_fs_root_t *VAR_1,
                               const char *VAR_2)
{
  svn_fs_x__data_t *VAR_3 = VAR_1->fs->fsap_data;
  svn_fs_x__dag_cache_t *VAR_4 = VAR_3->dag_node_cache;
  svn_fs_x__change_set_t VAR_5 = FUNC_0(VAR_1);

  apr_size_t VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
      cache_entry_t *VAR_7 = &VAR_4->buckets[VAR_6];
      if (VAR_7->change_set == VAR_5 && VAR_7->node)
        {





          if (!FUNC_1(VAR_7->path)
              || FUNC_2(VAR_2 + 1, VAR_7->path))
            VAR_7->node = ((void*)0);
        }
    }
}
