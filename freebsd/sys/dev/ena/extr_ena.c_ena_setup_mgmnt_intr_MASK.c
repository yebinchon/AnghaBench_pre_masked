
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_adapter {TYPE_1__* msix_entries; TYPE_2__* irq_tbl; int pdev; } ;
struct TYPE_4__ {int vector; struct ena_adapter* data; int * handler; int name; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct ena_adapter *VAR_2)
{

 FUNC_1(VAR_2->irq_tbl[VAR_1].name,
     VAR_0, "ena-mgmnt@pci:%s",
     FUNC_0(VAR_2->pdev));




 VAR_2->irq_tbl[VAR_1].handler = ((void*)0);
 VAR_2->irq_tbl[VAR_1].data = VAR_2;
 VAR_2->irq_tbl[VAR_1].vector =
     VAR_2->msix_entries[VAR_1].vector;
}
