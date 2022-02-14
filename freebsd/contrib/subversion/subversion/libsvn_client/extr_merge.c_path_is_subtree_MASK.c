
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_4(const char *VAR_2,
                apr_hash_t *VAR_3,
                apr_pool_t *VAR_4)
{
  if (VAR_3)
    {
      apr_hash_index_t *VAR_5;

      for (VAR_5 = FUNC_0(VAR_4, VAR_3);
           VAR_5; VAR_5 = FUNC_1(VAR_5))
        {
          const char *VAR_6 = FUNC_2(VAR_5);
          if (FUNC_3(VAR_2, VAR_6))
            return VAR_1;
        }
    }
  return VAR_0;
}
