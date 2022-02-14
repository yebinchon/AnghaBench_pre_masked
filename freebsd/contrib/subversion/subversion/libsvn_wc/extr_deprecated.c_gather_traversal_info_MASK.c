
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_wc_traversal_info_t {int depths; int externals_new; int externals_old; int pool; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int ,char const*,int ) ;
 int FUNC_9 (int **,int **,int *,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc_context_t *VAR_1,
                      const char *VAR_2,
                      const char *VAR_3,
                      svn_depth_t VAR_4,
                      struct svn_wc_traversal_info_t *VAR_5,
                      svn_boolean_t VAR_6,
                      svn_boolean_t VAR_7,
                      apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9;
  apr_hash_t *VAR_10;
  apr_hash_index_t *VAR_11;

  FUNC_0(FUNC_9(&VAR_9, &VAR_10,
                                               VAR_1, VAR_2,
                                               VAR_4,
                                               VAR_8, VAR_8));

  for (VAR_11 = FUNC_1(VAR_8, VAR_9);
       VAR_11;
       VAR_11 = FUNC_2(VAR_11))
    {
      const char *VAR_12 = FUNC_3(VAR_11);
      const char *VAR_13;

      VAR_13 = FUNC_5(VAR_3,
                                FUNC_6(VAR_2,
                                                         VAR_12),
                                VAR_5->pool);

      if (VAR_6)
        FUNC_8(VAR_5->externals_old, VAR_13,
                      FUNC_4(VAR_11));

      if (VAR_7)
        FUNC_8(VAR_5->externals_new, VAR_13,
                      FUNC_4(VAR_11));

      FUNC_8(VAR_5->depths, VAR_13,
                    FUNC_7(VAR_10, VAR_12));
    }

  return VAR_0;
}
