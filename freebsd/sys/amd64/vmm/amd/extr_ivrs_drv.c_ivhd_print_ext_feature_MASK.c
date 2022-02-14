
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,char*,int,char*,int ,int ,int ,...) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, uint64_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1;
 FUNC_1(VAR_0, "Extended features[31:0]:%b "
  "HATS = 0x%x GATS = 0x%x "
  "GLXSup = 0x%x SmiFSup = 0x%x SmiFRC = 0x%x "
  "GAMSup = 0x%x DualPortLogSup = 0x%x DualEventLogSup = 0x%x\n",
  (int)VAR_2,
  "\020"
  "\001PreFSup"
  "\002PPRSup"
  "\003<b2>"
  "\004NXSup"
  "\005GTSup"
  "\006<b5>"
  "\007IASup"
  "\008GASup"
  "\009HESup"
  "\010PCSup",
  FUNC_0(VAR_2, 11, 10),
  FUNC_0(VAR_2, 13, 12),
  FUNC_0(VAR_2, 15, 14),
  FUNC_0(VAR_2, 17, 16),
  FUNC_0(VAR_2, 20, 18),
  FUNC_0(VAR_2, 23, 21),
  FUNC_0(VAR_2, 25, 24),
  FUNC_0(VAR_2, 29, 28));

 VAR_3 = VAR_1 >> 32;
 FUNC_1(VAR_0, "Extended features[62:32]:%b "
  "Max PASID: 0x%x DevTblSegSup = 0x%x "
  "MarcSup = 0x%x\n",
  (int)(VAR_3),
  "\020"
  "\006USSup"
  "\009PprOvrflwEarlySup"
  "\010PPRAutoRspSup"
  "\013BlKStopMrkSup"
  "\014PerfOptSup"
  "\015MsiCapMmioSup"
  "\017GIOSup"
  "\018HASup"
  "\019EPHSup"
  "\020AttrFWSup"
  "\021HDSup"
  "\023InvIotlbSup",
      FUNC_0(VAR_3, 5, 0),
      FUNC_0(VAR_3, 8, 7),
      FUNC_0(VAR_3, 11, 10));
}
