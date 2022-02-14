
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_rangelist_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(svn_mergeinfo_t *VAR_1,
                                       svn_mergeinfo_t VAR_2,
                                       const char *VAR_3,
                                       apr_pool_t *VAR_4,
                                       apr_pool_t *VAR_5)
{
  apr_hash_index_t *VAR_6;

  FUNC_0(VAR_3 && FUNC_8(VAR_3));

  *VAR_1 = FUNC_2(VAR_4);

  for (VAR_6 = FUNC_1(VAR_5, VAR_2);
       VAR_6;
       VAR_6 = FUNC_3(VAR_6))
    {
      const char *VAR_7 = FUNC_4(VAR_6);
      svn_rangelist_t *VAR_8 = FUNC_5(VAR_6);

      FUNC_7(*VAR_1,
                    FUNC_6(VAR_7, VAR_3, VAR_4),
                    VAR_8);
    }

  return VAR_0;
}
