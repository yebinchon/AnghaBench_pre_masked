
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int Parent; } ;
struct TYPE_13__ {int AmlStart; int AmlLength; } ;
struct TYPE_15__ {TYPE_5__* Node; } ;
struct TYPE_14__ {int Flags; } ;
struct TYPE_16__ {TYPE_1__ Extra; TYPE_3__ BankField; TYPE_2__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_OPERAND_OBJECT *VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6;
    ACPI_NAMESPACE_NODE *VAR_7;
    ACPI_STATUS VAR_8;


    FUNC_2 (VAR_4, VAR_5);


    if (VAR_5->Common.Flags & VAR_3)
    {
        FUNC_7 (VAR_2);
    }



    VAR_6 = FUNC_4 (VAR_5);
    VAR_7 = VAR_5->BankField.Node;

    FUNC_0 (FUNC_5 (
        VAR_1, VAR_7, ((void*)0)));

    FUNC_1 ((VAR_0, "[%4.4s] BankField Arg Init\n",
        FUNC_6 (VAR_7)));



    VAR_8 = FUNC_3 (VAR_7, VAR_7->Parent,
        VAR_6->Extra.AmlLength, VAR_6->Extra.AmlStart);
    FUNC_7 (VAR_8);
}
