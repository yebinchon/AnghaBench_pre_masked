
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_7__ {struct TYPE_7__* Next; int Device; } ;
struct TYPE_6__ {int Function; int Device; int Bus; int Segment; } ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PCI_ID ;
typedef TYPE_2__ ACPI_PCI_DEVICE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ACPI_STATUS
FUNC_4 (
    ACPI_PCI_ID *VAR_4,
    ACPI_PCI_DEVICE *VAR_5)
{
    ACPI_STATUS VAR_6 = VAR_1;
    ACPI_PCI_DEVICE *VAR_7;
    UINT16 VAR_8;
    BOOLEAN VAR_9 = VAR_3;


    FUNC_2 (VAR_2);


    FUNC_0 ((VAR_0,
        "Input PciId:  Seg %4.4X Bus %4.4X Dev %4.4X Func %4.4X\n",
        VAR_4->Segment, VAR_4->Bus, VAR_4->Device, VAR_4->Function));

    VAR_8 = VAR_4->Bus;
    VAR_7 = VAR_5;
    while (VAR_7)
    {
        VAR_6 = FUNC_3 (VAR_4, VAR_7->Device,
            &VAR_8, &VAR_9);
        if (FUNC_1 (VAR_6))
        {
            return (VAR_6);
        }

        VAR_7 = VAR_7->Next;
    }

    FUNC_0 ((VAR_0,
        "Output PciId: Seg %4.4X Bus %4.4X Dev %4.4X Func %4.4X "
        "Status %X BusNumber %X IsBridge %X\n",
        VAR_4->Segment, VAR_4->Bus, VAR_4->Device, VAR_4->Function,
        VAR_6, VAR_8, VAR_9));

    return (VAR_1);
}
