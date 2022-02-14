
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ msi_ctx; int ** pqi_irq; int * pqi_irq_rid; scalar_t__* intr_registered; int * intrcookie; int pqi_dev; } ;
struct TYPE_6__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int pqi_intr_ctx_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

void FUNC_4(pqisrc_softstate_t *VAR_2)
{
 device_t VAR_3;

 FUNC_0("IN\n");

 VAR_3 = VAR_2->os_specific.pqi_dev;
 if (VAR_2->os_specific.pqi_irq[0] != ((void*)0)) {
  if (VAR_2->os_specific.intr_registered[0]) {
   FUNC_2(VAR_3, VAR_2->os_specific.pqi_irq[0],
     VAR_2->os_specific.intrcookie[0]);
   VAR_2->os_specific.intr_registered[0] = VAR_0;
  }
  FUNC_1(VAR_3, VAR_1,
   VAR_2->os_specific.pqi_irq_rid[0],
   VAR_2->os_specific.pqi_irq[0]);
  VAR_2->os_specific.pqi_irq[0] = ((void*)0);
  FUNC_3(VAR_2, (char*)VAR_2->os_specific.msi_ctx, sizeof(pqi_intr_ctx_t));
 }

 FUNC_0("OUT\n");
}
