
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_7__ {int repos_root_url; int url; int repos_uuid; int rev; } ;
typedef TYPE_2__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int *,int *,char const**,int *,int *,int *,int *,int ,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_4(svn_client__pathrev_t **VAR_2,
                               const char *VAR_3,
                               svn_client_ctx_t *VAR_4,
                               apr_pool_t *VAR_5,
                               apr_pool_t *VAR_6)
{
  const char *VAR_7;

  *VAR_2 = FUNC_1(VAR_5, sizeof(**VAR_2));

  FUNC_0(FUNC_3(((void*)0) ,
                                  &(*VAR_2)->rev,
                                  &VAR_7,
                                  &(*VAR_2)->repos_root_url,
                                  &(*VAR_2)->repos_uuid,
                                  ((void*)0), ((void*)0),
                                  VAR_4->wc_ctx, VAR_3,
                                  VAR_0 ,
                                  VAR_5, VAR_6));
  if ((*VAR_2)->repos_root_url && VAR_7)
    {
      (*VAR_2)->url = FUNC_2(
                           (*VAR_2)->repos_root_url, VAR_7, VAR_5);
    }
  else
    {
      *VAR_2 = ((void*)0);
    }
  return VAR_1;
}
