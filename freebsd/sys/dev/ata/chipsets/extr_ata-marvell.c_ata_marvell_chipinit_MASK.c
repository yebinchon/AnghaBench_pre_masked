
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; int setmode; int reset; int ch_detach; int ch_attach; TYPE_1__* chip; } ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 struct ata_pci_controller* FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct ata_pci_controller *VAR_7 = FUNC_3(VAR_6);
 device_t VAR_8;

 if (FUNC_0(VAR_6, VAR_1))
  return VAR_0;

 if (VAR_7->chip->cfg1) {
      VAR_8 = FUNC_2(VAR_6, ((void*)0), -1);
  if (VAR_8 != ((void*)0)) {
      FUNC_4(VAR_8, (void *)(intptr_t)-1);
      FUNC_1(VAR_6);
  }
 }
        VAR_7->ch_attach = VAR_3;
 VAR_7->ch_detach = VAR_5;
 VAR_7->reset = VAR_2;
        VAR_7->setmode = VAR_4;
        VAR_7->channels = 1;
        return (0);
}
