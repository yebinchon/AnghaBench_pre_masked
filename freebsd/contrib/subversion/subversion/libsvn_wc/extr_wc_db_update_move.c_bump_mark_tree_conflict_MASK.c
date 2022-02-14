
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_conflict_version_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,char const*,char const*,int *,int *,int *,int ,int ,int ,char const*,int ,int ,char const*,int *,int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 char* FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int,int *,int *) ;
 int FUNC_7 (char const**,char const**,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_8 (char const*,char const*,char const*,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,char const*,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_10 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc__db_wcroot_t *VAR_6,
                        const char *VAR_7,
                        int VAR_8,
                        const char *VAR_9,
                        const char *VAR_10,
                        svn_wc__db_t *VAR_11,
                        apr_pool_t *VAR_12)
{
  apr_int64_t VAR_13;
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  const char *VAR_17;
  svn_revnum_t VAR_18;
  svn_revnum_t VAR_19;
  svn_node_kind_t VAR_20;
  svn_node_kind_t VAR_21;
  svn_wc_conflict_version_t *VAR_22;
  svn_wc_conflict_version_t *VAR_23;
  svn_skel_t *VAR_24;


  FUNC_0(FUNC_10(VAR_6, VAR_7, VAR_12));


  FUNC_0(FUNC_6(((void*)0), &VAR_21, &VAR_19,
                                    &VAR_17, &VAR_13,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0), ((void*)0), ((void*)0),
                                    VAR_6, VAR_9,
                                    VAR_8, VAR_12, VAR_12));
  FUNC_0(FUNC_7(&VAR_14, &VAR_15,
                                      VAR_6, VAR_13, VAR_12));
  FUNC_0(FUNC_6(((void*)0), &VAR_20, &VAR_18,
                                    &VAR_16, ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    VAR_6, VAR_10,
                                    FUNC_2(VAR_10),
                                    VAR_12, VAR_12));

  if (FUNC_3(VAR_7, VAR_9))
    {




      const char *VAR_25 = FUNC_5(VAR_9,
                                                    VAR_7);

      VAR_16 = FUNC_4(VAR_16, VAR_25,
                                           VAR_12);
      VAR_17 = FUNC_4(VAR_17, VAR_25,
                                           VAR_12);
    }

  VAR_22 = FUNC_8(
                  VAR_14, VAR_15, VAR_16, VAR_18,
                  VAR_20, VAR_12);
  VAR_23 = FUNC_8(
                  VAR_14, VAR_15, VAR_17, VAR_19,
                  VAR_21, VAR_12);

  FUNC_0(FUNC_1(&VAR_24, VAR_6, VAR_7,
                               VAR_10,
                               VAR_11, VAR_22, VAR_23,
                               VAR_5,
                               VAR_20, VAR_21,
                               VAR_16,
                               VAR_2,
                               VAR_1,
                               VAR_9,
                               VAR_12, VAR_12));

  FUNC_0(FUNC_9(VAR_6, VAR_7, VAR_11,
                               VAR_4,
                               VAR_21,
                               VAR_3,
                               VAR_3,
                               VAR_24, ((void*)0), VAR_12));

  return VAR_0;
}
