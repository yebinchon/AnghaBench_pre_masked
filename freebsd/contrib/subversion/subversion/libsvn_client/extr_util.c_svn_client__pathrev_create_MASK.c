
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {void* url; int rev; void* repos_uuid; void* repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;

svn_client__pathrev_t *
FUNC_4(const char *VAR_0,
                           const char *VAR_1,
                           svn_revnum_t VAR_2,
                           const char *VAR_3,
                           apr_pool_t *VAR_4)
{
  svn_client__pathrev_t *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));

  FUNC_0(FUNC_3(VAR_0));
  FUNC_0(FUNC_3(VAR_3));

  VAR_5->repos_root_url = FUNC_2(VAR_4, VAR_0);
  VAR_5->repos_uuid = FUNC_2(VAR_4, VAR_1);
  VAR_5->rev = VAR_2;
  VAR_5->url = FUNC_2(VAR_4, VAR_3);
  return VAR_5;
}
