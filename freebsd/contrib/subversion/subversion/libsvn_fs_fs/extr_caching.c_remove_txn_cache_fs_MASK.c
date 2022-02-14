
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txn_cleanup_baton_t {int txn_pool; int ** to_reset; int * txn_cache; } ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct txn_cleanup_baton_t*,int ) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t
FUNC_1(void *VAR_2)
{
  struct txn_cleanup_baton_t *VAR_3 = VAR_2;


  if (*VAR_3->to_reset == VAR_3->txn_cache)
    {

      *VAR_3->to_reset = ((void*)0);
    }


  FUNC_0(VAR_3->txn_pool,
                        VAR_3,
                        VAR_1);

  return VAR_0;
}
