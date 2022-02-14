
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_result_t {int err; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 struct lock_result_t* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(apr_hash_t *VAR_0,
                       apr_pool_t *VAR_1)
{
  apr_hash_index_t *VAR_2;

  for (VAR_2 = FUNC_0(VAR_1, VAR_0); VAR_2; VAR_2 = FUNC_1(VAR_2))
    {
      struct lock_result_t *VAR_3 = FUNC_2(VAR_2);
      FUNC_3(VAR_3->err);
    }
}
