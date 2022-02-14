
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_4__ {char const* repos; } ;
struct TYPE_5__ {TYPE_1__ rule; } ;
typedef TYPE_2__ authz_acl_t ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

svn_boolean_t
FUNC_1(const authz_acl_t *VAR_1,
                               const char *VAR_2)
{


  return (0 == FUNC_0(VAR_1->rule.repos, VAR_0))
      || (0 == FUNC_0(VAR_2, VAR_1->rule.repos));
}
