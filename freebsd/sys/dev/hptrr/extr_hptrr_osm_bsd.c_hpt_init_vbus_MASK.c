
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int him_handle; TYPE_1__* him; } ;
struct TYPE_8__ {TYPE_4__ ldm_adapter; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* hba_list; scalar_t__ vbus; } ;
struct TYPE_6__ {int (* initialize ) (int ) ;} ;
typedef TYPE_2__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_3__* PHBA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(PVBUS_EXT VAR_0)
{
 PHBA VAR_1;

 for (VAR_1 = VAR_0->hba_list; VAR_1; VAR_1 = VAR_1->next)
  if (!VAR_1->ldm_adapter.him->initialize(VAR_1->ldm_adapter.him_handle)) {
   FUNC_0(("fail to initialize %p", VAR_1));
   return -1;
  }

 FUNC_1((PVBUS)VAR_0->vbus, &VAR_0->hba_list->ldm_adapter);
 return 0;
}
