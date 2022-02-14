
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3, enum pci_id_type VAR_4, uintptr_t *VAR_5)
{
 uint8_t VAR_6, VAR_7, VAR_8;

 if (VAR_4 != VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = FUNC_2(VAR_3);

 *VAR_5 = (FUNC_0(VAR_6, VAR_7, VAR_8));
 return (0);
}
