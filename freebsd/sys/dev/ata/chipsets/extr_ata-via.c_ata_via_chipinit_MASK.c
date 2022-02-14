
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; int setmode; TYPE_1__* chip; int getrev; int reset; int ch_detach; int ch_attach; int r_rid2; int r_type2; int r_res2; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; scalar_t__ max_dma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_21)
{
    struct ata_pci_controller *VAR_22 = FUNC_4(VAR_21);

    if (FUNC_1(VAR_21, VAR_9))
 return VAR_2;


    if (VAR_22->chip->cfg2 & VAR_8) {
 VAR_22->ch_attach = VAR_17;
 VAR_22->setmode = VAR_20;
 VAR_22->getrev = VAR_18;
 VAR_22->reset = VAR_19;
 return 0;
    }

    if (VAR_22->chip->max_dma >= VAR_0) {
 VAR_22->r_type2 = VAR_4;
 VAR_22->r_rid2 = FUNC_0(5);
 if ((VAR_22->r_res2 = FUNC_3(VAR_21, VAR_22->r_type2,
         &VAR_22->r_rid2, VAR_3))) {
     VAR_22->ch_attach = VAR_12;
     VAR_22->ch_detach = VAR_13;
     VAR_22->reset = VAR_16;
 }
 if (VAR_22->chip->cfg2 & VAR_5) {
     VAR_22->channels = 3;
     VAR_22->setmode = VAR_14;
 } else
     VAR_22->setmode = VAR_11;
 VAR_22->getrev = VAR_10;
 return 0;
    }


    if (VAR_22->chip->cfg2 & VAR_7)
 FUNC_6(VAR_21, 0x50, 0x030b030b, 4);


    if (VAR_22->chip->cfg2 & VAR_6)
 FUNC_2(VAR_21);


    FUNC_6(VAR_21, 0x43,
       (FUNC_5(VAR_21, 0x43, 1) & 0x90) | 0x2a, 1);


    FUNC_6(VAR_21, 0x44, FUNC_5(VAR_21, 0x44, 1) | 0x08, 1);


    FUNC_6(VAR_21, 0x46,
       (FUNC_5(VAR_21, 0x46, 1) & 0x0c) | 0xf0, 1);


    FUNC_6(VAR_21, 0x60, VAR_1, 2);
    FUNC_6(VAR_21, 0x68, VAR_1, 2);

    VAR_22->setmode = VAR_15;
    return 0;
}
