
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_3__ {int Function; int Device; int Bus; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PCI_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int,int) ;

ACPI_STATUS
FUNC_2(ACPI_PCI_ID *VAR_3, UINT32 VAR_4, UINT64 *VAR_5,
    UINT32 VAR_6)
{





    if (VAR_6 == 64)
 return (VAR_2);

    if (!FUNC_0())
 return (VAR_0);

    *(UINT64 *)VAR_5 = FUNC_1(VAR_3->Bus, VAR_3->Device,
 VAR_3->Function, VAR_4, VAR_6 / 8);

    return (VAR_1);

}
