
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_diff_operation_kind_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,char const*,int ,int ,int ,int ,char const*,int *) ;
 int FUNC_4 (int *,char const*,char const*,char const*,int ,int ,int *) ;
 int FUNC_5 (int *,char const*,char const*,int ,char const*,int *) ;
 int FUNC_6 (int *,char const*,char const*,char const*,int ,int ,int *) ;
 int FUNC_7 (int *,char const*,char const*,char const*,int *) ;
 int FUNC_8 (int *,char const*,char const*,char const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_9 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_stream_t *VAR_8,
                      const char **VAR_9, const char **VAR_10,
                      svn_diff_operation_kind_t VAR_11,
                      const char *VAR_12,
                      const char *VAR_13,
                      svn_revnum_t VAR_14,
                      svn_revnum_t VAR_15,
                      const char *VAR_16,
                      svn_revnum_t VAR_17,
                      apr_hash_t *VAR_18,
                      apr_hash_t *VAR_19,
                      const char *VAR_20,
                      const char *VAR_21,
                      apr_pool_t *VAR_22)
{
  svn_boolean_t VAR_23 = (FUNC_9(VAR_18,
                                                VAR_1) != ((void*)0));
  svn_boolean_t VAR_24 = (FUNC_9(VAR_19,
                                                VAR_1) != ((void*)0));
  svn_boolean_t VAR_25 = (FUNC_9(VAR_18,
                                                   VAR_2) != ((void*)0));
  svn_boolean_t VAR_26 = (FUNC_9(VAR_19,
                                                   VAR_2) != ((void*)0));

  if (VAR_11 == VAR_5)
    {
      FUNC_0(FUNC_6(VAR_8, VAR_21,
                                            VAR_12, VAR_13,
                                            VAR_23, VAR_25,
                                            VAR_22));
      *VAR_9 = FUNC_2(FUNC_1(VAR_22, "a/%s", VAR_12),
                           VAR_14, VAR_22);
      *VAR_10 = FUNC_2(FUNC_1(VAR_22, "b/%s", VAR_13),
                           VAR_15, VAR_22);

    }
  else if (VAR_11 == VAR_4)
    {
      FUNC_0(FUNC_5(VAR_8, VAR_21,
                                           VAR_16, VAR_17,
                                           VAR_13,
                                           VAR_22));
      *VAR_9 = FUNC_2(FUNC_1(VAR_22, "a/%s", VAR_16),
                           VAR_14, VAR_22);
      *VAR_10 = FUNC_2(FUNC_1(VAR_22, "b/%s", VAR_13),
                           VAR_15, VAR_22);
      FUNC_0(FUNC_3(VAR_8, VAR_21,
                                      VAR_23, VAR_24,
                                      VAR_25, VAR_26,
                                      VAR_20,
                                      VAR_22));
    }
  else if (VAR_11 == VAR_3)
    {
      FUNC_0(FUNC_4(VAR_8, VAR_21,
                                          VAR_12, VAR_13,
                                          VAR_24, VAR_26,
                                          VAR_22));
      *VAR_9 = FUNC_2(FUNC_1(VAR_22, "a/%s", VAR_12),
                           VAR_14, VAR_22);
      *VAR_10 = FUNC_2(FUNC_1(VAR_22, "b/%s", VAR_13),
                           VAR_15, VAR_22);
    }
  else if (VAR_11 == VAR_6)
    {
      FUNC_0(FUNC_7(VAR_8, VAR_21,
                                             VAR_12, VAR_13,
                                             VAR_22));
      *VAR_9 = FUNC_2(FUNC_1(VAR_22, "a/%s", VAR_12),
                           VAR_14, VAR_22);
      *VAR_10 = FUNC_2(FUNC_1(VAR_22, "b/%s", VAR_13),
                           VAR_15, VAR_22);
      FUNC_0(FUNC_3(VAR_8, VAR_21,
                                      VAR_23, VAR_24,
                                      VAR_25, VAR_26,
                                      VAR_20,
                                      VAR_22));
    }
  else if (VAR_11 == VAR_7)
    {
      FUNC_0(FUNC_8(VAR_8, VAR_21,
                                            VAR_16, VAR_13,
                                            VAR_22));
      *VAR_9 = FUNC_2(FUNC_1(VAR_22, "a/%s", VAR_16),
                           VAR_14, VAR_22);
      *VAR_10 = FUNC_2(FUNC_1(VAR_22, "b/%s", VAR_13),
                           VAR_15, VAR_22);
      FUNC_0(FUNC_3(VAR_8, VAR_21,
                                      VAR_23, VAR_24,
                                      VAR_25, VAR_26,
                                      VAR_20,
                                      VAR_22));
    }

  return VAR_0;
}
