
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* identifyDevice; int lba48Address; } ;
typedef int MV_U16 ;
typedef TYPE_1__ MV_SATA_CHANNEL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(MV_SATA_CHANNEL *VAR_6)
{
 MV_U16 *VAR_7 = VAR_6->identifyDevice;


 if (! (VAR_7[VAR_0] & 0x200))
 {
  FUNC_0(("IAL Error in IDENTIFY info: LBA not supported\n"));
  return -1;
 }
 else
 {
  FUNC_0(("%25s - %s\n", "Capabilities", "LBA supported"));
 }

 if (! (VAR_7[VAR_0] & 0x100))
 {
  FUNC_0(("IAL Error in IDENTIFY info: DMA not supported\n"));
  return -1;
 }
 else
 {
  FUNC_0(("%25s - %s\n", "Capabilities", "DMA supported"));
 }

 if ((VAR_7[VAR_3] & 2) == 0)
 {
  FUNC_0(("IAL Error in IDENTIFY info: not able to find PIO mode\n"));
  return -1;
 }
 FUNC_0(("%25s - 0x%02x\n", "PIO modes supported",
     VAR_7[VAR_1] & 0xff));


 if ((VAR_7[VAR_3] & 4) == 0)
 {
  FUNC_0(("IAL Error in IDENTIFY info: not able to find UDMA mode\n"));
  return -1;
 }


 if ((VAR_7[VAR_2] & 0x400))
 {
  FUNC_0(("%25s - %s\n", "LBA48 addressing", "supported"));
  VAR_6->lba48Address = VAR_5;
 }
 else
 {
  FUNC_0(("%25s - %s\n", "LBA48 addressing", "Not supported"));
  VAR_6->lba48Address = VAR_4;
 }
 return 0;
}
