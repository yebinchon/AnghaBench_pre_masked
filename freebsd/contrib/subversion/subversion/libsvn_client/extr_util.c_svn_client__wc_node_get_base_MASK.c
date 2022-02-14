
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int repos_root_url; int url; int repos_uuid; int rev; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int *,int *,char const**,int *,int *,int *,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_4(svn_client__pathrev_t **VAR_2,
                             const char *VAR_3,
                             svn_wc_context_t *VAR_4,
                             apr_pool_t *VAR_5,
                             apr_pool_t *VAR_6)
{
  const char *VAR_7;

  *VAR_2 = FUNC_1(VAR_5, sizeof(**VAR_2));

  FUNC_0(FUNC_3(((void*)0),
                                &(*VAR_2)->rev,
                                &VAR_7,
                                &(*VAR_2)->repos_root_url,
                                &(*VAR_2)->repos_uuid,
                                ((void*)0),
                                VAR_4, VAR_3,
                                VAR_1 ,
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
  return VAR_0;
}
