
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_2__ const*,int *) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (int ,int ,int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int,TYPE_2__ const*,int *) ;
 int FUNC_9 (TYPE_2__ const**,int *,int ,int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_14(const svn_checksum_t **VAR_4,
                            svn_wc__db_t *VAR_5,
                            const char *VAR_6,
                            const svn_checksum_t *VAR_7,
                            apr_pool_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  const char *VAR_11;
  svn_sqlite__stmt_t *VAR_12;
  svn_boolean_t VAR_13;

  FUNC_1(FUNC_5(VAR_6));
  FUNC_1(VAR_7 != ((void*)0));
  FUNC_1(VAR_7->kind == VAR_3);

  FUNC_0(FUNC_13(&VAR_10, &VAR_11, VAR_5,
                              VAR_6, VAR_9, VAR_9));
  FUNC_2(VAR_10);

  FUNC_0(FUNC_10(&VAR_12, VAR_10->sdb, VAR_0));
  FUNC_0(FUNC_8(VAR_12, 1, VAR_7, VAR_9));
  FUNC_0(FUNC_12(&VAR_13, VAR_12));
  if (!VAR_13)
    return FUNC_6(VAR_1, FUNC_11(VAR_12),
                             FUNC_3("The pristine text with checksum '%s' was "
                               "not found"),
                             FUNC_4(VAR_7,
                                                             VAR_9));

  FUNC_0(FUNC_9(VAR_4, VAR_12, 0, VAR_8));
  FUNC_1((*VAR_4)->kind == VAR_2);

  return FUNC_7(FUNC_11(VAR_12));
}
