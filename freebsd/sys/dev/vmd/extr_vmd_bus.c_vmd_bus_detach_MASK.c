
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devinfo {int resources; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct pci_devinfo* FUNC_3 (int ,int ,scalar_t__,int,int,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct pci_devinfo *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_1);

 VAR_3 = VAR_4 = VAR_5 = 0;
 VAR_2 = FUNC_3(FUNC_1(VAR_1), VAR_1,
     VAR_0 - FUNC_2(FUNC_1(VAR_1)),
     VAR_3, VAR_4, VAR_5);
 if (VAR_2 == ((void*)0)) {
  FUNC_4(&VAR_2->resources);
 }
 return (0);
}
