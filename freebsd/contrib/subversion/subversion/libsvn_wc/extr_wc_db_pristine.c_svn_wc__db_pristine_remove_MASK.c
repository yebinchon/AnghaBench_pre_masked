
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
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__ const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (TYPE_2__ const**,int *,char const*,TYPE_2__ const*,int *,int *) ;
 int FUNC_9 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc__db_t *VAR_3,
                           const char *VAR_4,
                           const svn_checksum_t *VAR_5,
                           apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_1(FUNC_4(VAR_4));
  FUNC_1(VAR_5 != ((void*)0));


  if (VAR_5->kind != VAR_2)
    FUNC_0(FUNC_8(&VAR_5, VAR_3, VAR_4,
                                         VAR_5,
                                         VAR_6, VAR_6));
  FUNC_1(VAR_5->kind == VAR_2);

  FUNC_0(FUNC_9(&VAR_7, &VAR_8, VAR_3,
                              VAR_4, VAR_6, VAR_6));
  FUNC_2(VAR_7);



  {
    svn_sqlite__stmt_t *VAR_9;
    svn_boolean_t VAR_10;

    FUNC_0(FUNC_5(&VAR_9, VAR_7->sdb, VAR_0));
    FUNC_0(FUNC_7(&VAR_10, VAR_9));
    FUNC_0(FUNC_6(VAR_9));

    if (VAR_10)
      return VAR_1;
  }


  FUNC_0(FUNC_3(VAR_7, VAR_5, VAR_6));

  return VAR_1;
}
