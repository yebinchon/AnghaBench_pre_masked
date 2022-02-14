
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int action; void* kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
struct TYPE_9__ {int sdb; int abspath; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char const*,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,int ,int *) ;
 void* FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int **,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__**,char const**,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_18 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

svn_error_t *
FUNC_19(svn_wc_notify_func2_t VAR_7,
                              void *VAR_8,
                              svn_wc__db_t *VAR_9,
                              const char *VAR_10,
                              apr_pool_t *VAR_11)
{
  svn_wc__db_wcroot_t *VAR_12;
  const char *VAR_13;
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  apr_pool_t *VAR_16 = FUNC_6(VAR_11);

  FUNC_0(FUNC_17(&VAR_12, &VAR_13,
                              VAR_9, VAR_10, VAR_11, VAR_16));
  FUNC_2(VAR_12);

  FUNC_0(FUNC_13(&VAR_14, VAR_12->sdb,
                                    VAR_1));
  FUNC_0(FUNC_8(VAR_14, "s", VAR_13));
  FUNC_0(FUNC_15(&VAR_15, VAR_14));
  if (!VAR_15)
    return FUNC_4(FUNC_14(VAR_14));
  while (VAR_15)
    {
      const char *VAR_17 = FUNC_11(VAR_14, 0, ((void*)0));
      svn_wc_notify_t *VAR_18;

      FUNC_5(VAR_16);

      VAR_18 = FUNC_18(FUNC_3(VAR_12->abspath,
                                                    VAR_17,
                                                    VAR_16),
                                    VAR_5,
                                    VAR_16);

      if (!FUNC_10(VAR_14, 1))
        VAR_18->kind = FUNC_12(VAR_14, 1, VAR_3);
      else
        {
          if (!FUNC_10(VAR_14, 3))
            VAR_18->kind = FUNC_12(VAR_14, 3, VAR_4);

          switch (FUNC_9(VAR_14, 2))
            {
              case 0:
                continue;
              case 1:

                break;
              case 2:
                VAR_18->action = VAR_6;
                break;
              default:
                FUNC_1();
            }
        }

      VAR_7(VAR_8, VAR_18, VAR_16);

      FUNC_0(FUNC_15(&VAR_15, VAR_14));
    }
  FUNC_0(FUNC_14(VAR_14));

  FUNC_0(FUNC_13(&VAR_14, VAR_12->sdb,
                                    VAR_0));
  FUNC_0(FUNC_8(VAR_14, "s", VAR_13));
  FUNC_0(FUNC_16(VAR_14));

  FUNC_7(VAR_16);

  return VAR_2;
}
