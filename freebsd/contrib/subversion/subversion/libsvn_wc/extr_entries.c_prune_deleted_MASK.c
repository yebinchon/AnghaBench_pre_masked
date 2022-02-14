
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int const* FUNC_5 (int *) ;
 int FUNC_6 (int *,void const*,int const*) ;
 int FUNC_7 (scalar_t__*,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t **VAR_1,
              apr_hash_t *VAR_2,
              apr_pool_t *VAR_3,
              apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;

  if (!VAR_2)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }



  for (VAR_5 = FUNC_1(VAR_4, VAR_2);
       VAR_5;
       VAR_5 = FUNC_3(VAR_5))
    {
      svn_boolean_t VAR_6;

      FUNC_0(FUNC_7(&VAR_6,
                                      FUNC_5(VAR_5)));
      if (VAR_6)
        break;
    }

  if (! VAR_5)
    {

      *VAR_1 = VAR_2;
      return VAR_0;
    }


  *VAR_1 = FUNC_2(VAR_3);
  for (VAR_5 = FUNC_1(VAR_4, VAR_2);
       VAR_5;
       VAR_5 = FUNC_3(VAR_5))
    {
      const void *VAR_7 = FUNC_4(VAR_5);
      const svn_wc_entry_t *VAR_8 = FUNC_5(VAR_5);
      svn_boolean_t VAR_9;

      FUNC_0(FUNC_7(&VAR_9, VAR_8));
      if (!VAR_9)
        FUNC_6(*VAR_1, VAR_7, VAR_8);
    }

  return VAR_0;
}
