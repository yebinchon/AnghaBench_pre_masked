
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; int (* func ) (int ,int ) ;struct TYPE_5__* next; } ;
struct TYPE_4__ {int vbus; TYPE_2__* tasks; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef TYPE_2__ OSM_TASK ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(PVBUS_EXT VAR_0)
{
 OSM_TASK *VAR_1;

 VAR_1 = VAR_0->tasks;
 VAR_0->tasks = 0;

 while (VAR_1) {
  OSM_TASK *VAR_2 = VAR_1;
  VAR_1 = VAR_2->next;
  VAR_2->next = 0;
  VAR_2->func(VAR_0->vbus, VAR_2->data);
 }
}
