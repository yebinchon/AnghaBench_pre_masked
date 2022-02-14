
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Pointer; } ;
struct TYPE_5__ {int * Handle; } ;
struct TYPE_7__ {int Type; TYPE_2__ String; TYPE_1__ Reference; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int *,int ,int **) ;

ACPI_HANDLE
FUNC_2(ACPI_HANDLE VAR_0, ACPI_OBJECT *VAR_1)
{
    ACPI_HANDLE VAR_2;

    if (VAR_1 == ((void*)0))
 return (((void*)0));

    switch (VAR_1->Type) {
    case 129:
    case 130:
 VAR_2 = VAR_1->Reference.Handle;
 break;
    case 128:






 if (FUNC_0(FUNC_1(VAR_0, VAR_1->String.Pointer, &VAR_2)))
     VAR_2 = ((void*)0);
 break;
    default:
 VAR_2 = ((void*)0);
 break;
    }

    return (VAR_2);
}
