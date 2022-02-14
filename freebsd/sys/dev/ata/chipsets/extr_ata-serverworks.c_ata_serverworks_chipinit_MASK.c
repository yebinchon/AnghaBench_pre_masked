
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int setmode; TYPE_1__* chip; int reset; int getrev; int ch_detach; int ch_attach; int channels; int r_rid2; int r_type2; int r_res2; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg1; int cfg2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int **,int*) ;
 int FUNC_4 (int ) ;
 struct ata_pci_controller* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_15)
{
    struct ata_pci_controller *VAR_16 = FUNC_5(VAR_15);

    if (FUNC_1(VAR_15, VAR_8))
 return VAR_1;

    if (VAR_16->chip->cfg1 == VAR_6) {
 VAR_16->r_type2 = VAR_7;
 VAR_16->r_rid2 = FUNC_0(5);
 if (!(VAR_16->r_res2 = FUNC_2(VAR_15, VAR_16->r_type2,
          &VAR_16->r_rid2, VAR_3)))
     return VAR_1;

 VAR_16->channels = VAR_16->chip->cfg2;
 VAR_16->ch_attach = VAR_11;
 VAR_16->ch_detach = VAR_12;
 VAR_16->setmode = VAR_10;
 VAR_16->getrev = VAR_9;
 VAR_16->reset = VAR_13;
 return 0;
    }
    else if (VAR_16->chip->cfg1 == VAR_5) {
 device_t *VAR_17;
 int VAR_18, VAR_19;


 if (!FUNC_3(FUNC_4(VAR_15), &VAR_17,&VAR_18)){
     for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  if (FUNC_7(VAR_17[VAR_19]) == VAR_0) {
      FUNC_9(VAR_17[VAR_19], 0x64,
         (FUNC_8(VAR_17[VAR_19], 0x64, 4) &
          ~0x00002000) | 0x00004000, 4);
      break;
  }
     }
     FUNC_6(VAR_17, VAR_2);
 }
    }
    else {
 FUNC_9(VAR_15, 0x5a, (FUNC_8(VAR_15, 0x5a, 1) & ~0x40) |
     ((VAR_16->chip->cfg1 == VAR_4) ? 0x03 : 0x02), 1);
    }
    VAR_16->setmode = VAR_14;
    return 0;
}
