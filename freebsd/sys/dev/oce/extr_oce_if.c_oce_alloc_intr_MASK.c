
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int irq_rr; int vector; int tag; int * intr_res; TYPE_1__* sc; int tq; int task_name; int task; } ;
struct TYPE_6__ {int flags; int dev; TYPE_2__* intrs; } ;
typedef TYPE_1__* POCE_SOFTC ;
typedef TYPE_2__* POCE_INTR_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,void (*) (void*,int),TYPE_2__*) ;
 int * FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int ,int ,int *,TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_10 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *,int,int ,char*,int ) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_8(POCE_SOFTC VAR_12, int VAR_13, void (*VAR_14) (void *VAR_15, int VAR_16))
{
 POCE_INTR_INFO VAR_17;
 int VAR_18 = 0, VAR_19;

 if (VAR_13 >= VAR_5)
  return (VAR_0);

 VAR_17 = &VAR_12->intrs[VAR_13];





 if (VAR_12->flags & VAR_4)
  VAR_19 = VAR_13 + 1;
 else
  VAR_19 = 0;
 VAR_17->intr_res = FUNC_1(VAR_12->dev,
           VAR_9,
           &VAR_19, VAR_7|VAR_8);
 VAR_17->irq_rr = VAR_19;
 if (VAR_17->intr_res == ((void*)0)) {
  FUNC_4(VAR_12->dev,
     "Could not allocate interrupt\n");
  VAR_18 = VAR_1;
  return VAR_18;
 }

 FUNC_0(&VAR_17->task, 0, VAR_14, VAR_17);
 VAR_17->vector = VAR_13;
 FUNC_5(VAR_17->task_name, "oce_task[%d]", VAR_17->vector);
 VAR_17->tq = FUNC_6(VAR_17->task_name,
   VAR_3,
   VAR_11,
   &VAR_17->tq);
 FUNC_7(&VAR_17->tq, 1, VAR_6, "%s taskq",
   FUNC_3(VAR_12->dev));

 VAR_17->sc = VAR_12;
 VAR_18 = FUNC_2(VAR_12->dev,
   VAR_17->intr_res,
   VAR_2,
   VAR_10, ((void*)0), VAR_17, &VAR_17->tag);
 return VAR_18;

}
