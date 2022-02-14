
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * intr_registered; int * intrcookie; TYPE_4__* msi_ctx; int ** pqi_irq; scalar_t__* pqi_irq_rid; int pqi_dev; } ;
struct TYPE_8__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int pqi_intr_ctx_t ;
typedef int device_t ;
struct TYPE_9__ {int oq_id; int pqi_dev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ,int ,scalar_t__*,int) ;
 int FUNC_3 (int ,int *,int,int *,int ,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int) ;
 int VAR_7 ;

int FUNC_5(pqisrc_softstate_t *VAR_8)
{
 int VAR_9 = 0;
 device_t VAR_10;

 FUNC_1("IN\n");

 VAR_10 = VAR_8->os_specific.pqi_dev;

 VAR_8->os_specific.pqi_irq_rid[0] = 0;
 VAR_8->os_specific.pqi_irq[0] = FUNC_2(VAR_10, VAR_5, &VAR_8->os_specific.pqi_irq_rid[0],

  VAR_3 | VAR_4);
 if (((void*)0) == VAR_8->os_specific.pqi_irq[0]) {
  FUNC_0("Failed to allocate resource for interrupt\n");
  return VAR_2;
 }
 if ((VAR_8->os_specific.msi_ctx = FUNC_4(VAR_8,sizeof(pqi_intr_ctx_t))) == ((void*)0)) {
  FUNC_0("Failed to allocate memory for msi_ctx\n");
  return VAR_2;
 }
 VAR_8->os_specific.msi_ctx[0].pqi_dev = VAR_10;
 VAR_8->os_specific.msi_ctx[0].oq_id = 1;

 VAR_9 = FUNC_3(VAR_10, VAR_8->os_specific.pqi_irq[0],
    VAR_1 | VAR_0, ((void*)0), VAR_7,

    &VAR_8->os_specific.msi_ctx[0],
    &VAR_8->os_specific.intrcookie[0]);
 if (VAR_9) {
  FUNC_0("Failed to setup legacy interrupt err = %d\n", VAR_9);
  return VAR_9;
 }
 VAR_8->os_specific.intr_registered[0] = VAR_6;

 FUNC_1("OUT error = %d\n", VAR_9);

 return VAR_9;
}
