
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_flags; scalar_t__ bge_pcixcap; int bge_dev; int bge_chiprev; int bge_asicrev; int bge_chipid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_9)
{
 uint32_t VAR_10, VAR_11;

 FUNC_1(VAR_9->bge_dev,
     "CHIP ID 0x%08x; ASIC REV 0x%02x; CHIP REV 0x%02x; ",
     VAR_9->bge_chipid, VAR_9->bge_asicrev, VAR_9->bge_chiprev);
 if (VAR_9->bge_flags & VAR_0)
  FUNC_3("PCI-E\n");
 else if (VAR_9->bge_flags & VAR_1) {
  FUNC_3("PCI-X ");
  VAR_10 = FUNC_0(VAR_9, VAR_4) & VAR_3;
  if (VAR_10 == VAR_2)
   VAR_11 = 133;
  else {
   VAR_11 = FUNC_0(VAR_9, VAR_7) & 0x1F;
   switch (VAR_11) {
   case 0:
    VAR_11 = 33;
    break;
   case 2:
    VAR_11 = 50;
    break;
   case 4:
    VAR_11 = 66;
    break;
   case 6:
    VAR_11 = 100;
    break;
   case 7:
    VAR_11 = 133;
    break;
   }
  }
  FUNC_3("%u MHz\n", VAR_11);
 } else {
  if (VAR_9->bge_pcixcap != 0)
   FUNC_3("PCI on PCI-X ");
  else
   FUNC_3("PCI ");
  VAR_10 = FUNC_2(VAR_9->bge_dev, VAR_8, 4);
  if (VAR_10 & VAR_6)
   VAR_11 = 66;
  else
   VAR_11 = 33;
  if (VAR_10 & VAR_5)
   FUNC_3("%u MHz; 32bit\n", VAR_11);
  else
   FUNC_3("%u MHz; 64bit\n", VAR_11);
 }
}
