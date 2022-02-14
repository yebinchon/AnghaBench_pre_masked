
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct TYPE_4__ {int * pm_read; } ;
struct ata_channel {int flags; int devices; TYPE_2__ hw; } ;
typedef int device_t ;
struct TYPE_3__ {int cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int* FUNC_1 (struct ata_pci_controller*,struct ata_channel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 void FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_9)
{
 device_t VAR_10 = FUNC_6(VAR_9);
 struct ata_pci_controller *VAR_11 = FUNC_7(VAR_10);
 struct ata_channel *VAR_12 = FUNC_7(VAR_9);
 int VAR_13, VAR_14, VAR_15, VAR_16;
 u_char *VAR_17;
 uint16_t VAR_18;


 if ((VAR_12->flags & VAR_4) == 0)
  return (FUNC_3(VAR_9));


 VAR_17 = FUNC_1(VAR_11, VAR_12);
 VAR_13 = 1 << VAR_17[0];
 if ((VAR_12->flags & VAR_3) == 0)
  VAR_13 |= (1 << VAR_17[1]);
 FUNC_10(VAR_10, 0x92,
     FUNC_9(VAR_10, 0x92, 2) & ~VAR_13, 2);
 FUNC_2(100);
 FUNC_10(VAR_10, 0x92,
     FUNC_9(VAR_10, 0x92, 2) | VAR_13, 2);


 if (VAR_11->chip->cfg1 & (VAR_6 | VAR_7))
  VAR_14 = 8;
 else
  VAR_14 = 4;
 for (VAR_15 = 0; VAR_15 < 100 ; VAR_15++) {
  VAR_18 = (FUNC_9(VAR_10, 0x92, 2) >> VAR_14) & VAR_13;
  if ((VAR_18 == VAR_13) && (FUNC_0(VAR_12, VAR_5) != 0xff))
   break;
  FUNC_5(10000);
 }

 if (VAR_8)
  FUNC_8(VAR_9, "SATA reset: ports status=0x%02x\n", VAR_18);

 if (VAR_12->hw.pm_read != ((void*)0)) {
  VAR_16 = FUNC_4(VAR_9, 0, 2) ? VAR_1 : 0;
  if ((VAR_12->flags & VAR_3) == 0)
   VAR_16 |= FUNC_4(VAR_9, 1, 2) ?
       VAR_2 : 0;
 } else {
  VAR_16 = (VAR_18 & (1 << VAR_17[0])) ? VAR_1 : 0;
  if ((VAR_12->flags & VAR_3) == 0)
   VAR_16 |= (VAR_18 & (1 << VAR_17[1])) ?
       VAR_2 : 0;
 }
 if (VAR_16) {
  FUNC_3(VAR_9);

  VAR_12->devices &= (VAR_16 | (VAR_16 * VAR_0));
 } else
  VAR_12->devices = 0;
}
