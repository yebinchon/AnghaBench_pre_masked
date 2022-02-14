
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_15__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *,char const*,int ) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,char const*,char const*,int *) ;
 int FUNC_13 (TYPE_2__*,char const*,int *,char const*,char const*,int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char const*) ;
 int VAR_3 ;
 char* FUNC_16 (char const*,int *) ;
 int FUNC_17 (char const*,int *) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_20 (TYPE_1__*) ;
 TYPE_1__* FUNC_21 (char const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int **,int ,char const*,int *,int *) ;
 int FUNC_26 (scalar_t__*,int ,char const*,int ,int ,int *) ;
 int FUNC_27 (TYPE_2__*,char const*,int ,int *) ;

svn_error_t *
FUNC_28(apr_hash_t *VAR_5,
                             apr_hash_t *VAR_6,
                             const char *VAR_7,
                             const char *VAR_8,
                             svn_depth_t VAR_9,
                             svn_boolean_t *VAR_10,
                             svn_ra_session_t *VAR_11,
                             svn_client_ctx_t *VAR_12,
                             apr_pool_t *VAR_13)
{
  apr_hash_t *VAR_14;
  apr_hash_index_t *VAR_15;
  apr_pool_t *VAR_16;

  FUNC_4(VAR_7);

  VAR_16 = FUNC_23(VAR_13);

  FUNC_3(FUNC_25(&VAR_14,
                                          VAR_12->wc_ctx, VAR_8,
                                          VAR_13, VAR_16));

  for (VAR_15 = FUNC_6(VAR_13, VAR_5);
       VAR_15;
       VAR_15 = FUNC_8(VAR_15))
    {
      const char *VAR_17 = FUNC_9(VAR_15);
      const char *VAR_18 = FUNC_11(VAR_15);
      svn_depth_t VAR_19 = VAR_3;

      FUNC_22(VAR_16);

      if (VAR_6)
        {
          const char *VAR_20;

          VAR_20 = FUNC_7(VAR_6, VAR_17,
                                         FUNC_10(VAR_15));

          if (VAR_20 == ((void*)0))
            {
              return FUNC_19(
                        VAR_1, ((void*)0),
                        FUNC_5("Traversal of '%s' found no ambient depth"),
                        FUNC_17(VAR_17, VAR_13));
            }
          else
            {
              VAR_19 = FUNC_15(VAR_20);
            }
        }

      FUNC_3(FUNC_13(VAR_12, VAR_7, VAR_10,
                                      VAR_17,
                                      VAR_18, VAR_14,
                                      VAR_19, VAR_9,
                                      VAR_11, VAR_16));
    }


  for (VAR_15 = FUNC_6(VAR_13, VAR_14);
       VAR_15;
       VAR_15 = FUNC_8(VAR_15))
    {
      const char *VAR_21 = FUNC_9(VAR_15);
      const char *VAR_22 = FUNC_11(VAR_15);
      const char *VAR_23;

      FUNC_22(VAR_16);

      FUNC_3(FUNC_27(
                          VAR_12, VAR_21,
                          FUNC_12(VAR_12, VAR_22,
                                                       VAR_21, VAR_16),
                          VAR_16));



      VAR_23 = VAR_21;
      do {
        svn_node_kind_t VAR_24;

        VAR_23 = FUNC_16(VAR_23, VAR_16);
        FUNC_3(FUNC_26(&VAR_24, VAR_12->wc_ctx, VAR_23,
                                  VAR_0 ,
                                  VAR_0 ,
                                  VAR_16));
        if (VAR_24 == VAR_4)
          {
            svn_error_t *VAR_25;

            VAR_25 = FUNC_21(VAR_23, VAR_16);
            if (VAR_25)
              {
                if (FUNC_2(VAR_25->apr_err))
                  {
                    FUNC_18(VAR_25);
                    break;
                  }
                else if (FUNC_0(VAR_25->apr_err)
                         || FUNC_1(VAR_25->apr_err))
                  {
                    FUNC_18(VAR_25);

                  }
                else
                  return FUNC_20(VAR_25);
              }
          }
      } while (FUNC_14(VAR_23, VAR_22) != 0);
    }


  FUNC_24(VAR_16);
  return VAR_2;
}
