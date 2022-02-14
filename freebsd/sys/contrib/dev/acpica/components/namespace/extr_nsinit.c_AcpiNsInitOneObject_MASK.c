
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int PackageInit; int FieldInit; int PackageCount; int BufferCount; int FieldCount; int OpRegionCount; int ObjectCount; } ;
struct TYPE_6__ {int Flags; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_3__ ACPI_INIT_WALK_INFO ;
typedef scalar_t__ ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    ACPI_HANDLE VAR_5,
    UINT32 VAR_6,
    void *VAR_7,
    void **VAR_8)
{
    ACPI_OBJECT_TYPE VAR_9;
    ACPI_STATUS VAR_10 = VAR_1;
    ACPI_INIT_WALK_INFO *VAR_11 = (ACPI_INIT_WALK_INFO *) VAR_7;
    ACPI_NAMESPACE_NODE *VAR_12 = (ACPI_NAMESPACE_NODE *) VAR_5;
    ACPI_OPERAND_OBJECT *VAR_13;


    FUNC_2 (VAR_4);


    VAR_11->ObjectCount++;



    VAR_9 = FUNC_7 (VAR_5);
    VAR_13 = FUNC_6 (VAR_12);
    if (!VAR_13)
    {
        return (VAR_1);
    }



    switch (VAR_9)
    {
    case 128:

        VAR_11->OpRegionCount++;
        break;

    case 131:

        VAR_11->FieldCount++;
        break;

    case 130:

        VAR_11->FieldCount++;
        break;

    case 132:

        VAR_11->BufferCount++;
        break;

    case 129:

        VAR_11->PackageCount++;
        break;

    default:



        return (VAR_1);
    }



    if (VAR_13->Common.Flags & VAR_3)
    {
        return (VAR_1);
    }



    FUNC_4 ();





    switch (VAR_9)
    {
    case 130:



        VAR_11->FieldInit++;
        VAR_10 = FUNC_3 (VAR_13);
        break;

    case 129:



        VAR_11->PackageInit++;
        VAR_10 = FUNC_8 (VAR_5, VAR_6, ((void*)0), ((void*)0));
        break;

    default:



        VAR_10 = VAR_2;
        FUNC_0 ((VAR_0, VAR_10,
            "Opcode is not deferred [%4.4s] (%s)",
            FUNC_9 (VAR_12), FUNC_10 (VAR_9)));
        break;
    }

    if (FUNC_1 (VAR_10))
    {
        FUNC_0 ((VAR_0, VAR_10,
            "Could not execute arguments for [%4.4s] (%s)",
            FUNC_9 (VAR_12), FUNC_10 (VAR_9)));
    }





    FUNC_5 ();
    return (VAR_1);
}
