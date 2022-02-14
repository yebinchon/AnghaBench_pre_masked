
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ a_type; scalar_t__ a_id; scalar_t__ a_perm; } ;
typedef TYPE_1__ aclent_t ;



int
FUNC_0(void *VAR_0, void *VAR_1)
{
 aclent_t *VAR_2 = (aclent_t *)VAR_0;
 aclent_t *VAR_3 = (aclent_t *)VAR_1;


 if (VAR_2->a_type < VAR_3->a_type)
  return (-1);
 if (VAR_2->a_type > VAR_3->a_type)
  return (1);

 if (VAR_2->a_id < VAR_3->a_id)
  return (-1);
 if (VAR_2->a_id > VAR_3->a_id)
  return (1);

 if (VAR_2->a_perm < VAR_3->a_perm)
  return (-1);
 if (VAR_2->a_perm > VAR_3->a_perm)
  return (1);

 return (0);
}
