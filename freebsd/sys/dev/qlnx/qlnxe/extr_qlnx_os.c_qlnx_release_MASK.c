
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct qlnx_fastpath {int dummy; } ;
struct TYPE_19__ {scalar_t__ lock_init; scalar_t__ hw_init; scalar_t__ slowpath_start; scalar_t__ callout_init; } ;
struct TYPE_17__ {int num_hwfns; } ;
struct TYPE_20__ {int num_rss; scalar_t__ msix_bar; int msix_rid; scalar_t__ pci_dbells; int dbells_rid; scalar_t__ dbells_size; scalar_t__ pci_reg; int reg_rid; int hw_lock; TYPE_2__ flags; scalar_t__ msix_count; scalar_t__* sp_irq; int * sp_irq_rid; scalar_t__* sp_handle; TYPE_15__ cdev; TYPE_1__* irq_vec; struct qlnx_fastpath* fp_array; int * ifp; int qlnx_callout; int ** grcdump; int ** idle_chk; int pci_dev; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef int device_t ;
struct TYPE_18__ {scalar_t__ irq; int irq_rid; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_15__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,struct qlnx_fastpath*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_19(qlnx_host_t *VAR_4)
{
        device_t VAR_5;
        int VAR_6;

        VAR_5 = VAR_4->pci_dev;

 FUNC_0(VAR_4, "enter\n");

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->idle_chk[VAR_6] != ((void*)0)) {
   FUNC_6(VAR_4->idle_chk[VAR_6], VAR_0);
   VAR_4->idle_chk[VAR_6] = ((void*)0);
  }

  if (VAR_4->grcdump[VAR_6] != ((void*)0)) {
   FUNC_6(VAR_4->grcdump[VAR_6], VAR_0);
   VAR_4->grcdump[VAR_6] = ((void*)0);
  }
 }

        if (VAR_4->flags.callout_init)
                FUNC_3(&VAR_4->qlnx_callout);

 if (VAR_4->flags.slowpath_start) {
  FUNC_17(VAR_4);
 }

        if (VAR_4->flags.hw_init)
  FUNC_4(&VAR_4->cdev);

        FUNC_9(VAR_4);

        if (VAR_4->ifp != ((void*)0))
                FUNC_5(VAR_4->ifp);

 FUNC_16(VAR_4);

 FUNC_14(VAR_4);

 FUNC_13(VAR_4);

 if (FUNC_18(VAR_4) != 0) {
  FUNC_10(VAR_4);
 }

        for (VAR_6 = 0; VAR_6 < VAR_4->num_rss; VAR_6++) {
  struct qlnx_fastpath *VAR_7 = &VAR_4->fp_array[VAR_6];

                if (VAR_4->irq_vec[VAR_6].handle) {
                        (void)FUNC_2(VAR_5, VAR_4->irq_vec[VAR_6].irq,
                                        VAR_4->irq_vec[VAR_6].handle);
                }

                if (VAR_4->irq_vec[VAR_6].irq) {
                        (void)FUNC_1(VAR_5, VAR_2,
                                VAR_4->irq_vec[VAR_6].irq_rid,
                                VAR_4->irq_vec[VAR_6].irq);
                }

  FUNC_15(VAR_4, VAR_7);
        }
 FUNC_11(VAR_4);

  for (VAR_6 = 0; VAR_6 < VAR_4->cdev.num_hwfns; VAR_6++) {
         if (VAR_4->sp_handle[VAR_6])
                 (void)FUNC_2(VAR_5, VAR_4->sp_irq[VAR_6],
    VAR_4->sp_handle[VAR_6]);

         if (VAR_4->sp_irq[VAR_6])
   (void) FUNC_1(VAR_5, VAR_2,
    VAR_4->sp_irq_rid[VAR_6], VAR_4->sp_irq[VAR_6]);
 }

 FUNC_12(VAR_4);

        if (VAR_4->msix_count)
                FUNC_8(VAR_5);

        if (VAR_4->flags.lock_init) {
                FUNC_7(&VAR_4->hw_lock);
        }

        if (VAR_4->pci_reg)
                (void) FUNC_1(VAR_5, VAR_3, VAR_4->reg_rid,
                                VAR_4->pci_reg);

        if (VAR_4->dbells_size && VAR_4->pci_dbells)
                (void) FUNC_1(VAR_5, VAR_3, VAR_4->dbells_rid,
                                VAR_4->pci_dbells);

        if (VAR_4->msix_bar)
                (void) FUNC_1(VAR_5, VAR_3, VAR_4->msix_rid,
                                VAR_4->msix_bar);

 FUNC_0(VAR_4, "exit\n");
 return;
}
