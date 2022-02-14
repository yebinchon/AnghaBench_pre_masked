
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_7__ {size_t last_non_empty; TYPE_3__* buckets; } ;
typedef TYPE_2__ svn_fs_x__dag_cache_t ;
typedef int dag_node_t ;
struct TYPE_8__ {scalar_t__ path_len; int * node; int path; } ;
typedef TYPE_3__ cache_entry_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static dag_node_t *
FUNC_1(svn_fs_x__dag_cache_t *VAR_0,
                       const svn_string_t *VAR_1)
{
  cache_entry_t *VAR_2 = &VAR_0->buckets[VAR_0->last_non_empty];

  if ( VAR_2->node
      && (VAR_2->path_len == VAR_1->len)
      && !FUNC_0(VAR_2->path, VAR_1->data, VAR_1->len))
    {
      return VAR_2->node;
    }

  return ((void*)0);
}
