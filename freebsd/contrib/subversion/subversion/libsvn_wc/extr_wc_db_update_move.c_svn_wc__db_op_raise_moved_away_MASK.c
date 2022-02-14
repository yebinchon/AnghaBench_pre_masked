
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_notify_func2_t ;
struct TYPE_6__ {int peg_rev; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,int *,TYPE_1__**,TYPE_1__**,int *,int *,char const*,int *,int *,int *) ;
 int FUNC_4 (int *,char const*,int *,int ,int ,int ,int *,int *) ;
 int FUNC_5 (int *,char const*,int,int *,int ,int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_6 (int **,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,int ,int ,int ,void*,int *) ;
 int FUNC_8 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_t *VAR_4,
                               const char *VAR_5,
                               svn_wc_notify_func2_t VAR_6,
                               void *VAR_7,
                               apr_pool_t *VAR_8)
{
  svn_wc__db_wcroot_t *VAR_9;
  const char *VAR_10;
  svn_wc_operation_t VAR_11;
  svn_wc_conflict_action_t VAR_12;
  svn_wc_conflict_version_t *VAR_13, *VAR_14;
  int VAR_15;
  svn_skel_t *VAR_16;

  FUNC_0(FUNC_8(&VAR_9, &VAR_10,
                                                VAR_4, VAR_5,
                                                VAR_8, VAR_8));
  FUNC_2(VAR_9);

  FUNC_1(
    FUNC_6(&VAR_16, ((void*)0), ((void*)0),
                                      VAR_9, VAR_10,
                                      VAR_8, VAR_8),
    FUNC_3(&VAR_15,
                           &VAR_11, &VAR_12,
                           &VAR_13, &VAR_14,
                           VAR_9, VAR_4, VAR_10, VAR_16,
                           VAR_8, VAR_8),
    FUNC_4(VAR_9, VAR_10, VAR_4,
                                         VAR_0, VAR_0, VAR_3,
                                         ((void*)0), VAR_8),
    FUNC_5(VAR_9, VAR_10,
                                            VAR_15,
                                            VAR_4, VAR_11, VAR_12,
                                            VAR_13, VAR_14,
                                            VAR_8),
    VAR_9);



  FUNC_0(FUNC_7(VAR_9,
                                             (VAR_13
                                              ? VAR_13->peg_rev
                                              : VAR_1),
                                             (VAR_14
                                              ? VAR_14->peg_rev
                                              : VAR_1),
                                             VAR_6, VAR_7,
                                             VAR_8));

  return VAR_2;
}
