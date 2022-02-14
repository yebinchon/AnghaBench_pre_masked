
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_action_t ;
struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int * FUNC_2 (int **,TYPE_1__*,char const*,char const*,int *,int const*,int const*,int ,int ,int ,char const*,int ,int ,int ,int *,int *) ;
 int VAR_3 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int,int *) ;
 int FUNC_8 (int *,char*,int ,char const*,int) ;
 int FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int,int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int **,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_16 (TYPE_1__*,char const*,int *,int ,int ,int ,int ,int *,int *,int *) ;

svn_error_t *
FUNC_17(
                        svn_wc__db_wcroot_t *VAR_7,
                        const char *VAR_8,
                        int VAR_9,
                        svn_wc__db_t *VAR_10,
                        svn_wc_operation_t VAR_11,
                        svn_wc_conflict_action_t VAR_12,
                        const svn_wc_conflict_version_t *VAR_13,
                        const svn_wc_conflict_version_t *VAR_14,
                        apr_pool_t *VAR_15)
{
  svn_sqlite__stmt_t *VAR_16;
  svn_boolean_t VAR_17;
  apr_pool_t *VAR_18 = FUNC_5(VAR_15);

  FUNC_0(FUNC_12(VAR_7->sdb,
                                      VAR_0));

  FUNC_0(FUNC_13(&VAR_16, VAR_7->sdb,
                                    VAR_1));
  FUNC_0(FUNC_8(VAR_16, "isd", VAR_7->wc_id, VAR_8,
                            VAR_9));
  FUNC_0(FUNC_15(&VAR_17, VAR_16));
  while(VAR_17)
    {
      svn_error_t *VAR_19;
      int VAR_20 = FUNC_9(VAR_16, 0);
      const char *VAR_21 = FUNC_10(VAR_16, 1, ((void*)0));
      svn_node_kind_t VAR_22 = FUNC_11(VAR_16, 2, VAR_3);
      const char *VAR_23 = FUNC_10(VAR_16, 3, ((void*)0));
      const char *VAR_24 = FUNC_10(VAR_16, 4, ((void*)0));
      svn_skel_t *VAR_25;
      FUNC_4(VAR_18);

      FUNC_1(VAR_23 != ((void*)0));

      VAR_19 = FUNC_2(&VAR_25, VAR_7, VAR_21, VAR_24,
                                 VAR_10, VAR_13, VAR_14, VAR_11,
                                 VAR_22 ,
                                 VAR_22 ,
                                 VAR_23,
                                 VAR_4,
                                 VAR_12,
                                 FUNC_7(VAR_21,
                                                    VAR_20,
                                                    VAR_18),
                                 VAR_18, VAR_18);

      if (!VAR_19)
        VAR_19 = FUNC_16(VAR_7, VAR_21, VAR_10,
                                   VAR_6,
                                   VAR_22,
                                   VAR_5,
                                   VAR_5,
                                   VAR_25, ((void*)0), VAR_15);

      if (VAR_19)
        return FUNC_3(VAR_19, FUNC_14(VAR_16));

      FUNC_0(FUNC_15(&VAR_17, VAR_16));
    }
  FUNC_0(FUNC_14(VAR_16));

  FUNC_6(VAR_18);

  return VAR_2;
}
