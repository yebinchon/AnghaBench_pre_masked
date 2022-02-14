
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,void const*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 int FUNC_5 (int *,int *) ;

svn_boolean_t
FUNC_6(apr_hash_t *VAR_2,
                           apr_hash_t *VAR_3,
                           svn_boolean_t VAR_4,
                           apr_pool_t *VAR_5)
{
  apr_hash_index_t *VAR_6;
  unsigned int VAR_7, VAR_8;



  VAR_7 = (VAR_2 == ((void*)0)) ? 0 : FUNC_0(VAR_2);
  VAR_8 = (VAR_3 == ((void*)0)) ? 0 : FUNC_0(VAR_3);

  if (VAR_7 != VAR_8)
    return VAR_1;

  if (VAR_7 == 0)
    return VAR_0;



  for (VAR_6 = FUNC_1(VAR_5, VAR_2); VAR_6; VAR_6 = FUNC_3(VAR_6))
    {
      const void *VAR_9;
      apr_ssize_t VAR_10;
      void *VAR_11;
      svn_string_t *VAR_12, *VAR_13;

      FUNC_4(VAR_6, &VAR_9, &VAR_10, &VAR_11);
      VAR_12 = VAR_11;
      VAR_13 = FUNC_2(VAR_3, VAR_9, VAR_10);

      if (!VAR_13 || (VAR_4 && !FUNC_5(VAR_12, VAR_13)))
        return VAR_1;
    }

  return VAR_0;
}
