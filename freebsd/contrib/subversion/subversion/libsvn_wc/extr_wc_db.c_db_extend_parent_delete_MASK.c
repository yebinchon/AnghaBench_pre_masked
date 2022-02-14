
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*,int ,char const*,int,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_wc__db_wcroot_t *VAR_4,
                        const char *VAR_5,
                        svn_node_kind_t VAR_6,
                        int VAR_7,
                        apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9;
  svn_sqlite__stmt_t *VAR_10;
  int VAR_11;
  const char *VAR_12 = FUNC_2(VAR_5, VAR_8);

  FUNC_1(VAR_5[0]);

  FUNC_0(FUNC_5(&VAR_10, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_3(VAR_10, "isd", VAR_4->wc_id, VAR_12,
                            VAR_7));
  FUNC_0(FUNC_7(&VAR_9, VAR_10));
  if (VAR_9)
    VAR_11 = FUNC_4(VAR_10, 0);
  FUNC_0(FUNC_6(VAR_10));
  if (VAR_9)
    {
      int VAR_13;

      FUNC_0(FUNC_3(VAR_10, "isd", VAR_4->wc_id, VAR_5,
                                VAR_7));
      FUNC_0(FUNC_7(&VAR_9, VAR_10));
      if (VAR_9)
        VAR_13 = FUNC_4(VAR_10, 0);
      FUNC_0(FUNC_6(VAR_10));
      if (!VAR_9 || VAR_11 < VAR_13)
        {
          FUNC_0(FUNC_5(&VAR_10, VAR_4->sdb,
                              VAR_0));
          FUNC_0(FUNC_3(VAR_10, "isdst", VAR_4->wc_id,
                                    VAR_5, VAR_11,
                                    VAR_12, VAR_3, VAR_6));
          FUNC_0(FUNC_8(((void*)0), VAR_10));
        }
    }

  return VAR_2;
}
