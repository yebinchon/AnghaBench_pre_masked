
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_18__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
struct validator_baton_t {char const* path; int * pool; int url_uuids; TYPE_2__* ctx; } ;
struct url_uuid_t {int dummy; } ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 size_t FUNC_9 (char*) ;
 TYPE_1__* FUNC_10 (char const**,int *,char const*,TYPE_2__*,int *,int *) ;
 TYPE_1__* FUNC_11 (char const**,char const*,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_14 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 TYPE_1__* FUNC_19 (int **,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_20 (scalar_t__*,int *,int *,int *,int *,int ,char const*,char const*,scalar_t__,int *,int *) ;
 TYPE_1__* FUNC_21 (int ,char const*,char const*,char const*,int ,struct validator_baton_t*,int *) ;
 int VAR_5 ;

svn_error_t *
FUNC_22(const char *VAR_6,
                     const char *VAR_7,
                     const char *VAR_8,
                     svn_boolean_t VAR_9,
                     svn_client_ctx_t *VAR_10,
                     apr_pool_t *VAR_11)
{
  struct validator_baton_t VAR_12;
  const char *VAR_13;
  apr_hash_t *VAR_14 = ((void*)0);
  apr_hash_index_t *VAR_15;
  apr_pool_t *VAR_16 = ((void*)0);
  const char *VAR_17, *VAR_18;
  char *VAR_19, *VAR_20;
  apr_size_t VAR_21, VAR_22;


  VAR_12.ctx = VAR_10;
  VAR_12.path = VAR_6;
  VAR_12.url_uuids = FUNC_2(VAR_11, 1, sizeof(struct url_uuid_t));
  VAR_12.pool = VAR_11;

  if (FUNC_15(VAR_6))
    return FUNC_13(VAR_1, ((void*)0),
                             FUNC_1("'%s' is not a local path"),
                             VAR_6);

  FUNC_0(FUNC_11(&VAR_13, VAR_6, VAR_11));


  if (VAR_9)
    {
      return FUNC_14(FUNC_21(VAR_10->wc_ctx, VAR_13,
                                              VAR_7, VAR_8,
                                              VAR_5, &VAR_12, VAR_11));
    }


  FUNC_0(FUNC_10(&VAR_17, ((void*)0) ,
                                    VAR_13, VAR_10, VAR_11, VAR_11));


  FUNC_0(FUNC_21(VAR_10->wc_ctx, VAR_13, VAR_7, VAR_8,
                           VAR_5, &VAR_12, VAR_11));


  FUNC_0(FUNC_10(&VAR_18, ((void*)0) ,
                                    VAR_13, VAR_10, VAR_11, VAR_11));



  FUNC_0(FUNC_19(&VAR_14,
                                          VAR_10->wc_ctx, VAR_13,
                                          VAR_11, VAR_11));
  if (! FUNC_3(VAR_14))
    return VAR_3;




  VAR_19 = FUNC_7(VAR_11, VAR_7);
  VAR_20 = FUNC_7(VAR_11, VAR_8);
  VAR_21 = FUNC_9(VAR_19);
  VAR_22 = FUNC_9(VAR_20);
  while (VAR_21 && VAR_22
         && VAR_19[VAR_21] == VAR_20[VAR_22])
    {
      VAR_19[VAR_21] = VAR_20[VAR_22] = '\0';
      --VAR_21;
      --VAR_22;
    }

  VAR_16 = FUNC_17(VAR_11);

  for (VAR_15 = FUNC_4(VAR_11, VAR_14);
       VAR_15 != ((void*)0);
       VAR_15 = FUNC_5(VAR_15))
    {
      svn_node_kind_t VAR_23;
      const char *VAR_24 = FUNC_6(VAR_15);

      FUNC_16(VAR_16);

      FUNC_0(FUNC_20(&VAR_23, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         VAR_10->wc_ctx,
                                         VAR_13, VAR_24,
                                         VAR_0, VAR_16, VAR_16));

      if (VAR_23 == VAR_4)
        {
          const char *VAR_25;
          svn_error_t *VAR_26;

          VAR_26 = FUNC_10(&VAR_25, ((void*)0) ,
                                          VAR_24, VAR_10, VAR_16, VAR_16);




          if (VAR_26 && VAR_26->apr_err == VAR_2)
            {
              FUNC_12(VAR_26);
              continue;
            }
          FUNC_0(VAR_26);

          if (FUNC_8(VAR_17, VAR_25) == 0)
            FUNC_0(FUNC_22(VAR_24,
                                         VAR_19, VAR_20,
                                         VAR_0 ,
                                         VAR_10, VAR_16));
        }
    }

  FUNC_18(VAR_16);

  return VAR_3;
}
