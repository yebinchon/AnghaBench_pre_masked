
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{


 if (!FUNC_0(VAR_2 | VAR_3,
     VAR_1, VAR_4, 0, 0))
  return (VAR_5);

 if (!FUNC_3(VAR_6))
  return (VAR_5);

 if (FUNC_2(VAR_6, "pci-host-ecam-generic") ||
     FUNC_2(VAR_6, "cavium,thunder-pcie") ||
     FUNC_2(VAR_6, "cavium,pci-host-thunder-ecam")) {
  FUNC_1(VAR_6, "Cavium Integrated PCI/PCI-E Controller");
  return (VAR_0);
 }

 return (VAR_5);
}
