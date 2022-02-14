
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Type; TYPE_2__* Object; } ;
struct TYPE_6__ {char* Pointer; } ;
struct TYPE_7__ {TYPE_1__ String; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,int ,TYPE_3__**) ;
 char* VAR_2 ;

char *
FUNC_2 (
    char *VAR_3)
{
    ACPI_NAMESPACE_NODE *VAR_4;
    ACPI_NAMESPACE_NODE *VAR_5;
    ACPI_STATUS VAR_6;


    VAR_6 = FUNC_1 (((void*)0), VAR_3, VAR_0,
        &VAR_4);
    if (FUNC_0 (VAR_6))
    {
        goto ErrorExit;
    }

    VAR_6 = FUNC_1 (VAR_4, VAR_2, VAR_0,
        &VAR_5);
    if (FUNC_0 (VAR_6))
    {
        goto ErrorExit;
    }

    if ((VAR_5->Type != VAR_1) ||
        !VAR_5->Object)
    {
        goto ErrorExit;
    }

    return (VAR_5->Object->String.Pointer);


ErrorExit:
    return (((void*)0));
}
