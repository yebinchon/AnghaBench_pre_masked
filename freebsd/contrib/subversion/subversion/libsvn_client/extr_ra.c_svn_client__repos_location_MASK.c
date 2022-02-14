
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_5__ {int repos_uuid; int repos_root_url; int rev; int url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (char const**,int *,int *,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (char const**,int *,int ,int *) ;
 TYPE_1__* FUNC_3 (int ,int ,int ,char const*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*,int *) ;

svn_error_t *
FUNC_6(svn_client__pathrev_t **VAR_2,
                           svn_ra_session_t *VAR_3,
                           const svn_client__pathrev_t *VAR_4,
                           svn_revnum_t VAR_5,
                           svn_client_ctx_t *VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;
  svn_error_t *VAR_11;

  FUNC_0(FUNC_2(&VAR_9, VAR_3,
                                            VAR_4->url, VAR_8));
  VAR_11 = FUNC_1(&VAR_10, ((void*)0), VAR_3,
                        VAR_4->url, VAR_4->rev,
                        VAR_5, VAR_0, VAR_0,
                        VAR_7, VAR_8);
  FUNC_0(FUNC_4(
            VAR_11, FUNC_5(VAR_3, VAR_9, VAR_8)));

  *VAR_2 = FUNC_3(VAR_4->repos_root_url,
                                         VAR_4->repos_uuid,
                                         VAR_5, VAR_10, VAR_7);
  return VAR_1;
}
