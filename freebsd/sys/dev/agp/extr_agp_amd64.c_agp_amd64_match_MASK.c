
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static const char*
FUNC_5(device_t VAR_2)
{
 if (FUNC_2(VAR_2) != VAR_0 ||
     FUNC_4(VAR_2) != VAR_1 ||
     FUNC_1(VAR_2) == 0)
  return (((void*)0));

 switch (FUNC_3(VAR_2)) {
 case 0x74541022:
  return ("AMD 8151 AGP graphics tunnel");
 case 0x07551039:
  return ("SiS 755 host to AGP bridge");
 case 0x07601039:
  return ("SiS 760 host to AGP bridge");
 case 0x168910b9:
  return ("ULi M1689 AGP Controller");
 case 0x00d110de:
  if (FUNC_0(0x00d2))
   return (((void*)0));
  return ("NVIDIA nForce3 AGP Controller");
 case 0x00e110de:
  if (FUNC_0(0x00e2))
   return (((void*)0));
  return ("NVIDIA nForce3-250 AGP Controller");
 case 0x02041106:
  return ("VIA 8380 host to PCI bridge");
 case 0x02381106:
  return ("VIA 3238 host to PCI bridge");
 case 0x02821106:
  return ("VIA K8T800Pro host to PCI bridge");
 case 0x31881106:
  return ("VIA 8385 host to PCI bridge");
 }

 return (((void*)0));
}
