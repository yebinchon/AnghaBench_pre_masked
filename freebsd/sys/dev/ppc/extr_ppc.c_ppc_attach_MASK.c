
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {size_t ppc_model; size_t ppc_avm; size_t ppc_mode; size_t ppc_epp; int ppbus; int ppc_lock; int intr_cookie; scalar_t__ res_irq; int ppc_rthr; int ppc_wthr; scalar_t__ ppc_fifo; } ;
typedef int device_t ;


 struct ppc_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int ,scalar_t__,int,int *,int ,struct ppc_data*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int * VAR_3 ;
 char** VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

int
FUNC_9(device_t VAR_8)
{
 struct ppc_data *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;

 FUNC_8(&VAR_9->ppc_lock, FUNC_4(VAR_8), "ppc", VAR_2);

 FUNC_5(VAR_8, "%s chipset (%s) in %s mode%s\n",
        VAR_5[VAR_9->ppc_model], VAR_3[VAR_9->ppc_avm],
        VAR_6[VAR_9->ppc_mode], (FUNC_1(VAR_9->ppc_mode)) ?
        VAR_4[VAR_9->ppc_epp] : "");

 if (VAR_9->ppc_fifo)
  FUNC_5(VAR_8, "FIFO with %d/%d/%d bytes threshold\n",
         VAR_9->ppc_fifo, VAR_9->ppc_wthr, VAR_9->ppc_rthr);

 if (VAR_9->res_irq) {

  VAR_10 = FUNC_2(VAR_8, VAR_9->res_irq, VAR_1 |
      VAR_0, ((void*)0), VAR_7, VAR_9, &VAR_9->intr_cookie);
  if (VAR_10) {
   FUNC_5(VAR_8,
       "failed to register interrupt handler: %d\n",
       VAR_10);
   FUNC_7(&VAR_9->ppc_lock);
   return (VAR_10);
  }
 }


 VAR_9->ppbus = FUNC_3(VAR_8, "ppbus", -1);




 FUNC_6(VAR_9->ppbus);

 return (0);
}
