
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
typedef int uint16_t ;
typedef int phandle_t ;
typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,uintptr_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,uintptr_t*) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, enum pci_id_type VAR_3,
    uintptr_t *VAR_4)
{
 phandle_t VAR_5;
 int VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;

 if (VAR_3 != VAR_0)
  return (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4));

 VAR_5 = FUNC_0(VAR_1);
 VAR_8 = FUNC_2(VAR_2);

 VAR_6 = FUNC_1(VAR_5, VAR_8, ((void*)0), &VAR_7);
 if (VAR_6 != 0)
  return (VAR_6);
 *VAR_4 = VAR_7;

 return (0);
}
