
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int num_hwfns; } ;
struct TYPE_9__ {scalar_t__* grcdump_size; scalar_t__ grcdump_taken; scalar_t__* grcdump_dwords; int ** grcdump; TYPE_1__ cdev; int pci_func; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_10__ {scalar_t__* grcdump_size; int ** grcdump; int * grcdump_dwords; int pci_func; } ;
typedef TYPE_3__ qlnx_grcdump_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,int ) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_1, qlnx_grcdump_t *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 uint32_t VAR_5 = 0;

 VAR_2->pci_func = VAR_1->pci_func;

 for (VAR_3 = 0; VAR_3 < VAR_1->cdev.num_hwfns; VAR_3++) {

  if ((VAR_1->grcdump[VAR_3] == ((void*)0)) || (VAR_2->grcdump[VAR_3] == ((void*)0)) ||
   (VAR_2->grcdump_size[VAR_3] < VAR_1->grcdump_size[VAR_3]))
   return (VAR_0);

  VAR_4 = FUNC_2(VAR_1, &VAR_5, VAR_3);

  if (VAR_4)
   break;

  VAR_2->grcdump_dwords[VAR_3] = VAR_5;

  FUNC_0(VAR_1,"grcdump_dwords[%d] = 0x%x\n", VAR_3, VAR_5);

  VAR_4 = FUNC_1(VAR_1->grcdump[VAR_3], VAR_2->grcdump[VAR_3],
    VAR_1->grcdump_size[VAR_3]);

  if (VAR_4)
   break;

  VAR_1->grcdump_dwords[VAR_3] = 0;
 }

 VAR_1->grcdump_taken = 0;

 return (VAR_4);
}
