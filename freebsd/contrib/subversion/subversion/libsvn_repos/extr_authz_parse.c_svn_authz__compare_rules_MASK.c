
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ repos; } ;
typedef TYPE_1__ authz_rule_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;

int
FUNC_2(const authz_rule_t *VAR_0, const authz_rule_t *VAR_1)
{
  int VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2)
    return VAR_2;


  if (VAR_0->repos != VAR_1->repos)
    return FUNC_0(VAR_0->repos, VAR_1->repos);

  return 0;
}
