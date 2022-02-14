
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limited_rights_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_4(apr_hash_t *VAR_0,
                      limited_rights_t *VAR_1,
                      apr_pool_t *VAR_2)
{
  if (VAR_0)
    {
      apr_hash_index_t *VAR_3;
      for (VAR_3 = FUNC_0(VAR_2, VAR_0);
           VAR_3;
           VAR_3 = FUNC_1(VAR_3))
        FUNC_3(FUNC_2(VAR_3), VAR_1, VAR_2);
    }
}
