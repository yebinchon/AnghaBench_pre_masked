
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct ecore_eth_stats {int dummy; } ;
struct ecore_dev {int * hwfns; } ;
struct TYPE_17__ {scalar_t__ callout_init; } ;
struct TYPE_18__ {int num_rss; int qlnx_callout; TYPE_1__ flags; int hw_stats; int state; struct ecore_dev cdev; TYPE_13__* irq_vec; int num_tc; int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef int device_t ;
struct TYPE_16__ {int irq; int handle; int irq_rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int *,int ,TYPE_13__*,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_15(qlnx_host_t *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 struct ecore_dev *VAR_10;
        device_t VAR_11;

 VAR_10 = &VAR_7->cdev;
        VAR_11 = VAR_7->pci_dev;

 FUNC_1(VAR_7, "enter\n");

        VAR_9 = FUNC_6(VAR_7);
        if (VAR_9)
                goto qlnx_load_exit0;

        FUNC_9(VAR_7);

        VAR_9 = FUNC_7(VAR_7);
        if (VAR_9)
                goto qlnx_load_exit1;

        FUNC_1(VAR_7, "Allocated %d RSS queues on %d TC/s\n",
     VAR_7->num_rss, VAR_7->num_tc);

 for (VAR_8 = 0; VAR_8 < VAR_7->num_rss; VAR_8++) {

  if ((VAR_9 = FUNC_3(VAR_11, VAR_7->irq_vec[VAR_8].irq,
                        (VAR_1 | VAR_0),
                        ((void*)0), VAR_5, &VAR_7->irq_vec[VAR_8],
                        &VAR_7->irq_vec[VAR_8].handle))) {

                        FUNC_0(VAR_7, "could not setup interrupt\n");
                        goto qlnx_load_exit2;
  }

  FUNC_1(VAR_7, "rss_id = %d irq_rid %d 			 irq %p handle %p\n", VAR_8,

   VAR_7->irq_vec[VAR_8].irq_rid,
   VAR_7->irq_vec[VAR_8].irq, VAR_7->irq_vec[VAR_8].handle);

  FUNC_2(VAR_11, VAR_7->irq_vec[VAR_8].irq, (VAR_8 % VAR_4));
 }

        VAR_9 = FUNC_13(VAR_7);
        if (VAR_9)
                goto qlnx_load_exit2;

        FUNC_1(VAR_7, "Start VPORT, RXQ and TXQ succeeded\n");


        VAR_9 = FUNC_12(VAR_7);
        if (VAR_9)
                goto qlnx_load_exit2;


 FUNC_11(VAR_7, 1);

 if (FUNC_14(VAR_7) == 0)
  FUNC_10(&VAR_7->cdev.hwfns[0]);

        VAR_7->state = VAR_2;

 FUNC_4(&VAR_7->hw_stats, sizeof(struct ecore_eth_stats));

 if (VAR_7->flags.callout_init)
         FUNC_5(&VAR_7->qlnx_callout, VAR_3, VAR_6, VAR_7);

        goto qlnx_load_exit0;

qlnx_load_exit2:
        FUNC_8(VAR_7);

qlnx_load_exit1:
        VAR_7->num_rss = 0;

qlnx_load_exit0:
 FUNC_1(VAR_7, "exit [%d]\n", VAR_9);
        return VAR_9;
}
