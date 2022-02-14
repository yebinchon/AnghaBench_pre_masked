
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_6__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 int FUNC_2 (char const*,int *) ;
 TYPE_2__* FUNC_3 (int const*,int *) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*,int ,char const*) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (scalar_t__*,int const*) ;

svn_error_t *
FUNC_12(svn_wc__db_wcroot_t *VAR_4,
                                  const char *VAR_5,
                                  const svn_skel_t *VAR_6,
                                  apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;
  svn_boolean_t VAR_10;

  FUNC_0(FUNC_11(&VAR_10, VAR_6));
  FUNC_1(VAR_10);

  FUNC_0(FUNC_7(&VAR_8, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_6(VAR_8, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_9(&VAR_9, VAR_8));
  FUNC_0(FUNC_8(VAR_8));

  if (VAR_9)
    {
      FUNC_0(FUNC_7(&VAR_8, VAR_4->sdb,
                                        VAR_2));
      FUNC_0(FUNC_6(VAR_8, "is", VAR_4->wc_id, VAR_5));
    }
  else
    {
      FUNC_0(FUNC_7(&VAR_8, VAR_4->sdb,
                                        VAR_0));
      FUNC_0(FUNC_6(VAR_8, "is", VAR_4->wc_id, VAR_5));
      if (*VAR_5 != '\0')
        FUNC_0(FUNC_5(VAR_8, 4,
                                      FUNC_2(VAR_5,
                                                          VAR_7)));
    }

  {
    svn_stringbuf_t *VAR_11 = FUNC_3(VAR_6, VAR_7);

    FUNC_0(FUNC_4(VAR_8, 3, VAR_11->data, VAR_11->len));
  }

  FUNC_0(FUNC_10(((void*)0), VAR_8));

  return VAR_3;
}
