
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int r_rid2; void* setmode; int getrev; int r_res2; TYPE_1__* chip; int reset; int ch_detach; int ch_attach; int r_type2; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; scalar_t__ max_dma; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int*,int ) ;
 struct ata_pci_controller* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_16)
{
    struct ata_pci_controller *VAR_17 = FUNC_7(VAR_16);

    if (FUNC_5(VAR_16, VAR_8))
 return VAR_1;

    if (VAR_17->chip->cfg1 & VAR_3) {
 VAR_17->ch_attach = VAR_10;
 VAR_17->setmode = VAR_15;
    } else if (VAR_17->chip->max_dma >= VAR_0) {
 if (FUNC_8(VAR_16, FUNC_4(5), 1) & 1)
     VAR_17->r_type2 = VAR_6;
 else
     VAR_17->r_type2 = VAR_7;
 VAR_17->r_rid2 = FUNC_4(5);
 if ((VAR_17->r_res2 = FUNC_6(VAR_16, VAR_17->r_type2,
         &VAR_17->r_rid2, VAR_5))) {
     int VAR_18 = VAR_17->chip->cfg1 & VAR_2 ? 0x0440 : 0x0010;

     VAR_17->ch_attach = VAR_9;
     VAR_17->ch_detach = VAR_13;
     VAR_17->reset = VAR_11;


     FUNC_9(VAR_16, 0x50, FUNC_8(VAR_16, 0x50, 1) | 0x04,1);

     FUNC_3(10);
     if (VAR_17->chip->cfg1 & VAR_4) {

  FUNC_2(VAR_17->r_res2, VAR_18, 0x00ff00ff);


  FUNC_2(VAR_17->r_res2, VAR_18 + 4, 0x000d000d);


  FUNC_2(VAR_17->r_res2, 0x0400,
    FUNC_0(VAR_17->r_res2, 0x0400) & 0xfffffff9);
     }
     else {

  FUNC_1(VAR_17->r_res2, VAR_18, 0xff);


  FUNC_1(VAR_17->r_res2, VAR_18 + 1, 0xdd);
     }
 }
 VAR_17->setmode = VAR_15;
 VAR_17->getrev = VAR_14;
    }
    else {

 FUNC_9(VAR_16, 0x51, FUNC_8(VAR_16, 0x51, 1) & 0x0f, 1);
 VAR_17->setmode = VAR_12;
    }
    return 0;
}
