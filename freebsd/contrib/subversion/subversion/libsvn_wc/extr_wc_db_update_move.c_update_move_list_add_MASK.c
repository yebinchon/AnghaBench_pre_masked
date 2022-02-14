
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_notify_action_t ;
struct TYPE_5__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char const*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *,scalar_t__*,int *,int ,int *,int *,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc__db_wcroot_t *VAR_5,
                     const char *VAR_6,
                     svn_wc__db_t *VAR_7,
                     svn_wc_notify_action_t VAR_8,
                     svn_node_kind_t VAR_9,
                     svn_wc_notify_state_t VAR_10,
                     svn_wc_notify_state_t VAR_11,
                     svn_skel_t *VAR_12,
                     svn_skel_t *VAR_13,
                     apr_pool_t *VAR_14)
{
  svn_sqlite__stmt_t *VAR_15;

  if (VAR_12)
    {
      svn_boolean_t VAR_16;

      FUNC_0(FUNC_4(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         &VAR_16,
                                         VAR_7, VAR_5->abspath, VAR_12,
                                         VAR_14, VAR_14));
      if (VAR_16)
        {
          VAR_8 = VAR_4;
          VAR_10 = VAR_3;
          VAR_11 = VAR_3;
        }
    }

  FUNC_0(FUNC_2(&VAR_15, VAR_5->sdb,
                                    VAR_0));
  FUNC_0(FUNC_1(VAR_15, "sdtdd", VAR_6,
                            VAR_8, VAR_2, VAR_9,
                            VAR_10, VAR_11));
  FUNC_0(FUNC_3(VAR_15));

  if (VAR_12)
    FUNC_0(FUNC_5(VAR_5, VAR_6, VAR_12,
                                              VAR_14));

  if (VAR_13)
    FUNC_0(FUNC_6(VAR_5, VAR_13, VAR_14));

  return VAR_1;
}
