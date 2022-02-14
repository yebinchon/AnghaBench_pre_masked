
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_17__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const**,int ,TYPE_3__ const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *,int,TYPE_3__ const*,int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_14(svn_boolean_t *VAR_6,
                          svn_wc__db_t *VAR_7,
                          const char *VAR_8,
                          const svn_checksum_t *VAR_9,
                          apr_pool_t *VAR_10)
{
  svn_wc__db_wcroot_t *VAR_11;
  const char *VAR_12;
  svn_sqlite__stmt_t *VAR_13;
  svn_boolean_t VAR_14;

  FUNC_2(FUNC_5(VAR_8));
  FUNC_2(VAR_9 != ((void*)0));

  if (VAR_9->kind != VAR_4)
    {
      *VAR_6 = VAR_1;
      return VAR_3;
    }

  FUNC_1(FUNC_13(&VAR_11, &VAR_12, VAR_7,
                              VAR_8, VAR_10, VAR_10));
  FUNC_3(VAR_11);




  {
    const char *VAR_15;
    svn_node_kind_t VAR_16;
    svn_error_t *VAR_17;

    FUNC_1(FUNC_4(&VAR_15, VAR_11->abspath,
                               VAR_9, VAR_10, VAR_10));
    VAR_17 = FUNC_8(VAR_15, &VAR_16, VAR_10);
    if (VAR_17)
      return FUNC_7(VAR_17);
    else if (VAR_16 != VAR_5)
      {
        *VAR_6 = VAR_1;
        return VAR_3;
      }
  }


  FUNC_1(FUNC_10(&VAR_13, VAR_11->sdb, VAR_2));
  FUNC_1(FUNC_9(VAR_13, 1, VAR_9, VAR_10));
  FUNC_1(FUNC_12(&VAR_14, VAR_13));
  FUNC_1(FUNC_11(VAR_13));

  *VAR_6 = VAR_14;
  return VAR_3;
}
