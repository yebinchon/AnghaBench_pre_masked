
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; int channels; void* setmode; void* reset; void* ch_detach; void* ch_attach; } ;
typedef int * device_t ;
struct TYPE_2__ {int cfg2; scalar_t__ cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 struct ata_pci_controller* FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
    struct ata_pci_controller *VAR_7 = FUNC_3(VAR_6);
    device_t VAR_8;

    if (FUNC_0(VAR_6, VAR_1))
 return VAR_0;


    if (FUNC_5(VAR_6, 0xdf, 1) & 0x40) {

 VAR_7->ch_attach = VAR_3;
 VAR_7->ch_detach = VAR_5;
 VAR_7->reset = VAR_2;
 VAR_7->setmode = VAR_4;
 VAR_7->channels = VAR_7->chip->cfg2;
    }
    else {

 FUNC_6(VAR_6, 0x40, 0x80c0a131, 4);
 FUNC_6(VAR_6, 0x80, 0x01200000, 4);

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
 VAR_7->channels = VAR_7->chip->cfg2;
    }
    return 0;
}
