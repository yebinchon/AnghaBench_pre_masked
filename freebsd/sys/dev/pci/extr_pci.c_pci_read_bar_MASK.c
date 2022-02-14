
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_devinfo {int cfg; } ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

void
FUNC_6(device_t VAR_3, int VAR_4, pci_addr_t *VAR_5, pci_addr_t *VAR_6,
    int *VAR_7)
{
 struct pci_devinfo *VAR_8;
 pci_addr_t VAR_9, VAR_10;
 int VAR_11;
 uint16_t VAR_12;






 VAR_8 = FUNC_2(VAR_3);
 if (FUNC_0(&VAR_8->cfg, VAR_4)) {
  VAR_9 = FUNC_4(VAR_3, VAR_4, 4);
  FUNC_5(VAR_3, VAR_4, 0xfffffffe, 4);
  VAR_10 = FUNC_4(VAR_3, VAR_4, 4);
  FUNC_5(VAR_3, VAR_4, VAR_9, 4);
  *VAR_5 = VAR_9;
  *VAR_6 = VAR_10;
  if (VAR_7 != ((void*)0))
   *VAR_7 = 0;
  return;
 }

 VAR_9 = FUNC_4(VAR_3, VAR_4, 4);
 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 == 64)
  VAR_9 |= (pci_addr_t)FUNC_4(VAR_3, VAR_4 + 4, 4) << 32;






 VAR_12 = FUNC_4(VAR_3, VAR_2, 2);
 FUNC_5(VAR_3, VAR_2,
     VAR_12 & ~(FUNC_1(VAR_9) ? VAR_0 : VAR_1), 2);
 VAR_10 = 0;
 FUNC_5(VAR_3, VAR_4, 0xffffffff, 4);
 if (VAR_11 == 64) {
  FUNC_5(VAR_3, VAR_4 + 4, 0xffffffff, 4);
  VAR_10 |= (pci_addr_t)FUNC_4(VAR_3, VAR_4 + 4, 4) << 32;
 }
 VAR_10 |= FUNC_4(VAR_3, VAR_4, 4);






 FUNC_5(VAR_3, VAR_4, VAR_9, 4);
 if (VAR_11 == 64)
  FUNC_5(VAR_3, VAR_4 + 4, VAR_9 >> 32, 4);
 FUNC_5(VAR_3, VAR_2, VAR_12, 2);

 *VAR_5 = VAR_9;
 *VAR_6 = VAR_10;
 if (VAR_7 != ((void*)0))
  *VAR_7 = (VAR_11 == 64);
}
