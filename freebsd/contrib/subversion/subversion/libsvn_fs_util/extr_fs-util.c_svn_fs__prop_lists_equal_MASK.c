
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_boolean_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char const*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 int FUNC_5 (int *,int *) ;

svn_boolean_t
FUNC_6(apr_hash_t *VAR_2,
                         apr_hash_t *VAR_3,
                         apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;


  if (VAR_2 == VAR_3)
    return VAR_1;

  if (VAR_2 == ((void*)0))
    return FUNC_0(VAR_3) == 0;
  if (VAR_3 == ((void*)0))
    return FUNC_0(VAR_2) == 0;

  if (FUNC_0(VAR_2) != FUNC_0(VAR_3))
    return VAR_0;


  for (VAR_5 = FUNC_1(VAR_4, VAR_2); VAR_5; VAR_5 = FUNC_3(VAR_5))
    {
      const char *VAR_6;
      apr_ssize_t VAR_7;
      svn_string_t *VAR_8, *VAR_9;

      FUNC_4(VAR_5, (const void **)&VAR_6, &VAR_7, (void **)&VAR_8);
      VAR_9 = FUNC_2(VAR_3, VAR_6, VAR_7);

      if (!VAR_9 || !FUNC_5(VAR_8, VAR_9))
        return VAR_0;
    }


  return VAR_1;
}
