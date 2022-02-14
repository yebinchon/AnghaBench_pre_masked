
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* drain_output ) (struct serial*) ;} ;


 int FUNC_0 (struct serial*) ;

int
FUNC_1 (struct serial *VAR_0)
{
  return VAR_0->ops->drain_output (VAR_0);
}
