
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int TypeSpecific; } ;
struct TYPE_12__ {scalar_t__ ResourceType; TYPE_1__ Info; } ;
struct TYPE_13__ {TYPE_2__ Address; } ;
struct TYPE_16__ {TYPE_3__ Data; } ;
struct TYPE_14__ {int SpecificFlags; } ;
struct TYPE_15__ {TYPE_4__ Address; } ;
typedef TYPE_5__ AML_RESOURCE ;
typedef TYPE_6__ ACPI_RESOURCE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int ) ;

void
FUNC_2 (
    AML_RESOURCE *VAR_5,
    ACPI_RESOURCE *VAR_6)
{
    FUNC_0 ();




    (void) FUNC_1 (
        VAR_6, VAR_5, VAR_2);



    if (VAR_6->Data.Address.ResourceType == VAR_1)
    {
        (void) FUNC_1 (
            VAR_6, VAR_5, VAR_4);
    }
    else if (VAR_6->Data.Address.ResourceType == VAR_0)
    {
        (void) FUNC_1 (
            VAR_6, VAR_5, VAR_3);
    }
    else
    {


        VAR_5->Address.SpecificFlags =
            VAR_6->Data.Address.Info.TypeSpecific;
    }
}
