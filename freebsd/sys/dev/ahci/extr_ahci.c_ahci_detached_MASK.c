
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int ch_mtx; int ** ch; } ;
struct ahci_channel {size_t unit; int mtx; } ;
typedef int device_t ;


 struct ahci_controller* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(device_t VAR_0, struct ahci_channel *VAR_1)
{
 struct ahci_controller *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->ch_mtx);
 FUNC_1(&VAR_1->mtx);
 VAR_2->ch[VAR_1->unit] = ((void*)0);
 FUNC_2(&VAR_1->mtx);
 FUNC_2(&VAR_2->ch_mtx);
}
