
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nprim; } ;
struct policydb {TYPE_1__ p_roles; } ;



int FUNC_0(struct policydb *VAR_0, unsigned int VAR_1)
{
 if (!VAR_1 || VAR_1 > VAR_0->p_roles.nprim)
  return 0;
 return 1;
}
