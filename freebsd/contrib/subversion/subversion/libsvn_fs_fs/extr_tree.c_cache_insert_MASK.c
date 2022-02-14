
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int last_hit; int insertions; int pool; TYPE_2__* buckets; } ;
typedef TYPE_1__ fs_fs_dag_cache_t ;
typedef int dag_node_t ;
struct TYPE_6__ {int hash_value; int path_len; int node; int path; int revision; } ;
typedef TYPE_2__ cache_entry_t ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(fs_fs_dag_cache_t *VAR_1,
             svn_revnum_t VAR_2,
             const char *VAR_3,
             dag_node_t *VAR_4)
{
  apr_size_t VAR_5;
  apr_size_t VAR_6 = FUNC_4(VAR_3);
  apr_uint32_t VAR_7;
  cache_entry_t *VAR_8;

  FUNC_1(VAR_1);


  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6);

  VAR_5 = VAR_7 + (VAR_7 >> 16);
  VAR_5 = (VAR_5 + (VAR_5 >> 8)) % VAR_0;


  VAR_8 = &VAR_1->buckets[VAR_5];
  VAR_1->last_hit = VAR_5;



  VAR_8->hash_value = VAR_7;
  VAR_8->revision = VAR_2;
  if (VAR_8->path_len < VAR_6)
    VAR_8->path = FUNC_0(VAR_1->pool, VAR_6 + 1);
  VAR_8->path_len = VAR_6;
  FUNC_3(VAR_8->path, VAR_3, VAR_6 + 1);

  VAR_8->node = FUNC_5(VAR_4, VAR_1->pool);
  VAR_1->insertions++;
}
