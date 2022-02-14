
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ t_id; } ;
typedef TYPE_1__ tdesc_t ;



int
FUNC_0(void *VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->t_id == VAR_3->t_id)
  return (0);
 else
  return (VAR_2->t_id > VAR_3->t_id ? 1 : -1);
}
