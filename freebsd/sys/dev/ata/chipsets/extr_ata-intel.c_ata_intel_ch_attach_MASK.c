
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct ata_pci_controller {TYPE_3__* chip; int setmode; scalar_t__ r_res2; } ;
struct TYPE_5__ {int status; int * pm_write; int pm_read; } ;
struct ata_channel {int flags; int unit; TYPE_2__ hw; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ max_dma; int cfg1; scalar_t__ chipid; } ;
struct TYPE_4__ {int offset; scalar_t__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int* FUNC_0 (struct ata_pci_controller*,struct ata_channel*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ata_channel*,int,int ,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_24)
{
 struct ata_pci_controller *VAR_25;
 struct ata_channel *VAR_26;
 u_char *VAR_27;
 u_int VAR_28;


 if (FUNC_2(VAR_24))
  return (VAR_12);

 VAR_25 = FUNC_5(FUNC_4(VAR_24));
 VAR_26 = FUNC_5(VAR_24);


 if (VAR_25->r_res2) {
  VAR_26->r_io[VAR_2].res = VAR_25->r_res2;
  VAR_26->r_io[VAR_2].offset = 0x00;
  VAR_26->r_io[VAR_3].res = VAR_25->r_res2;
  VAR_26->r_io[VAR_3].offset = 0x04;
 }

 VAR_26->flags |= VAR_0;
 if (VAR_25->chip->max_dma >= VAR_7) {
  VAR_27 = FUNC_0(VAR_25, VAR_26);
  VAR_28 = FUNC_6(FUNC_4(VAR_24), 0x90, 1);
  if (VAR_25->chip->cfg1 & VAR_14) {
   VAR_28 &= 0x07;
   if ((VAR_28 & 0x04) == 0) {
    VAR_26->flags |= VAR_9;
    VAR_26->flags |= VAR_5;
    VAR_27[0] = (VAR_28 & 0x01) ^ VAR_26->unit;
    VAR_27[1] = 0;
   } else if ((VAR_28 & 0x02) == 0 && VAR_26->unit == 0) {
    VAR_26->flags |= VAR_9;
    VAR_27[0] = (VAR_28 & 0x01) ? 1 : 0;
    VAR_27[1] = (VAR_28 & 0x01) ? 0 : 1;
   } else if ((VAR_28 & 0x02) != 0 && VAR_26->unit == 1) {
    VAR_26->flags |= VAR_9;
    VAR_27[0] = (VAR_28 & 0x01) ? 1 : 0;
    VAR_27[1] = (VAR_28 & 0x01) ? 0 : 1;
   }
  } else if (VAR_25->chip->cfg1 & VAR_13) {
   VAR_26->flags |= VAR_9;
   VAR_26->flags |= VAR_5;
   VAR_27[0] = (VAR_26->unit == 0) ? 0 : 1;
   VAR_27[1] = 0;
  } else {
   VAR_28 &= 0x03;
   if (VAR_28 == 0x00) {
    VAR_26->flags |= VAR_9;
    VAR_27[0] = (VAR_26->unit == 0) ? 0 : 1;
    VAR_27[1] = (VAR_26->unit == 0) ? 2 : 3;
   } else if (VAR_28 == 0x02 && VAR_26->unit == 0) {
    VAR_26->flags |= VAR_9;
    VAR_27[0] = 0;
    VAR_27[1] = 2;
   } else if (VAR_28 == 0x01 && VAR_26->unit == 1) {
    VAR_26->flags |= VAR_9;
    VAR_27[0] = 1;
    VAR_27[1] = 3;
   }
  }
  if (VAR_26->flags & VAR_9) {
   if ((VAR_25->chip->cfg1 & VAR_14)) {
    VAR_26->hw.pm_read = VAR_19;
    VAR_26->hw.pm_write = VAR_20;
   } else if (VAR_25->r_res2) {
    if ((VAR_25->chip->cfg1 & VAR_15)) {
     VAR_26->hw.pm_read = VAR_17;
     VAR_26->hw.pm_write = VAR_18;
    } else if (FUNC_1(VAR_24)) {
     VAR_26->hw.pm_read = VAR_21;
     VAR_26->hw.pm_write = VAR_22;
    }
   }
   if (VAR_26->hw.pm_write != ((void*)0)) {
    VAR_26->flags |= VAR_6;
    VAR_26->hw.status = VAR_23;
    FUNC_3(VAR_26, 0,
        VAR_10, 0xffffffff);
    if ((VAR_26->flags & VAR_5) == 0) {
     FUNC_3(VAR_26, 1,
         VAR_10, 0xffffffff);
    }
   }
  } else
   VAR_25->setmode = VAR_16;
  if (VAR_25->chip->max_dma >= VAR_8)
   VAR_26->flags |= VAR_11;
 } else if (VAR_25->chip->chipid != VAR_4)
  VAR_26->flags |= VAR_1;
 return (0);
}
