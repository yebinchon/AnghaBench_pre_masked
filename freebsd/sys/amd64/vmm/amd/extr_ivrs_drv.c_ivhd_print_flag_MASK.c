
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum IvrsType { ____Placeholder_IvrsType } IvrsType ;
typedef int device_t ;





 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, enum IvrsType VAR_1, uint8_t VAR_2)
{




 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_0, "Flag:%b\n", VAR_2,
   "\020"
   "\001HtTunEn"
   "\002PassPW"
   "\003ResPassPW"
   "\004Isoc"
   "\005IotlbSup"
   "\006Coherent"
   "\007PreFSup"
   "\008PPRSup");
  break;

 case 130:
 case 128:
  FUNC_0(VAR_0, "Flag:%b\n", VAR_2,
   "\020"
   "\001HtTunEn"
   "\002PassPW"
   "\003ResPassPW"
   "\004Isoc"
   "\005IotlbSup"
   "\006Coherent");
  break;

 default:
  FUNC_0(VAR_0, "Can't decode flag of ivhd type :0x%x\n",
   VAR_1);
  break;
 }
}
