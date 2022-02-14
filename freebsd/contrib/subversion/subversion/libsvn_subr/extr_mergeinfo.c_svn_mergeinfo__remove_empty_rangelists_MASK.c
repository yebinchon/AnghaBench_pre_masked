
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,char const*,int *) ;

svn_boolean_t
FUNC_5(svn_mergeinfo_t VAR_2,
                                       apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  svn_boolean_t VAR_5 = VAR_0;

  if (VAR_2)
    {
      for (VAR_4 = FUNC_0(VAR_3, VAR_2); VAR_4;
           VAR_4 = FUNC_1(VAR_4))
        {
          const char *VAR_6 = FUNC_2(VAR_4);
          svn_rangelist_t *VAR_7 = FUNC_3(VAR_4);

          if (VAR_7->nelts == 0)
            {
              FUNC_4(VAR_2, VAR_6, ((void*)0));
              VAR_5 = VAR_1;
            }
        }
    }
  return VAR_5;
}
