
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 char *VAR_4 = ((void*)0);

 if (FUNC_2(VAR_3) != VAR_2) {
  return VAR_1;
 }

 switch (FUNC_1(VAR_3)) {
 case 129:
  VAR_4 = "Emulex LightPulse FC Adapter";
  break;
 case 130:
  VAR_4 = "Emulex LightPulse FC Adapter";
  break;
 case 128:
  VAR_4 = "Emulex LightPulse 10GbE FCoE/NIC Adapter";
  break;
 default:
  return VAR_1;
 }

 FUNC_0(VAR_3, VAR_4);

 return VAR_0;
}
