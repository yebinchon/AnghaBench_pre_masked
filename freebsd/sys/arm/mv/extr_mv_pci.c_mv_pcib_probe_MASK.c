
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (!FUNC_2(VAR_3, "pci"))
  return (VAR_1);

 if (!(FUNC_4(VAR_2, "mrvl,pcie") ||
     FUNC_4(VAR_2, "mrvl,pci") ||
     FUNC_5(
     FUNC_0(VAR_3), "marvell,armada-370-pcie")))
  return (VAR_1);

 if (!FUNC_6(VAR_2))
  return (VAR_1);

 FUNC_1(VAR_2, "Marvell Integrated PCI/PCI-E Controller");
 return (VAR_0);
}
