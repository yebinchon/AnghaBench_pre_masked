
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,uintptr_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,uintptr_t*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, device_t VAR_3, enum pci_id_type VAR_4,
    uintptr_t *VAR_5)
{
 phandle_t VAR_6;
 int VAR_7;

 if (VAR_4 != VAR_0)
  return (FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_6 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_6, "msi-map"))
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5));

 VAR_7 = FUNC_4(VAR_3);
 *VAR_5 = (FUNC_3(VAR_3) << VAR_1) | VAR_7;

 return (0);
}
