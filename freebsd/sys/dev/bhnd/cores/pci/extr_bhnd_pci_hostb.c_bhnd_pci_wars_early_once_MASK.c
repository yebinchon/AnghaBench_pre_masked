
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int inv; } ;
struct TYPE_3__ {int aspm_en; } ;
struct bhnd_pcihb_softc {int quirks; int pci_dev; int dev; TYPE_2__ sdr9_quirk_polarity; TYPE_1__ aspm_quirk_override; } ;
struct bhnd_board_info {int board_flags2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bhnd_pcihb_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct bhnd_board_info*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(struct bhnd_pcihb_softc *VAR_10)
{
 int VAR_11;


 if (VAR_10->quirks & VAR_8) {
  FUNC_5(VAR_10->pci_dev, VAR_9, 0x20 ,
      1);
 }


 if (VAR_10->quirks & VAR_4) {
  struct bhnd_board_info VAR_12;
  bool VAR_13;


  if ((VAR_11 = FUNC_2(VAR_10->dev, &VAR_12)))
   return (VAR_11);


  VAR_13 = 1;
  if (VAR_12.board_flags2 & VAR_0)
   VAR_13 = 0;



  if (VAR_10->quirks & VAR_5)
   VAR_13 = 0;

  VAR_10->aspm_quirk_override.aspm_en = VAR_13;
 }




 if (VAR_10->quirks & VAR_7) {
  uint32_t VAR_14;
  bool VAR_15;

  VAR_14 = FUNC_0(VAR_10, VAR_3);
  VAR_15 = ((VAR_14 & VAR_2) != 0);
  VAR_10->sdr9_quirk_polarity.inv = VAR_15;
 }


 if (FUNC_1(VAR_10->dev) == VAR_1) {
  int VAR_16;

  VAR_16 = 128;
  if (VAR_10->quirks & VAR_6)
   VAR_16 = 512;

  if (FUNC_4(VAR_10->pci_dev, VAR_16) == 0)
   FUNC_3("set mrrs on non-PCIe device");
 }

 return (0);
}
