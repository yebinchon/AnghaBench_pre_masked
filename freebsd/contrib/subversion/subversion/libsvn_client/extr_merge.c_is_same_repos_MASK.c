
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int repos_uuid; int repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const svn_client__pathrev_t *VAR_0,
              const svn_client__pathrev_t *VAR_1,
              svn_boolean_t VAR_2)
{
  if (VAR_2)
    return (FUNC_0(VAR_0->repos_root_url, VAR_1->repos_root_url) == 0
            && FUNC_0(VAR_0->repos_uuid, VAR_1->repos_uuid) == 0);
  else
    return (FUNC_0(VAR_0->repos_uuid, VAR_1->repos_uuid) == 0);
}
