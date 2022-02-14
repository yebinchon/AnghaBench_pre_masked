
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_12__ {TYPE_2__* Op; } ;
struct TYPE_11__ {char* Name; } ;
struct TYPE_9__ {int CompileFlags; int ExternalName; TYPE_4__* Node; } ;
struct TYPE_10__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OPCODE_INFO ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int ) ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,char*,char*,char*) ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_10,
    const ACPI_OPCODE_INFO *VAR_11,
    ACPI_PARSE_OBJECT *VAR_12,
    UINT32 VAR_13,
    UINT32 VAR_14)
{
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_NAMESPACE_NODE *VAR_16;


    VAR_16 = VAR_12->Asl.Node;

    if (!VAR_16)
    {


        return;
    }



    VAR_15 = VAR_16->Op;
    if (VAR_15->Asl.CompileFlags & VAR_8)
    {


        FUNC_1 (VAR_0, VAR_2, VAR_10, VAR_10->Asl.ExternalName);
    }
    else if (VAR_15->Asl.CompileFlags & VAR_9)
    {


        FUNC_1 (VAR_4, VAR_3,
            VAR_10, VAR_10->Asl.ExternalName);
    }
    else if (!(VAR_14 & VAR_13))
    {


        FUNC_0 (VAR_6, VAR_14);
        FUNC_0 (VAR_7, VAR_13);







        if (VAR_14 != 0)
        {
            FUNC_2 (VAR_5,
                "Method returns [%s], %s operator requires [%s]",
                VAR_6, VAR_11->Name, VAR_7);

            FUNC_1 (VAR_0, VAR_1, VAR_12, VAR_5);
        }
    }
}
