
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_20__ {scalar_t__ Type; } ;
struct TYPE_18__ {scalar_t__ SpaceId; } ;
struct TYPE_17__ {scalar_t__ SpaceId; } ;
struct TYPE_16__ {int Handler; } ;
struct TYPE_15__ {scalar_t__ Type; } ;
struct TYPE_19__ {TYPE_4__ AddressSpace; TYPE_3__ Region; TYPE_2__ CommonNotify; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_4 (scalar_t__,int ) ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_HANDLE VAR_9,
    UINT32 VAR_10,
    void *VAR_11,
    void **VAR_12)
{
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14;
    ACPI_OPERAND_OBJECT *VAR_15;
    ACPI_NAMESPACE_NODE *VAR_16;
    ACPI_STATUS VAR_17;


    FUNC_1 (VAR_7);


    VAR_13 = (ACPI_OPERAND_OBJECT *) VAR_11;



    if (!VAR_13)
    {
        return (VAR_5);
    }



    VAR_16 = FUNC_6 (VAR_9);
    if (!VAR_16)
    {
        return (VAR_3);
    }





    if ((VAR_16->Type != VAR_1) &&
        (VAR_16->Type != VAR_2) &&
        (VAR_16 != VAR_6))
    {
        return (VAR_5);
    }



    VAR_15 = FUNC_5 (VAR_16);
    if (!VAR_15)
    {


        return (VAR_5);
    }



    if (VAR_15->Common.Type == VAR_1)
    {


        VAR_14 = FUNC_4 (
            VAR_13->AddressSpace.SpaceId, VAR_15->CommonNotify.Handler);
        if (VAR_14)
        {


            FUNC_0 ((VAR_0,
                "Found handler for region [%s] in device %p(%p) handler %p\n",
                FUNC_7 (VAR_13->AddressSpace.SpaceId),
                VAR_15, VAR_14, VAR_13));
            return (VAR_4);
        }





        return (VAR_5);
    }



    if (VAR_15->Region.SpaceId != VAR_13->AddressSpace.SpaceId)
    {


        return (VAR_5);
    }






    FUNC_3 (VAR_15, VAR_8);



    VAR_17 = FUNC_2 (VAR_13, VAR_15, VAR_8);
    return (VAR_17);
}
