
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cmd; int * size; int pci_func; } ;
typedef TYPE_2__ qlnx_trace_t ;
struct TYPE_7__ {int num_hwfns; } ;
struct TYPE_9__ {TYPE_1__ cdev; int pci_func; } ;
typedef TYPE_3__ qlnx_host_t ;


 int FUNC_0 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void
FUNC_1(qlnx_host_t *VAR_0, qlnx_trace_t *VAR_1)
{
 int VAR_2;

 VAR_1->pci_func = VAR_0->pci_func;

 for (VAR_2 = 0; VAR_2 < VAR_0->cdev.num_hwfns; VAR_2++) {
  VAR_1->size[VAR_2] = FUNC_0(VAR_0, VAR_2, VAR_1->cmd);
 }

 return;
}
