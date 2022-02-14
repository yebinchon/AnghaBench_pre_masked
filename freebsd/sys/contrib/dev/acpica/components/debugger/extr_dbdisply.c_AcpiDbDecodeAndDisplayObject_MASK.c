
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int Length; char* Pointer; } ;
typedef int Buffer ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef void ACPI_OPERAND_OBJECT ;
typedef void ACPI_NAMESPACE_NODE ;
typedef TYPE_1__ ACPI_BUFFER ;





 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int const FUNC_1 (void*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (void*,int ,TYPE_1__*) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (void*,int) ;
 int FUNC_11 (void*,int,int,int ) ;
 int FUNC_12 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_13 (
    char *VAR_6,
    char *VAR_7)
{
    void *VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;
    UINT32 VAR_11 = VAR_2;
    char VAR_12[80];
    ACPI_BUFFER VAR_13;
    ACPI_STATUS VAR_14;
    UINT32 VAR_15;


    if (!VAR_6)
    {
        return;
    }



    if (VAR_7)
    {
        FUNC_12 (VAR_7);
        if (VAR_7[0] == 'W')
        {
            VAR_11 = VAR_5;
        }
        else if (VAR_7[0] == 'D')
        {
            VAR_11 = VAR_3;
        }
        else if (VAR_7[0] == 'Q')
        {
            VAR_11 = VAR_4;
        }
    }

    VAR_13.Length = sizeof (VAR_12);
    VAR_13.Pointer = VAR_12;



    if ((VAR_6[0] >= 0x30) && (VAR_6[0] <= 0x39))
    {
        VAR_8 = FUNC_3 (VAR_6);
        if (!FUNC_10 (VAR_8, 16))
        {
            FUNC_9 (
                "Address %p is invalid in this address space\n",
                VAR_8);
            return;
        }



        switch (FUNC_1 (VAR_8))
        {
        case 130:



            if (!FUNC_10 (VAR_8, sizeof (ACPI_NAMESPACE_NODE)))
            {
                FUNC_9 (
                    "Cannot read entire Named object at address %p\n",
                    VAR_8);
                return;
            }

            VAR_9 = VAR_8;
            goto DumpNode;

        case 129:



            if (!FUNC_10 (VAR_8, sizeof (ACPI_OPERAND_OBJECT)))
            {
                FUNC_9 (
                    "Cannot read entire ACPI object at address %p\n",
                    VAR_8);
                return;
            }

            FUNC_11 (VAR_8, sizeof (ACPI_OPERAND_OBJECT),
                VAR_11, VAR_1);
            FUNC_6 (VAR_8, 1);
            break;

        case 128:



            if (!FUNC_10 (VAR_8, sizeof (ACPI_PARSE_OBJECT)))
            {
                FUNC_9 (
                    "Cannot read entire Parser object at address %p\n",
                    VAR_8);
                return;
            }

            FUNC_11 (VAR_8, sizeof (ACPI_PARSE_OBJECT),
                VAR_11, VAR_1);
            FUNC_2 ((ACPI_PARSE_OBJECT *) VAR_8);
            break;

        default:



            FUNC_9 (
                "Not a known ACPI internal object, descriptor type %2.2X\n",
                FUNC_1 (VAR_8));

            VAR_15 = 16;
            if (FUNC_10 (VAR_8, 64))
            {
                VAR_15 = 64;
            }



            FUNC_11 (VAR_8, VAR_15, VAR_11, VAR_1);
            break;
        }

        return;
    }



    VAR_9 = FUNC_4 (VAR_6);
    if (!VAR_9)
    {
        return;
    }


DumpNode:


    VAR_14 = FUNC_7 (VAR_9, VAR_0, &VAR_13);
    if (FUNC_0 (VAR_14))
    {
        FUNC_9 ("Could not convert name to pathname\n");
    }

    else
    {
        FUNC_9 ("Object %p: Namespace Node - Pathname: %s\n",
            VAR_9, (char *) VAR_13.Pointer);
    }

    if (!FUNC_10 (VAR_9, sizeof (ACPI_NAMESPACE_NODE)))
    {
        FUNC_9 ("Invalid Named object at address %p\n", VAR_9);
        return;
    }

    FUNC_11 ((void *) VAR_9, sizeof (ACPI_NAMESPACE_NODE),
        VAR_11, VAR_1);
    FUNC_5 (VAR_9, 1);

    VAR_10 = FUNC_8 (VAR_9);
    if (VAR_10)
    {
        FUNC_9 ("\nAttached Object %p:", VAR_10);
        if (!FUNC_10 (VAR_10, sizeof (ACPI_OPERAND_OBJECT)))
        {
            FUNC_9 ("Invalid internal ACPI Object at address %p\n",
                VAR_10);
            return;
        }

        if (FUNC_1 (
            ((ACPI_NAMESPACE_NODE *) VAR_10)) == 130)
        {
            FUNC_9 (" Namespace Node - ");
            VAR_14 = FUNC_7 ((ACPI_NAMESPACE_NODE *) VAR_10,
                VAR_0, &VAR_13);
            if (FUNC_0 (VAR_14))
            {
                FUNC_9 ("Could not convert name to pathname\n");
            }
            else
            {
                FUNC_9 ("Pathname: %s",
                    (char *) VAR_13.Pointer);
            }

            FUNC_9 ("\n");
            FUNC_11 ((void *) VAR_10,
                sizeof (ACPI_NAMESPACE_NODE), VAR_11, VAR_1);
        }
        else
        {
            FUNC_9 ("\n");
            FUNC_11 ((void *) VAR_10,
                sizeof (ACPI_OPERAND_OBJECT), VAR_11, VAR_1);
        }

        FUNC_6 (VAR_10, 1);
    }
}
