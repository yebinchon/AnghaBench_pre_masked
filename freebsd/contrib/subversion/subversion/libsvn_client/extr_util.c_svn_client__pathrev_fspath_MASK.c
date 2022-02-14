
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int url; int repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;

const char *
FUNC_2(const svn_client__pathrev_t *VAR_0,
                           apr_pool_t *VAR_1)
{
  return FUNC_0(FUNC_1(
                                    VAR_0->repos_root_url, VAR_0->url,
                                    VAR_1),
                                  VAR_1);
}
