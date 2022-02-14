
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum IvrsType { ____Placeholder_IvrsType } IvrsType ;
typedef int device_t ;





 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, enum IvrsType VAR_1, uint32_t VAR_2)
{
 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_0, "Features(type:0x%x) HATS = %d GATS = %d"
   " MsiNumPPR = %d PNBanks= %d PNCounters= %d\n",
   VAR_1,
   FUNC_0(VAR_2, 31, 30),
   FUNC_0(VAR_2, 29, 28),
   FUNC_0(VAR_2, 27, 23),
   FUNC_0(VAR_2, 22, 17),
   FUNC_0(VAR_2, 16, 13));
  FUNC_1(VAR_0, "max PASID = %d GLXSup = %d Feature:%b\n",
   FUNC_0(VAR_2, 12, 8),
   FUNC_0(VAR_2, 4, 3),
   VAR_2,
   "\020"
   "\002NXSup"
   "\003GTSup"
   "\004<b4>"
   "\005IASup"
   "\006GASup"
   "\007HESup");
  break;


 case 130:
 case 128:
  FUNC_1(VAR_0, "Features(type:0x%x) MsiNumPPR = %d"
   " PNBanks= %d PNCounters= %d\n",
   VAR_1,
   FUNC_0(VAR_2, 27, 23),
   FUNC_0(VAR_2, 22, 17),
   FUNC_0(VAR_2, 16, 13));
  break;

 default:
  FUNC_1(VAR_0, "Can't decode ivhd type :0x%x\n", VAR_1);
 }
}
