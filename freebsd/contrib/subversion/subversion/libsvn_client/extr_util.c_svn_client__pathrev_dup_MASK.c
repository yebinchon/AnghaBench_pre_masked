
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int url; int rev; int repos_uuid; int repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int ,int ,int ,int ,int *) ;

svn_client__pathrev_t *
FUNC_1(const svn_client__pathrev_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  return FUNC_0(
           VAR_0->repos_root_url, VAR_0->repos_uuid,
           VAR_0->rev, VAR_0->url, VAR_1);
}
