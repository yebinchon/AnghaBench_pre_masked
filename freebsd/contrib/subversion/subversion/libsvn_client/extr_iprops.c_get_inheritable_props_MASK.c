
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_13__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef char const apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 char const* FUNC_8 (int *,char const*) ;
 int FUNC_9 (scalar_t__*,char const*,int *,TYPE_2__*,int *) ;
 int FUNC_10 (int **,char const*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,char const*) ;
 int FUNC_14 (int *,char const*,char const*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 TYPE_1__* FUNC_18 (int *,char const**,char*,int ,int *,int *) ;
 int FUNC_19 (int *,char const*,int *) ;
 int FUNC_20 (int **,int ,int ,char const*,int *,int *) ;
 int FUNC_21 (char const**,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(apr_hash_t **VAR_2,
                      const char *VAR_3,
                      svn_revnum_t VAR_4,
                      svn_depth_t VAR_5,
                      svn_ra_session_t *VAR_6,
                      svn_client_ctx_t *VAR_7,
                      apr_pool_t *VAR_8,
                      apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;
  apr_hash_index_t *VAR_11;
  apr_pool_t *VAR_12 = FUNC_16(VAR_9);
  apr_pool_t *VAR_13 = ((void*)0);
  *VAR_2 = FUNC_4(VAR_8);

  FUNC_1(FUNC_2(VAR_4));





  FUNC_0(FUNC_20(&VAR_10, VAR_5,
                                            VAR_7->wc_ctx, VAR_3,
                                            VAR_9, VAR_12));





  if (!FUNC_13(VAR_10, VAR_3))
    {
      svn_boolean_t VAR_14;

      FUNC_0(FUNC_9(&VAR_14, VAR_3,
                                   VAR_6, VAR_7, VAR_12));
      if (VAR_14)
        {
          const char *VAR_15 = FUNC_8(VAR_9,
                                                   VAR_3);



          FUNC_14(VAR_10, VAR_15, VAR_15);
        }
    }

      for (VAR_11 = FUNC_3(VAR_9, VAR_10);
           VAR_11;
           VAR_11 = FUNC_5(VAR_11))
        {
          const char *VAR_16 = FUNC_6(VAR_11);
          const char *VAR_17 = FUNC_7(VAR_11);
          const char *VAR_18;
          apr_array_header_t *VAR_19;
          svn_error_t *VAR_20;

          FUNC_15(VAR_12);

          if (*VAR_17 == '\0')
            {

              continue;
            }

          FUNC_0(FUNC_21(&VAR_18, VAR_7->wc_ctx, VAR_16,
                                       VAR_12, VAR_12));
          if (VAR_6)
            FUNC_0(FUNC_19(VAR_6, VAR_18, VAR_9));
          else
            {
              if (! VAR_13)
                VAR_13 = FUNC_16(VAR_9);

              FUNC_0(FUNC_10(&VAR_6, VAR_18, ((void*)0),
                                                  VAR_7,
                                                  VAR_13, VAR_12));
            }

          VAR_20 = FUNC_18(VAR_6, &VAR_19,
                                           "", VAR_4,
                                           VAR_8, VAR_12);

          if (VAR_20)
            {
              if (VAR_20->apr_err != VAR_0)
                return FUNC_12(VAR_20);

              FUNC_11(VAR_20);
              continue;
            }

          FUNC_14(*VAR_2,
                        FUNC_8(VAR_8, VAR_16),
                        VAR_19);
        }


  FUNC_17(VAR_12);
  if (VAR_13)
    FUNC_17(VAR_13);

  return VAR_1;

}
