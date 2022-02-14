
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ,int *,int *) ;

svn_error_t *
FUNC_10(svn_mergeinfo_catalog_t *VAR_1,
                                        svn_mergeinfo_catalog_t VAR_2,
                                        svn_revnum_t VAR_3,
                                        svn_revnum_t VAR_4,
                                        svn_boolean_t VAR_5,
                                        apr_pool_t *VAR_6,
                                        apr_pool_t *VAR_7)
{
  apr_hash_index_t *VAR_8;

  *VAR_1 = FUNC_3(VAR_6);
  for (VAR_8 = FUNC_2(VAR_7, VAR_2);
       VAR_8;
       VAR_8 = FUNC_4(VAR_8))
    {
      const char *VAR_9 = FUNC_5(VAR_8);
      svn_mergeinfo_t VAR_10 = FUNC_6(VAR_8);
      svn_mergeinfo_t VAR_11;

      FUNC_0(FUNC_9(&VAR_11,
                                                        VAR_10,
                                                        VAR_3,
                                                        VAR_4,
                                                        VAR_5,
                                                        VAR_6,
                                                        VAR_7));
      if (FUNC_1(VAR_11))
        FUNC_8(*VAR_1,
                      FUNC_7(VAR_6, VAR_9), VAR_11);
    }

  return VAR_0;
}
