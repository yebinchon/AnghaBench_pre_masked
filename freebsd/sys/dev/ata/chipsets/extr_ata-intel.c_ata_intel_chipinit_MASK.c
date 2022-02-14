
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; void* setmode; int getrev; TYPE_1__* chip; int * r_res2; void* r_rid2; void* r_type2; int reset; void* ch_detach; void* ch_attach; void* chipset_data; } ;
struct ata_intel_data {int lock; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ chipid; scalar_t__ max_dma; int cfg2; int cfg1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,void*,void**,int ) ;
 struct ata_pci_controller* FUNC_5 (int ) ;
 struct ata_intel_data* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_29)
{
    struct ata_pci_controller *VAR_30 = FUNC_5(VAR_29);
    struct ata_intel_data *VAR_31;

    if (FUNC_3(VAR_29, VAR_16))
 return VAR_5;

    VAR_31 = FUNC_6(sizeof(struct ata_intel_data), VAR_9, VAR_10 | VAR_11);
    FUNC_7(&VAR_31->lock, "Intel SATA lock", ((void*)0), VAR_8);
    VAR_30->chipset_data = (void *)VAR_31;


    if (VAR_30->chip->chipid == VAR_1) {
 VAR_30->setmode = VAR_22;
    }


    else if (VAR_30->chip->chipid == VAR_0) {
 if (FUNC_8(VAR_29) != VAR_12) {
     VAR_30->r_type2 = VAR_15;
     VAR_30->r_rid2 = FUNC_2(0);
     if (!(VAR_30->r_res2 = FUNC_4(VAR_29, VAR_30->r_type2,
       &VAR_30->r_rid2,
       VAR_13)))
  return VAR_5;
     VAR_30->channels = 4;
     VAR_30->ch_attach = VAR_17;
     VAR_30->ch_detach = VAR_18;
     VAR_30->reset = VAR_19;
 }
 VAR_30->setmode = VAR_28;
 VAR_30->getrev = VAR_27;
    }

    else if (VAR_30->chip->chipid == VAR_3) {
 VAR_30->channels = 1;
 VAR_30->ch_attach = VAR_20;
 VAR_30->ch_detach = VAR_26;
 VAR_30->setmode = VAR_25;
    }

    else if (VAR_30->chip->max_dma < VAR_4) {
 VAR_30->channels = VAR_30->chip->cfg2;
 VAR_30->ch_attach = VAR_20;
 VAR_30->ch_detach = VAR_26;
 VAR_30->setmode = VAR_21;
    }


    else {

 FUNC_11(VAR_29, 0x92, FUNC_10(VAR_29, 0x92, 2) | 0x0f, 2);

 VAR_30->ch_attach = VAR_20;
 VAR_30->ch_detach = VAR_26;
 VAR_30->reset = VAR_23;


 if ((VAR_30->chip->cfg1 & VAR_7)) {
  VAR_30->r_type2 = VAR_15;
  VAR_30->r_rid2 = FUNC_2(5);
  VAR_30->r_res2 = FUNC_4(VAR_29, VAR_30->r_type2,
      &VAR_30->r_rid2, VAR_13);
  if (VAR_30->r_res2 != ((void*)0)) {

   FUNC_11(VAR_29, 0x94,
       FUNC_10(VAR_29, 0x94, 4) | (1 << 9), 4);

   FUNC_1(VAR_30->r_res2, 0x0C,
       FUNC_0(VAR_30->r_res2, 0x0C) | 0xf);
  }

 } else if (VAR_30->chip->chipid != VAR_2 ||
     FUNC_9(VAR_29) != 0x106b) {
  VAR_30->r_type2 = VAR_14;
  VAR_30->r_rid2 = FUNC_2(5);
  VAR_30->r_res2 = FUNC_4(VAR_29, VAR_30->r_type2,
      &VAR_30->r_rid2, VAR_13);
 }
 if (VAR_30->r_res2 != ((void*)0) ||
     (VAR_30->chip->cfg1 & VAR_6))
  VAR_30->getrev = VAR_24;
 VAR_30->setmode = VAR_28;
    }
    return 0;
}
