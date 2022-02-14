
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; scalar_t__ is_txn_root; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct dag_node_cache_t {int idx; int * pool; void* node; } ;
typedef int dag_node_t ;
struct TYPE_5__ {int node_cache_idx; char** node_cache_keys; int node_cache; } ;
typedef TYPE_2__ base_root_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct dag_node_cache_t* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char**,char**,int) ;
 void* FUNC_6 (int *,int *) ;
 struct dag_node_cache_t* FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*,struct dag_node_cache_t*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(svn_fs_root_t *VAR_1,
                   const char *VAR_2,
                   dag_node_t *VAR_3)
{
  base_root_data_t *VAR_4 = VAR_1->fsap_data;
  const char *VAR_5;
  apr_pool_t *VAR_6;
  struct dag_node_cache_t *VAR_7;
  int VAR_8 = FUNC_1(VAR_4->node_cache);
  FUNC_4(*VAR_2 == '/');
  FUNC_4((VAR_4->node_cache_idx <= VAR_8)
         && (VAR_8 <= VAR_0));


  if (VAR_1->is_txn_root)
    return;







  VAR_7 = FUNC_7(VAR_4->node_cache, VAR_2);
  if (VAR_7)
    {




      FUNC_0();
    }



  if (FUNC_1(VAR_4->node_cache) == VAR_0)
    {

      VAR_5 = VAR_4->node_cache_keys[VAR_4->node_cache_idx];
      VAR_7 = FUNC_7(VAR_4->node_cache, VAR_5);
      FUNC_8(VAR_4->node_cache, VAR_5, ((void*)0));
      VAR_6 = VAR_7->pool;
      FUNC_9(VAR_6);
    }
  else
    {
      VAR_6 = FUNC_10(VAR_1->pool);
    }


  VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7));
  VAR_7->node = FUNC_6(VAR_3, VAR_6);
  VAR_7->idx = VAR_4->node_cache_idx;
  VAR_7->pool = VAR_6;


  VAR_5 = FUNC_3(VAR_6, VAR_2);
  FUNC_8(VAR_4->node_cache, VAR_5, VAR_7);
  VAR_4->node_cache_keys[VAR_4->node_cache_idx] = VAR_5;


  VAR_4->node_cache_idx = (VAR_4->node_cache_idx + 1) % VAR_0;
}
