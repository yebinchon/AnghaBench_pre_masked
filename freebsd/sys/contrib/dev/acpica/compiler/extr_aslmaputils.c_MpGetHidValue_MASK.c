
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int Type; TYPE_2__* Object; } ;
struct TYPE_11__ {int Value; } ;
struct TYPE_9__ {char* Pointer; } ;
struct TYPE_10__ {TYPE_3__ Integer; TYPE_1__ String; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,TYPE_4__**) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 char* FUNC_4 (TYPE_4__*) ;
 char* FUNC_5 (int ) ;

char *
FUNC_6 (
    ACPI_NAMESPACE_NODE *VAR_4)
{
    ACPI_NAMESPACE_NODE *VAR_5;
    char *VAR_6;
    ACPI_STATUS VAR_7;


    VAR_7 = FUNC_2 (VAR_4, VAR_3,
        VAR_1, &VAR_5);
    if (FUNC_0 (VAR_7))
    {
        goto ErrorExit;
    }



    if (!VAR_5->Object)
    {
        return (FUNC_4 (VAR_5));
    }



    switch (VAR_5->Type)
    {
    case 128:

        return (VAR_5->Object->String.Pointer);

    case 130:



        VAR_6 = FUNC_5 (VAR_0);
        FUNC_1 (VAR_6, VAR_5->Object->Integer.Value);
        return (VAR_6);

    case 129:

        return ("-Method-");

    default:

        FUNC_3 (VAR_2, "BAD HID TYPE: %u", VAR_5->Type);
        break;
    }


ErrorExit:
    return ("-No HID-");
}
