
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Length; int NumPackages; scalar_t__ ObjectSpace; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_1__ ACPI_PKG_INFO ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_2,
    ACPI_SIZE *VAR_3)
{
    ACPI_STATUS VAR_4;
    ACPI_PKG_INFO VAR_5;


    FUNC_1 (VAR_1, VAR_2);


    VAR_5.Length = 0;
    VAR_5.ObjectSpace = 0;
    VAR_5.NumPackages = 1;

    VAR_4 = FUNC_3 (
        VAR_2, ((void*)0), VAR_0, &VAR_5);
    if (FUNC_0 (VAR_4))
    {
        FUNC_4 (VAR_4);
    }






    VAR_5.Length += FUNC_2 (
        sizeof (ACPI_OBJECT)) * (ACPI_SIZE) VAR_5.NumPackages;



    *VAR_3 = VAR_5.Length;
    FUNC_4 (VAR_4);
}
