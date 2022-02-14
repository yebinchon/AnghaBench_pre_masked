
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * err; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct repos_info_baton {int * last_uuid; int * last_repos; TYPE_2__* ctx; int * state_pool; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char const*,int *,int *) ;
 int FUNC_15 (scalar_t__*,int *,int *,int *,int *,int ,char const*,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_16 (char const*,int ,int *) ;
 int VAR_5 ;
 int FUNC_17 (int ,char const*,int ,struct repos_info_baton*,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int FUNC_18 (TYPE_2__*,char const*,struct repos_info_baton*,int *) ;

svn_error_t *
FUNC_19(const char *VAR_6,
                   svn_client_ctx_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  const char *VAR_9;
  apr_hash_t *VAR_10;
  struct repos_info_baton VAR_11;

  VAR_11.state_pool = VAR_8;
  VAR_11.ctx = VAR_7;
  VAR_11.last_repos = ((void*)0);
  VAR_11.last_uuid = ((void*)0);

  if (FUNC_10(VAR_6))
    return FUNC_9(VAR_1, ((void*)0),
                             FUNC_1("'%s' is not a local path"), VAR_6);

  FUNC_0(FUNC_7(&VAR_9, VAR_6, VAR_8));
  FUNC_0(FUNC_17(VAR_7->wc_ctx, VAR_9,
                         VAR_3, &VAR_11,
                         VAR_7->cancel_func, VAR_7->cancel_baton,
                         VAR_7->notify_func2, VAR_7->notify_baton2,
                         VAR_8));

  FUNC_0(FUNC_14(&VAR_10,
                                          VAR_7->wc_ctx, VAR_9,
                                          VAR_8, VAR_8));

  if (FUNC_2(VAR_10) > 0)
    {
      apr_pool_t *VAR_12 = FUNC_12(VAR_8);
      apr_hash_index_t *VAR_13;






      for (VAR_13 = FUNC_3(VAR_8, VAR_10);
           VAR_13;
           VAR_13 = FUNC_4(VAR_13))
        {
          const char *VAR_14;
          svn_node_kind_t VAR_15;

          FUNC_11(VAR_12);

          VAR_14 = FUNC_5(VAR_13);

          FUNC_0(FUNC_15(&VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                             VAR_7->wc_ctx, VAR_9,
                                             VAR_14, VAR_0,
                                             VAR_12, VAR_12));

          if (VAR_15 == VAR_4)
            {
              svn_error_t *VAR_16 = FUNC_19(VAR_14, VAR_7, VAR_12);

              if (VAR_16)
                {
                  svn_wc_notify_t *VAR_17 =
                            FUNC_16(VAR_14,
                                                 VAR_5,
                                                 VAR_12);
                  VAR_17->err = VAR_16;
                  VAR_7->notify_func2(VAR_7->notify_baton2,
                                    VAR_17, VAR_12);
                  FUNC_8(VAR_16);

                }
            }
        }

      FUNC_13(VAR_12);
    }
  else
    {



      FUNC_0(FUNC_18(VAR_7, VAR_9,
                                                &VAR_11, VAR_8));
    }
  return VAR_2;
}
