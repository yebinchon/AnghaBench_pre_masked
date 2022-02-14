
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int access_cache; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_6__ {int dir_data; } ;
typedef TYPE_2__ svn_wc__db_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;

apr_hash_t *
FUNC_5(svn_wc__db_t *VAR_0,
                               apr_pool_t *VAR_1)
{
  apr_hash_t *VAR_2 = FUNC_1(VAR_1);
  apr_hash_index_t *VAR_3;

  for (VAR_3 = FUNC_0(VAR_1, VAR_0->dir_data);
       VAR_3;
       VAR_3 = FUNC_2(VAR_3))
    {
      const svn_wc__db_wcroot_t *VAR_4 = FUNC_4(VAR_3);



      VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_4->access_cache);
    }

  return VAR_2;
}
