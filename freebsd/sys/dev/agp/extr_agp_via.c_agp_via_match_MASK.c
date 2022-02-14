
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const char*
FUNC_4(device_t VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_0
     || FUNC_3(VAR_2) != VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_2) == 0)
  return ((void*)0);

 switch (FUNC_2(VAR_2)) {
 case 0x01981106:
  return ("VIA 8763 (P4X600) host to PCI bridge");
 case 0x02591106:
  return ("VIA PM800/PN800/PM880/PN880 host to PCI bridge");
 case 0x02691106:
  return ("VIA KT880 host to PCI bridge");
 case 0x02961106:
  return ("VIA 3296 (P4M800) host to PCI bridge");
 case 0x03051106:
  return ("VIA 82C8363 (Apollo KT133x/KM133) host to PCI bridge");
 case 0x03141106:
  return ("VIA 3314 (P4M800CE) host to PCI bridge");
 case 0x03241106:
  return ("VIA VT3324 (CX700) host to PCI bridge");
 case 0x03271106:
  return ("VIA 3327 (P4M890) host to PCI bridge");
 case 0x03641106:
  return ("VIA 3364 (P4M900) host to PCI bridge");
 case 0x03911106:
  return ("VIA 8371 (Apollo KX133) host to PCI bridge");
 case 0x05011106:
  return ("VIA 8501 (Apollo MVP4) host to PCI bridge");
 case 0x05971106:
  return ("VIA 82C597 (Apollo VP3) host to PCI bridge");
 case 0x05981106:
  return ("VIA 82C598 (Apollo MVP3) host to PCI bridge");
 case 0x06011106:
  return ("VIA 8601 (Apollo ProMedia/PLE133Ta) host to PCI bridge");
 case 0x06051106:
  return ("VIA 82C694X (Apollo Pro 133A) host to PCI bridge");
 case 0x06911106:
  return ("VIA 82C691 (Apollo Pro) host to PCI bridge");
 case 0x30911106:
  return ("VIA 8633 (Pro 266) host to PCI bridge");
 case 0x30991106:
  return ("VIA 8367 (KT266/KY266x/KT333) host to PCI bridge");
 case 0x31011106:
  return ("VIA 8653 (Pro266T) host to PCI bridge");
 case 0x31121106:
  return ("VIA 8361 (KLE133) host to PCI bridge");
 case 0x31161106:
  return ("VIA XM266 (PM266/KM266) host to PCI bridge");
 case 0x31231106:
  return ("VIA 862x (CLE266) host to PCI bridge");
 case 0x31281106:
  return ("VIA 8753 (P4X266) host to PCI bridge");
 case 0x31481106:
  return ("VIA 8703 (P4M266x/P4N266) host to PCI bridge");
 case 0x31561106:
  return ("VIA XN266 (Apollo Pro266) host to PCI bridge");
 case 0x31681106:
  return ("VIA 8754 (PT800) host to PCI bridge");
 case 0x31891106:
  return ("VIA 8377 (Apollo KT400/KT400A/KT600) host to PCI bridge");
 case 0x32051106:
  return ("VIA 8235/8237 (Apollo KM400/KM400A) host to PCI bridge");
 case 0x32081106:
  return ("VIA 8783 (PT890) host to PCI bridge");
 case 0x32581106:
  return ("VIA PT880 host to PCI bridge");
 case 0xb1981106:
  return ("VIA VT83xx/VT87xx/KTxxx/Px8xx host to PCI bridge");
 }

 return ((void*)0);
}
