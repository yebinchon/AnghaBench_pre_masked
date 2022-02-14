
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
struct TYPE_5__ {char const* parent_relpath; int tree_conflict_data; int local_relpath; int wc_id; } ;
typedef TYPE_1__ db_actual_node_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char const*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t *VAR_1,
                          svn_sqlite__db_t *VAR_2,
                          svn_wc__db_t *VAR_3,
                          const char *VAR_4,
                          apr_int64_t VAR_5,
                          const char *VAR_6,
                          apr_pool_t *VAR_7)
{
  apr_hash_index_t *VAR_8;

  for (VAR_8 = FUNC_2(VAR_7, VAR_1);
       VAR_8;
       VAR_8 = FUNC_3(VAR_8))
    {
      db_actual_node_t *VAR_9 = ((void*)0);

      VAR_9 = FUNC_0(VAR_9, VAR_7);
      VAR_9->wc_id = VAR_5;
      VAR_9->local_relpath = FUNC_4(VAR_8);
      VAR_9->parent_relpath = VAR_6;
      VAR_9->tree_conflict_data = FUNC_5(VAR_8);

      FUNC_1(FUNC_6(VAR_2, VAR_3, VAR_4, VAR_9,
                                 VAR_7));
    }

  return VAR_0;
}
