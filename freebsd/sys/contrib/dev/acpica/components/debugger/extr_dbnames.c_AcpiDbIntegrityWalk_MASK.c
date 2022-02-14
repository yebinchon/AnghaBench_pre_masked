
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_12__ {int Objects; int Nodes; } ;
struct TYPE_10__ {int Ascii; } ;
struct TYPE_11__ {scalar_t__ Type; TYPE_1__ Name; scalar_t__ Object; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;
typedef TYPE_4__ ACPI_INTEGRITY_INFO ;
typedef scalar_t__ ACPI_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,TYPE_2__*,...) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_HANDLE VAR_8,
    UINT32 VAR_9,
    void *VAR_10,
    void **VAR_11)
{
    ACPI_INTEGRITY_INFO *VAR_12 = (ACPI_INTEGRITY_INFO *) VAR_10;
    ACPI_NAMESPACE_NODE *VAR_13 = (ACPI_NAMESPACE_NODE *) VAR_8;
    ACPI_OPERAND_OBJECT *VAR_14;
    BOOLEAN VAR_15 = VAR_7;


    VAR_12->Nodes++;



    while (VAR_15)
    {
        if (FUNC_0 (VAR_13) != VAR_0)
        {
            FUNC_2 (
                "Invalid Descriptor Type for Node %p [%s] - "
                "is %2.2X should be %2.2X\n",
                VAR_13, FUNC_3 (VAR_13),
                FUNC_0 (VAR_13), VAR_0);
            return (VAR_5);
        }

        if ((VAR_13->Type == VAR_2) ||
            (VAR_13->Type == VAR_4))
        {
            VAR_13 = (ACPI_NAMESPACE_NODE *) VAR_13->Object;
        }
        else
        {
            VAR_15 = VAR_6;
        }
    }

    if (VAR_13->Type > VAR_3)
    {
        FUNC_2 ("Invalid Object Type for Node %p, Type = %X\n",
            VAR_13, VAR_13->Type);
        return (VAR_5);
    }

    if (!FUNC_4 (VAR_13->Name.Ascii))
    {
        FUNC_2 ("Invalid AcpiName for Node %p\n", VAR_13);
        return (VAR_5);
    }

    VAR_14 = FUNC_1 (VAR_13);
    if (VAR_14)
    {
        VAR_12->Objects++;
        if (FUNC_0 (VAR_14) != VAR_1)
        {
            FUNC_2 ("Invalid Descriptor Type for Object %p [%s]\n",
                VAR_14, FUNC_3 (VAR_14));
        }
    }

    return (VAR_5);
}
