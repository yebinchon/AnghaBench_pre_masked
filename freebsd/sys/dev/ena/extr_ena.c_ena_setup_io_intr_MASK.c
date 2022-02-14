
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ena_adapter {int num_queues; TYPE_3__* irq_tbl; TYPE_2__* que; TYPE_1__* msix_entries; int pdev; } ;
struct TYPE_6__ {int cpu; int vector; TYPE_2__* data; int handler; int name; } ;
struct TYPE_5__ {int cpu; } ;
struct TYPE_4__ {int vector; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 char* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int ,int ,char*,char*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ena_adapter *VAR_5)
{
 static int VAR_6 = -1;
 int VAR_7;

 if (VAR_5->msix_entries == ((void*)0))
  return (VAR_0);

 for (int VAR_8 = 0; VAR_8 < VAR_5->num_queues; VAR_8++) {
  VAR_7 = FUNC_2(VAR_8);

  FUNC_5(VAR_5->irq_tbl[VAR_7].name, VAR_3,
      "%s-TxRx-%d", FUNC_3(VAR_5->pdev), VAR_8);
  VAR_5->irq_tbl[VAR_7].handler = VAR_4;
  VAR_5->irq_tbl[VAR_7].data = &VAR_5->que[VAR_8];
  VAR_5->irq_tbl[VAR_7].vector =
      VAR_5->msix_entries[VAR_7].vector;
  FUNC_4(VAR_1 | VAR_2, "ena_setup_io_intr vector: %d\n",
      VAR_5->msix_entries[VAR_7].vector);





  if (FUNC_6(VAR_6 < 0))
   VAR_6 = FUNC_0();
  VAR_5->que[VAR_8].cpu = VAR_5->irq_tbl[VAR_7].cpu =
      VAR_6;
  VAR_6 = FUNC_1(VAR_6);
 }

 return (0);
}
