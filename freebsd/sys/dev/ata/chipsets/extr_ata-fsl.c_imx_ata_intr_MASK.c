
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* interrupt; int r_res1; } ;
struct TYPE_2__ {int argument; int (* function ) (int ) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct ata_pci_controller *VAR_1 = VAR_0;

 FUNC_1(VAR_1->r_res1, 0x28, FUNC_0(VAR_1->r_res1, 0x28));
 VAR_1->interrupt[0].function(VAR_1->interrupt[0].argument);
}
