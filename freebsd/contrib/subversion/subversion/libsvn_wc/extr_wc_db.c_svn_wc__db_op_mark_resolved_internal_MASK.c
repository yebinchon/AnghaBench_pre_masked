
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wc_id; int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
struct TYPE_7__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int const*,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int * FUNC_5 (void const*,int ,int *) ;
 TYPE_2__* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (int *,char*,int ,char const*) ;
 void* FUNC_9 (int *,int,int *,int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int*,int *) ;
 int FUNC_15 (scalar_t__*,int *,int *,int ,scalar_t__,char*,scalar_t__,int *,int *) ;

svn_error_t *
FUNC_16(svn_wc__db_wcroot_t *VAR_6,
                                     const char *VAR_7,
                                     svn_wc__db_t *VAR_8,
                                     svn_boolean_t VAR_9,
                                     svn_boolean_t VAR_10,
                                     svn_boolean_t VAR_11,
                                     const svn_skel_t *VAR_12,
                                     apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  int VAR_16 = 0;
  svn_boolean_t VAR_17;
  apr_size_t VAR_18;
  const void *VAR_19;
  svn_skel_t *VAR_20;


  FUNC_0(FUNC_10(&VAR_14, VAR_6->sdb,
                                    VAR_1));
  FUNC_0(FUNC_8(VAR_14, "is", VAR_6->wc_id, VAR_7));

  FUNC_0(FUNC_12(&VAR_15, VAR_14));

  if (! VAR_15)
    {
      FUNC_0(FUNC_11(VAR_14));

      FUNC_0(FUNC_10(&VAR_14, VAR_6->sdb,
                                        VAR_2));

      FUNC_0(FUNC_8(VAR_14, "is", VAR_6->wc_id, VAR_7));

      FUNC_0(FUNC_12(&VAR_15, VAR_14));
      FUNC_0(FUNC_11(VAR_14));

      if (VAR_15)
        return VAR_5;

      return FUNC_4(VAR_4, ((void*)0),
                               FUNC_1("The node '%s' was not found."),
                                   FUNC_3(VAR_6,
                                                          VAR_7,
                                                          VAR_13));
    }

  VAR_19 = FUNC_9(VAR_14, 2, &VAR_18,
                                          VAR_13);
  FUNC_0(FUNC_11(VAR_14));
  FUNC_0(FUNC_2(VAR_6->sdb, VAR_12, VAR_13));

  if (!VAR_19)
    return VAR_5;

  VAR_20 = FUNC_5(VAR_19, VAR_18, VAR_13);


  FUNC_0(FUNC_15(&VAR_17, VAR_20,
                                        VAR_8, VAR_6->abspath,
                                        VAR_9,
                                        VAR_10 ? "" : ((void*)0),
                                        VAR_11,
                                        VAR_13, VAR_13));

  FUNC_0(FUNC_10(&VAR_14, VAR_6->sdb,
                                    VAR_3));
  FUNC_0(FUNC_8(VAR_14, "is", VAR_6->wc_id, VAR_7));

  if (! VAR_17)
    {
      svn_stringbuf_t *VAR_21 = FUNC_6(VAR_20, VAR_13);

      FUNC_0(FUNC_7(VAR_14, 3, VAR_21->data, VAR_21->len));
    }

  FUNC_0(FUNC_14(&VAR_16, VAR_14));



  if (VAR_16 > 0)
    {
      FUNC_0(FUNC_10(&VAR_14, VAR_6->sdb,
                                        VAR_0));
      FUNC_0(FUNC_8(VAR_14, "is", VAR_6->wc_id, VAR_7));
      FUNC_0(FUNC_13(VAR_14));
    }

  return VAR_5;
}
