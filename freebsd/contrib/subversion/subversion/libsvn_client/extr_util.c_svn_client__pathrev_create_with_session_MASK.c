
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int url; int rev; int repos_uuid; int repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;

svn_error_t *
FUNC_7(svn_client__pathrev_t **VAR_1,
                                        svn_ra_session_t *VAR_2,
                                        svn_revnum_t VAR_3,
                                        const char *VAR_4,
                                        apr_pool_t *VAR_5)
{
  svn_client__pathrev_t *VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));

  FUNC_1(FUNC_4(VAR_4));

  FUNC_0(FUNC_5(VAR_2, &VAR_6->repos_root_url,
                                 VAR_5));
  FUNC_0(FUNC_6(VAR_2, &VAR_6->repos_uuid, VAR_5));
  VAR_6->rev = VAR_3;
  VAR_6->url = FUNC_3(VAR_5, VAR_4);
  *VAR_1 = VAR_6;
  return VAR_0;
}
