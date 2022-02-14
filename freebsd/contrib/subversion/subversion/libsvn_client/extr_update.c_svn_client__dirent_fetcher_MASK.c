
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct svn_client__dirent_fetcher_baton_t {int ra_session; int target_revision; int anchor_url; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char const**,int ,char const*,int *) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (int ,char const*,int ,scalar_t__*,int *) ;
 int FUNC_4 (int ,int **,int *,int *,char const*,int ,int ,int *) ;
 int FUNC_5 (int ,char const**,char const*,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,char const*) ;

svn_error_t *
FUNC_8(void *VAR_3,
                           apr_hash_t **VAR_4,
                           const char *VAR_5,
                           const char *VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  struct svn_client__dirent_fetcher_baton_t *VAR_9 = VAR_3;
  const char *VAR_10 = ((void*)0);
  const char *VAR_11;
  svn_node_kind_t VAR_12;
  const char *VAR_13;

  VAR_13 = FUNC_2(VAR_5, VAR_6,
                                    VAR_8);

  if (!FUNC_7(VAR_9->anchor_url, VAR_13))
    {
      FUNC_0(FUNC_1(&VAR_10, VAR_9->ra_session,
                                                VAR_13, VAR_8));
      VAR_11 = "";
    }
  else
    FUNC_0(FUNC_5(VAR_9->ra_session,
                                                &VAR_11, VAR_13,
                                                VAR_8));


  FUNC_0(FUNC_3(VAR_9->ra_session, VAR_11,
                            VAR_9->target_revision, &VAR_12, VAR_8));

  if (VAR_12 == VAR_2)
    FUNC_0(FUNC_4(VAR_9->ra_session, VAR_4, ((void*)0), ((void*)0),
                            VAR_11, VAR_9->target_revision,
                            VAR_0, VAR_7));
  else
    *VAR_4 = ((void*)0);

  if (VAR_10)
    FUNC_0(FUNC_6(VAR_9->ra_session, VAR_10, VAR_8));

  return VAR_1;
}
