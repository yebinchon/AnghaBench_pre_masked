
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_rangelist_t ;
typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(svn_mergeinfo_t VAR_0,
                               svn_boolean_t VAR_1,
                               apr_pool_t *VAR_2)
{
  if (VAR_0)
    {
      apr_hash_index_t *VAR_3;

      for (VAR_3 = FUNC_0(VAR_2, VAR_0);
           VAR_3;
           VAR_3 = FUNC_1(VAR_3))
        {
          svn_rangelist_t *VAR_4 = FUNC_2(VAR_3);

          if (VAR_4)
            FUNC_3(VAR_4, VAR_1);
        }
    }
  return;
}
