
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int (* mfi_read_fw_status ) (struct mfi_softc*) ;int mfi_flags; int mfi_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;

 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct mfi_softc*) ;
 int FUNC_4 (struct mfi_softc*) ;

int
FUNC_5(struct mfi_softc *VAR_12)
{
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = 0;

 VAR_17 = VAR_12->mfi_read_fw_status(VAR_12);
 VAR_13 = VAR_17 & VAR_6;
 while (VAR_13 != VAR_7) {
  if (VAR_11)
   FUNC_2(VAR_12->mfi_dev, "Waiting for firmware to "
   "become ready\n");
  VAR_14 = VAR_13;
  switch (VAR_13) {
  case 134:
   FUNC_2(VAR_12->mfi_dev, "Firmware fault\n");
   return (VAR_0);
  case 128:
   if (VAR_12->mfi_flags & VAR_1 || VAR_12->mfi_flags & VAR_2)
       FUNC_1(VAR_12, VAR_10, VAR_3);
   else
       FUNC_1(VAR_12, VAR_8, VAR_3);
   VAR_15 = VAR_9;
   break;
  case 130:
   if (VAR_12->mfi_flags & VAR_1 || VAR_12->mfi_flags & VAR_2)
       FUNC_1(VAR_12, VAR_10, 7);
   else
       FUNC_1(VAR_12, VAR_8, VAR_5);
   VAR_15 = VAR_9;
   break;
  case 129:
  case 137:
   VAR_15 = VAR_9;
   break;
  case 131:
   VAR_15 = VAR_9;
   break;
  case 132:
  case 133:
   VAR_15 = VAR_9;
   break;
  case 135:
   VAR_15 = VAR_9;
   VAR_18 = VAR_17;
   break;
  case 136:
   if (VAR_12->mfi_flags & VAR_1 || VAR_12->mfi_flags & VAR_2)
       FUNC_1(VAR_12, VAR_10, VAR_4);
   else
       FUNC_1(VAR_12, VAR_8, VAR_4);
   VAR_15 = VAR_9;
   break;
  default:
   FUNC_2(VAR_12->mfi_dev, "Unknown firmware state %#x\n",
       VAR_13);
   return (VAR_0);
  }
  for (VAR_16 = 0; VAR_16 < (VAR_15 * 10); VAR_16++) {
   VAR_17 = VAR_12->mfi_read_fw_status(VAR_12);
   VAR_13 = VAR_17 & VAR_6;
   if (VAR_13 == VAR_14)
    FUNC_0(100000);
   else
    break;
  }
  if (VAR_13 == 135) {

   if (VAR_18 != VAR_17) {
    continue;
   }
  }
  if (VAR_13 == VAR_14) {
   FUNC_2(VAR_12->mfi_dev, "Firmware stuck in state "
       "%#x\n", VAR_13);
   return (VAR_0);
  }
 }
 return (0);
}
