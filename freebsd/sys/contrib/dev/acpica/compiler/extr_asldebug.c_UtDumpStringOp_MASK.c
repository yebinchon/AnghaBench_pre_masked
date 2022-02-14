
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {char* String; } ;
struct TYPE_7__ {scalar_t__ ParseOpcode; char* ExternalName; TYPE_1__ Value; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT32 VAR_3)
{
    char *VAR_4;


    VAR_4 = VAR_2->Asl.Value.String;
    if (VAR_2->Asl.ParseOpcode != VAR_1)
    {






        if (VAR_2->Asl.ExternalName)
        {
            VAR_4 = VAR_2->Asl.ExternalName;
        }
    }

    if (!VAR_4)
    {
        FUNC_0 (VAR_0,
            " ERROR: Could not find a valid String/Path pointer\n");
        return;
    }

    VAR_4 = FUNC_1 (VAR_4);



    FUNC_2 (VAR_2, VAR_3, FUNC_3 (VAR_4));
    FUNC_0 (VAR_0, "%s", VAR_4);
}
