
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_8__ {TYPE_1__* nodes; struct TYPE_8__* next; struct TYPE_8__* chassis; } ;
typedef TYPE_2__ ibnd_fabric_t ;
typedef TYPE_2__ ibnd_chassis_t ;
typedef int f_internal_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(ibnd_fabric_t * VAR_0)
{
 ibnd_node_t *VAR_1 = ((void*)0);
 ibnd_node_t *VAR_2 = ((void*)0);
 ibnd_chassis_t *VAR_3, *VAR_4;

 if (!VAR_0)
  return;

 VAR_3 = VAR_0->chassis;
 while (VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_2(VAR_3);
  VAR_3 = VAR_4;
 }
 VAR_1 = VAR_0->nodes;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_0((f_internal_t *)VAR_0);
 FUNC_2(VAR_0);
}
