
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int URL; int repos_root_URL; } ;
typedef TYPE_1__ svn_client_info2_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static const char*
FUNC_3(const svn_client_info2_t *VAR_1, apr_pool_t *VAR_2)
{
  return FUNC_0(VAR_2, "^/",
                     FUNC_1(
                         FUNC_2(VAR_1->repos_root_URL,
                                               VAR_1->URL, VAR_2),
                         VAR_2), VAR_0);
}
