
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,uintptr_t*) ;
 int FUNC_1 (int ,int ,int,uintptr_t*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, enum pci_id_type VAR_3,
    uintptr_t *VAR_4)
{

 if (VAR_3 == VAR_0)
  return (FUNC_0(VAR_1, VAR_2, VAR_4));
 else
  return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4));
}
