
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_rangelist_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,char const*,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ,int *) ;
 int FUNC_6 (int *,void const**,int *,void*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;

svn_error_t *
FUNC_11(svn_mergeinfo_t VAR_1,
                     svn_mergeinfo_t VAR_2,
                     apr_pool_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  apr_pool_t *VAR_6;

  if (!FUNC_1(VAR_2))
    return VAR_0;

  VAR_6 = FUNC_8(VAR_4);
  for (VAR_5 = FUNC_2(VAR_4, VAR_2); VAR_5; VAR_5 = FUNC_4(VAR_5))
    {
      const char *VAR_7;
      apr_ssize_t VAR_8;
      svn_rangelist_t *VAR_9;
      svn_rangelist_t *VAR_10;


      FUNC_6(VAR_5, (const void**)&VAR_7, &VAR_8, (void*)&VAR_9);
      VAR_10 = FUNC_3(VAR_1, VAR_7, VAR_8);



      if (VAR_10)
        {
          FUNC_0(FUNC_10(VAR_10, VAR_9, VAR_3,
                                       VAR_6));
          FUNC_7(VAR_6);
        }
      else
        FUNC_5(VAR_1, VAR_7, VAR_8, VAR_9);
    }

  FUNC_9(VAR_6);

  return VAR_0;
}
