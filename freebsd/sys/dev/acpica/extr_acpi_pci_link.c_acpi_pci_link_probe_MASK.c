
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int device_t ;
typedef int descr ;


 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_1 ;
 int FUNC_9 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 char VAR_3[28], VAR_4[12];
 int VAR_5;





 if (FUNC_2("pci_link"))
     return (VAR_0);
 VAR_5 = FUNC_0(FUNC_5(VAR_2), VAR_2, VAR_1, ((void*)0));
 if (VAR_5 > 0)
   return (VAR_5);

 if (FUNC_1(FUNC_4(FUNC_3(VAR_2), VAR_4,
     sizeof(VAR_4)))) {
  FUNC_9(VAR_3, sizeof(VAR_3), "ACPI PCI Link %s", VAR_4);
  FUNC_8(VAR_2, VAR_3);
 } else
  FUNC_7(VAR_2, "ACPI PCI Link");
 FUNC_6(VAR_2);
 return (VAR_5);
}
