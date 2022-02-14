
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_dev {int sb_start; int num_cnq; TYPE_2__* cnq_array; TYPE_1__* ha; } ;
struct TYPE_5__ {int pci_dev; int num_rss; } ;
typedef TYPE_1__ qlnx_host_t ;
struct TYPE_6__ {int irq_rid; int irq_handle; int * irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int ,TYPE_2__*,int *) ;
 int VAR_5 ;
 int FUNC_4 (struct qlnxr_dev*) ;

__attribute__((used)) static int
FUNC_5(struct qlnxr_dev *VAR_6)
{
 int VAR_7;
 int VAR_8;
 qlnx_host_t *VAR_9;

 VAR_9 = VAR_6->ha;

 VAR_7 = VAR_6->sb_start + 2;

 FUNC_1(VAR_9, "enter start_irq_rid = %d num_rss = %d\n",
  VAR_7, VAR_6->ha->num_rss);


        for (VAR_8 = 0; VAR_8 < VAR_6->num_cnq; VAR_8++) {

  VAR_6->cnq_array[VAR_8].irq_rid = VAR_7 + VAR_8;

  VAR_6->cnq_array[VAR_8].irq = FUNC_2(VAR_6->ha->pci_dev,
      VAR_4,
      &VAR_6->cnq_array[VAR_8].irq_rid,
      (VAR_2 | VAR_3));

  if (VAR_6->cnq_array[VAR_8].irq == ((void*)0)) {

   FUNC_0(VAR_9,
    "bus_alloc_resource_any failed irq_rid = %d\n",
    VAR_6->cnq_array[VAR_8].irq_rid);

   goto qlnxr_setup_irqs_err;
  }

                if (FUNC_3(VAR_6->ha->pci_dev,
                                VAR_6->cnq_array[VAR_8].irq,
                                (VAR_1 | VAR_0),
                                ((void*)0), VAR_5, &VAR_6->cnq_array[VAR_8],
    &VAR_6->cnq_array[VAR_8].irq_handle)) {

   FUNC_0(VAR_9, "bus_setup_intr failed\n");
   goto qlnxr_setup_irqs_err;
                }
  FUNC_1(VAR_9, "irq_rid = %d irq = %p irq_handle = %p\n",
   VAR_6->cnq_array[VAR_8].irq_rid, VAR_6->cnq_array[VAR_8].irq,
   VAR_6->cnq_array[VAR_8].irq_handle);
 }

 FUNC_1(VAR_9, "exit\n");
 return (0);

qlnxr_setup_irqs_err:
 FUNC_4(VAR_6);

 FUNC_1(VAR_9, "exit -1\n");
 return (-1);
}
