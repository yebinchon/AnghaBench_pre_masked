
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_22__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
struct TYPE_23__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef TYPE_3__* (* svn_config_auth_walk_func_t ) (scalar_t__*,void*,char const*,int ,int *,int *) ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (char const**,char const*,char*,char const*,int *) ;
 char* FUNC_9 (char const*,int *) ;
 char* FUNC_10 (char const*,int ,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_13 (TYPE_3__*) ;
 TYPE_1__* FUNC_14 (int *,int ) ;
 TYPE_3__* FUNC_15 (int *,int *,int ,int *) ;
 TYPE_3__* FUNC_16 (int **,char const*,scalar_t__,int *,int *) ;
 TYPE_3__* FUNC_17 (char const*,scalar_t__,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 TYPE_3__* FUNC_22 (int **,char const*,int *,int *) ;

svn_error_t *
FUNC_23(const char *VAR_12,
                          svn_config_auth_walk_func_t VAR_13,
                          void *VAR_14,
                          apr_pool_t *VAR_15)
{
  int VAR_16;
  apr_pool_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_0;
  const char *VAR_19[] =
    {
      VAR_1,
      VAR_5,
      VAR_2,
      VAR_3,
      VAR_4,
      ((void*)0)
    };

  VAR_17 = FUNC_19(VAR_15);
  for (VAR_16 = 0; VAR_19[VAR_16]; VAR_16++)
    {
      const char *VAR_20;
      const char *VAR_21;
      apr_hash_t *VAR_22;
      svn_error_t *VAR_23;
      apr_pool_t *VAR_24;
      apr_hash_index_t *VAR_25;

      FUNC_18(VAR_17);

      if (VAR_18)
        break;

      FUNC_1(FUNC_8(&VAR_20, VAR_19[VAR_16], "!", VAR_12,
                                  VAR_17));

      VAR_21 = FUNC_9(VAR_20, VAR_17);

      VAR_23 = FUNC_16(&VAR_22, VAR_21, VAR_10, VAR_17, VAR_17);
      if (VAR_23)
        {
          if (!FUNC_0(VAR_23->apr_err)
              && !FUNC_2(VAR_23->apr_err))
            return FUNC_13(VAR_23);

          FUNC_11(VAR_23);
          continue;
        }

      VAR_24 = FUNC_19(VAR_17);
      for (VAR_25 = FUNC_3(VAR_17, VAR_22); VAR_25; VAR_25 = FUNC_5(VAR_25))
        {
          svn_io_dirent2_t *VAR_26 = FUNC_7(VAR_25);
          svn_stream_t *VAR_27;
          apr_hash_t *VAR_28;
          const svn_string_t *VAR_29;
          svn_boolean_t VAR_30 = VAR_0;

          if (VAR_18)
            break;

          if (VAR_26->kind != VAR_11)
            continue;

          FUNC_18(VAR_24);

          VAR_20 = FUNC_10(VAR_21, FUNC_6(VAR_25),
                                      VAR_24);

          VAR_23 = FUNC_22(&VAR_27, VAR_20,
                                         VAR_24, VAR_24);
          if (VAR_23)
            {

              FUNC_11(VAR_23);
              continue;
            }

          VAR_28 = FUNC_4(VAR_24);
          VAR_23 = FUNC_15(VAR_28, VAR_27,
                               VAR_8, VAR_24);
          VAR_23 = FUNC_12(VAR_23, FUNC_21(VAR_27));
          if (VAR_23)
            {

              FUNC_11(VAR_23);
              continue;
            }

          VAR_29 = FUNC_14(VAR_28, VAR_6);
          if (! VAR_29)
            continue;

          VAR_23 = VAR_13(&VAR_30, VAR_14, VAR_19[VAR_16],
                          VAR_29->data, VAR_28, VAR_24);
          if (VAR_23 && VAR_23->apr_err == VAR_7)
            {
              FUNC_11(VAR_23);
              VAR_23 = VAR_9;
              VAR_18 = VAR_10;
            }
          FUNC_1(VAR_23);

          if (VAR_30)
            {

              FUNC_1(FUNC_17(VAR_20, VAR_10, VAR_24));
            }
        }
    }

  FUNC_20(VAR_17);
  return VAR_9;
}
