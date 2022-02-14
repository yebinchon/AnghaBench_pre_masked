
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static apr_hash_t *
FUNC_7(apr_hash_t *VAR_0,
            apr_pool_t *VAR_1)
{
  apr_hash_t *VAR_2 = FUNC_1(VAR_1);
  apr_hash_index_t *VAR_3;

  for (VAR_3 = FUNC_0(VAR_1, VAR_0); VAR_3; VAR_3 = FUNC_2(VAR_3))
    {
      const char *VAR_4 = FUNC_3(VAR_3);
      const char *VAR_5 = FUNC_4(VAR_3);

      FUNC_6(VAR_2, FUNC_5(VAR_1, VAR_4), FUNC_5(VAR_1, VAR_5));
    }
  return VAR_2;
}
