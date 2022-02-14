
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* htnext; } ;
typedef TYPE_1__ ibnd_port_t ;
typedef int (* ibnd_iter_port_func_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {TYPE_1__** portstbl; } ;
typedef TYPE_3__ ibnd_fabric_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1(ibnd_fabric_t * VAR_1, ibnd_iter_port_func_t VAR_2,
   void *VAR_3)
{
 int VAR_4 = 0;
 ibnd_port_t *VAR_5 = ((void*)0);

 if (!VAR_1) {
  FUNC_0("fabric parameter NULL\n");
  return;
 }

 if (!VAR_2) {
  FUNC_0("func parameter NULL\n");
  return;
 }

 for (VAR_4 = 0; VAR_4<VAR_0; VAR_4++)
  for (VAR_5 = VAR_1->portstbl[VAR_4]; VAR_5; VAR_5 = VAR_5->htnext)
   VAR_2(VAR_5, VAR_3);
}
