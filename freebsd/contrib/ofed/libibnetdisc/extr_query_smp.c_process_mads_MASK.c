
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int smps_on_wire; } ;
typedef TYPE_1__ smp_engine_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(smp_engine_t * VAR_0)
{
 int VAR_1;
 while (!FUNC_0(&VAR_0->smps_on_wire))
  if ((VAR_1 = FUNC_1(VAR_0)) != 0)
   return VAR_1;
 return 0;
}
