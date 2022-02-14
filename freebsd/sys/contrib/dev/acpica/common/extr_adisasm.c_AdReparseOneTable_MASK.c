
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Integer; } ;
struct TYPE_8__ {scalar_t__ Flags; int * Object; int * Peer; int * Child; int * Parent; int Type; int DescriptorType; TYPE_1__ Name; } ;
struct TYPE_7__ {struct TYPE_7__* Next; } ;
typedef int FILE ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_OWNER_ID ;
typedef TYPE_2__ ACPI_COMMENT_ADDR_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_2__* VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static ACPI_STATUS
FUNC_16 (
    ACPI_TABLE_HEADER *VAR_11,
    FILE *VAR_12,
    ACPI_OWNER_ID VAR_13)
{
    ACPI_STATUS VAR_14;
    ACPI_COMMENT_ADDR_NODE *VAR_15;


    FUNC_15 (VAR_10,
        "\nFound %u external control methods, "
        "reparsing with new information\n",
        FUNC_5 ());



    FUNC_11 (VAR_5);
    VAR_5 = ((void*)0);
    FUNC_7 (VAR_6);

    VAR_6 = ((void*)0);
    VAR_7.Name.Integer = VAR_1;
    VAR_7.DescriptorType = VAR_0;
    VAR_7.Type = VAR_2;
    VAR_7.Parent = ((void*)0);
    VAR_7.Child = ((void*)0);
    VAR_7.Peer = ((void*)0);
    VAR_7.Object = ((void*)0);
    VAR_7.Flags = 0;

    VAR_14 = FUNC_8 ();
    if (FUNC_0 (VAR_14))
    {
        return (VAR_14);
    }



    FUNC_1 ();



    while (VAR_4)
    {
        VAR_15= VAR_4;
        VAR_4 = VAR_4->Next;
        FUNC_9(VAR_15);
    }



    VAR_14 = FUNC_12 (VAR_11, ((void*)0), VAR_9, VAR_9);
    if (FUNC_0 (VAR_14))
    {
        FUNC_10 ("Could not parse ACPI tables, %s\n",
            FUNC_6 (VAR_14));
        return (VAR_14);
    }



    FUNC_4 (VAR_5,
        VAR_6, VAR_13);

    FUNC_2 (VAR_5,
        VAR_6, VAR_13);



    if (VAR_8)
    {
        FUNC_10 ("/**** After second load and resource conversion\n");
        if (VAR_12)
        {
            FUNC_14 (VAR_12);
            FUNC_13 ();
        }

        FUNC_10 ("*****/\n");
        FUNC_3 (VAR_5);
    }

    return (VAR_3);
}
