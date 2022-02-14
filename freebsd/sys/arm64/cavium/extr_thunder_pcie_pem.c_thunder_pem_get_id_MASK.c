
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,uintptr_t*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4, enum pci_id_type VAR_5,
    uintptr_t *VAR_6)
{
 int VAR_7;
 int VAR_8;

 if (VAR_5 != VAR_1)
  return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6));

 VAR_7 = FUNC_1(VAR_4);


 VAR_8 = FUNC_0(VAR_4);






 if (VAR_8 < 3)
  *VAR_6 = (0x1 << VAR_2) | VAR_7;
 else if (VAR_8 < 6)
  *VAR_6 = (0x3 << VAR_2) | VAR_7;
 else if (VAR_8 < 9)
  *VAR_6 = (0x9 << VAR_2) | VAR_7;
 else if (VAR_8 < 12)
  *VAR_6 = (0xB << VAR_2) | VAR_7;
 else
  return (VAR_0);

 return (0);
}
