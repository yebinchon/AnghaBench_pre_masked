
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int svn_client_conflict_option_id_t ;
typedef int svn_cl__conflict_stats_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char const*,int ) ;
 char* FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ,int *,int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;
 int FUNC_6 (int *,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_client_conflict_t *VAR_4,
                       svn_client_conflict_option_id_t VAR_5,
                       svn_boolean_t VAR_6,
                       const char *VAR_7,
                       svn_boolean_t VAR_8,
                       const char *VAR_9,
                       svn_cl__conflict_stats_t *VAR_10,
                       svn_client_ctx_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  const char *VAR_13
    = FUNC_2(
        VAR_9, FUNC_3(VAR_4),
        VAR_12);

  if (VAR_6)
    {
      FUNC_0(FUNC_5(VAR_4, VAR_5,
                                                     VAR_11, VAR_12));
      FUNC_1(VAR_10, VAR_13,
                                      VAR_2);
    }

  if (VAR_7)
    {
      FUNC_0(FUNC_4(VAR_4, VAR_7,
                                                     VAR_5, VAR_11,
                                                     VAR_12));
      FUNC_1(VAR_10, VAR_13,
                                      VAR_1);
    }

  if (VAR_8)
    {
      FUNC_0(FUNC_6(VAR_4, VAR_5,
                                                     VAR_11, VAR_12));
      FUNC_1(VAR_10, VAR_13,
                                      VAR_3);
    }

  return VAR_0;
}
