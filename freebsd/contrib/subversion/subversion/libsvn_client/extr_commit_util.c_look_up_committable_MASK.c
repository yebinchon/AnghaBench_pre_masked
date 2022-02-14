
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_client_commit_item3_t ;
struct TYPE_3__ {int by_path; } ;
typedef TYPE_1__ svn_client__committables_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static svn_client_commit_item3_t *
FUNC_1(svn_client__committables_t *VAR_0,
                    const char *VAR_1,
                    apr_pool_t *VAR_2)
{
  return (svn_client_commit_item3_t *)
      FUNC_0(VAR_0->by_path, VAR_1);
}
