
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* him_handle; } ;
struct TYPE_15__ {TYPE_2__ ldm_adapter; struct TYPE_15__* next; int irq_handle; int irq_res; int pcidev; } ;
struct TYPE_12__ {scalar_t__ ta_context; } ;
struct TYPE_14__ {int lock; int timer; TYPE_4__* hba_list; TYPE_1__ worker; int vbus; } ;
typedef scalar_t__ PVDEV ;
typedef TYPE_3__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_4__* PHBA ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_13(PVBUS_EXT VAR_2, int VAR_3)
{
 PVBUS VAR_4 = (PVBUS)VAR_2->vbus;
 PHBA VAR_5;
 int VAR_6;

 FUNC_0(("hpt_shutdown_vbus"));


 FUNC_7(VAR_2);
 VAR_2->worker.ta_context = 0;


 for (VAR_6=0; VAR_6<VAR_1; VAR_6++) {
  PVDEV VAR_7 = FUNC_9(VAR_4, VAR_6);
  if (VAR_7) {

   if (FUNC_4(VAR_2, VAR_7))
    FUNC_4(VAR_2, VAR_7);
  }
 }

 FUNC_6(VAR_2);
 FUNC_11(VAR_4);
 FUNC_8(VAR_2);

 FUNC_10(VAR_4);

 for (VAR_5=VAR_2->hba_list; VAR_5; VAR_5=VAR_5->next)
  FUNC_1(VAR_5->pcidev, VAR_5->irq_res, VAR_5->irq_handle);

 FUNC_5(VAR_2);

 while ((VAR_5=VAR_2->hba_list)) {
  VAR_2->hba_list = VAR_5->next;
  FUNC_3(VAR_5->ldm_adapter.him_handle, VAR_0);
 }




 FUNC_3(VAR_2, VAR_0);
 FUNC_0(("hpt_shutdown_vbus done"));
}
