
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* pqi_irq_rid; void** intr_registered; int * intrcookie; TYPE_4__* msi_ctx; int ** pqi_irq; void* pqi_dev; } ;
struct TYPE_8__ {int intr_count; TYPE_1__ os_specific; scalar_t__ share_opq_and_eventq; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef int pqi_intr_ctx_t ;
typedef void* device_t ;
struct TYPE_9__ {int oq_id; void* pqi_dev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* FUNC_2 (void*,int ,int*,int) ;
 int FUNC_3 (void*,int *,int,int *,int ,TYPE_4__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int) ;
 int VAR_9 ;

int FUNC_5(pqisrc_softstate_t *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 device_t VAR_13;
 VAR_13 = VAR_10->os_specific.pqi_dev;
 int VAR_14 = VAR_10->intr_count;

 FUNC_1("IN\n");

 VAR_10->os_specific.msi_ctx = FUNC_4(VAR_10, sizeof(pqi_intr_ctx_t) * VAR_14);

 if (VAR_10->share_opq_and_eventq) {
  VAR_10->os_specific.pqi_irq_rid[VAR_12] = VAR_12+1;
  VAR_10->os_specific.pqi_irq[VAR_12] = FUNC_2(VAR_13, VAR_5,

      &VAR_10->os_specific.pqi_irq_rid[VAR_12],
      VAR_4 | VAR_3);
  if (((void*)0) == VAR_10->os_specific.pqi_irq[VAR_12]) {
   FUNC_0("Failed to allocate 				event interrupt resource\n");

   return VAR_2;
  }

  VAR_10->os_specific.msi_ctx[VAR_12].pqi_dev = VAR_13;
  VAR_10->os_specific.msi_ctx[VAR_12].oq_id = VAR_12+1;

  VAR_11 = FUNC_3(VAR_13,VAR_10->os_specific.pqi_irq[VAR_12],
     VAR_1 | VAR_0, ((void*)0),

     VAR_9,
     &VAR_10->os_specific.msi_ctx[VAR_12],
     &VAR_10->os_specific.intrcookie[VAR_12]);

  if (VAR_11) {
   FUNC_0("Failed to setup interrupt for events r=%d\n",
    VAR_11);
   return VAR_11;
  }
  VAR_10->os_specific.intr_registered[VAR_12] = VAR_6;
 }
 else {

  VAR_10->os_specific.pqi_irq_rid[VAR_12] = VAR_12+1;
  VAR_10->os_specific.pqi_irq[VAR_12] = FUNC_2(VAR_13, VAR_5,

      &VAR_10->os_specific.pqi_irq_rid[VAR_12],
      VAR_4 | VAR_3);
  if (((void*)0) == VAR_10->os_specific.pqi_irq[VAR_12]) {
   FUNC_0("ERR : Failed to allocate 				event interrupt resource\n");

   return VAR_2;
  }


  VAR_10->os_specific.msi_ctx[VAR_12].pqi_dev = VAR_13;
  VAR_10->os_specific.msi_ctx[VAR_12].oq_id = VAR_12;


  VAR_11 = FUNC_3(VAR_13,VAR_10->os_specific.pqi_irq[VAR_12],
     VAR_1 | VAR_0, ((void*)0),

     VAR_8,
     &VAR_10->os_specific.msi_ctx[VAR_12],
     &VAR_10->os_specific.intrcookie[VAR_12]);
  if (VAR_11) {
   FUNC_0("Failed to setup interrupt for events err=%d\n",
    VAR_11);
   return VAR_11;
  }
  VAR_10->os_specific.intr_registered[VAR_12] = VAR_6;

  for (VAR_12 = 1; VAR_12 < VAR_14; ++VAR_12) {
   VAR_10->os_specific.pqi_irq_rid[VAR_12] = VAR_12+1;
   VAR_10->os_specific.pqi_irq[VAR_12] = FUNC_2(VAR_13,

     VAR_5,
     &VAR_10->os_specific.pqi_irq_rid[VAR_12],
     VAR_4 | VAR_3);
   if (((void*)0) == VAR_10->os_specific.pqi_irq[VAR_12]) {
    FUNC_0("Failed to allocate 					msi/x interrupt resource\n");

    return VAR_2;
   }
   VAR_10->os_specific.msi_ctx[VAR_12].pqi_dev = VAR_13;
   VAR_10->os_specific.msi_ctx[VAR_12].oq_id = VAR_12;
   VAR_11 = FUNC_3(VAR_13,
     VAR_10->os_specific.pqi_irq[VAR_12],
     VAR_1 | VAR_0, ((void*)0),

     VAR_7,
     &VAR_10->os_specific.msi_ctx[VAR_12],
     &VAR_10->os_specific.intrcookie[VAR_12]);
   if (VAR_11) {
    FUNC_0("Failed to setup 					msi/x interrupt error = %d\n", VAR_11);

    return VAR_11;
   }
   VAR_10->os_specific.intr_registered[VAR_12] = VAR_6;
  }
 }

 FUNC_1("OUT error = %d\n", VAR_11);

 return VAR_11;
}
