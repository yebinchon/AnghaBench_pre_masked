
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ,char const*,int) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int **,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__*,int *) ;
 int FUNC_14 (TYPE_1__*,char const*,int,char const*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (TYPE_1__*,char const*,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int * FUNC_16 (TYPE_1__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_wc__db_wcroot_t *VAR_5,
                 svn_wc__db_t *VAR_6,
                 const char *VAR_7,
                 int VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;
  svn_boolean_t VAR_11;
  apr_pool_t *VAR_12;
  svn_error_t *VAR_13 = ((void*)0);

  FUNC_0(FUNC_10(VAR_5->sdb,
                                      VAR_0));

  FUNC_0(FUNC_11(&VAR_10, VAR_5->sdb,
                                    VAR_1));
  FUNC_0(FUNC_6(VAR_10, "isd", VAR_5->wc_id, VAR_7,
                            VAR_8));
  FUNC_0(FUNC_13(&VAR_11, VAR_10));

  VAR_12 = FUNC_4(VAR_9);
  while (VAR_11)
    {
      int VAR_14 = FUNC_7(VAR_10, 0);
      const char *VAR_15 = FUNC_8(VAR_10, 1, ((void*)0));
      svn_node_kind_t VAR_16 = FUNC_9(VAR_10, 2, VAR_2);
      const char *VAR_17 = FUNC_8(VAR_10, 4, ((void*)0));

      FUNC_3(VAR_12);

      VAR_13 = FUNC_16(VAR_5, VAR_15, VAR_12);

      if (!VAR_13)
        VAR_13 = FUNC_16(VAR_5, VAR_17, VAR_12);

      if (VAR_13)
        break;

      VAR_13 = FUNC_2(
              FUNC_14(VAR_5,
                                                VAR_15, VAR_14,
                                                VAR_17, ((void*)0), VAR_12));

      if (VAR_13)
        break;

      VAR_13 = FUNC_2(
              FUNC_15(VAR_5, VAR_15, VAR_6,
                                   VAR_3,
                                   VAR_16,
                                   VAR_4,
                                   VAR_4,
                                   ((void*)0), ((void*)0), VAR_9));

      if (VAR_13)
        break;

      FUNC_0(FUNC_13(&VAR_11, VAR_10));
    }
  FUNC_5(VAR_12);

  return FUNC_1(VAR_13, FUNC_12(VAR_10));
}
