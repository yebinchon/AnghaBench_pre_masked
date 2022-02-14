
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pci_devinfo {int resources; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct bhnd_pci_devinfo* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct bhnd_pci_devinfo*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, device_t VAR_2)
{
 struct bhnd_pci_devinfo *VAR_3;

 if (FUNC_1(VAR_2) != VAR_1)
  return;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_4(&VAR_3->resources);
  FUNC_3(VAR_3, VAR_0);
 }

 FUNC_2(VAR_2, ((void*)0));
}
