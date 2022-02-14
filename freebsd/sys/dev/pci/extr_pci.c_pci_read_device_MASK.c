
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_devinfo {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct pci_devinfo* FUNC_1 (int ,int ,int,int,int,int,int,int) ;

struct pci_devinfo *
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{

 uint16_t VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_7, VAR_1, 2);
 VAR_9 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_7, VAR_0, 2);
 if (VAR_8 != 0xffff)
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));

 return (((void*)0));
}
