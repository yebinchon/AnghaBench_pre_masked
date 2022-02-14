
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,int *) ;

__attribute__((used)) static apr_hash_t *
FUNC_9(apr_hash_t *VAR_0, apr_pool_t *VAR_1)
{
  apr_hash_index_t *VAR_2;
  apr_hash_t *VAR_3 = FUNC_1(VAR_1);

  for (VAR_2 = FUNC_0(VAR_1, VAR_0); VAR_2; VAR_2 = FUNC_2(VAR_2))
    {
      const char *VAR_4 = FUNC_7(VAR_1, FUNC_4(VAR_2));
      apr_ssize_t VAR_5 = FUNC_5(VAR_2);
      svn_string_t *VAR_6 = FUNC_8(FUNC_6(VAR_2), VAR_1);

      FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
    }
  return VAR_3;
}
