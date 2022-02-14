
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dm_ops; } ;
typedef TYPE_1__ dt_module_t ;


 int VAR_0 ;

const char *
FUNC_0(dt_module_t *VAR_1)
{
 if (VAR_1->dm_ops == &VAR_0)
  return ("64-bit");
 else
  return ("32-bit");
}
