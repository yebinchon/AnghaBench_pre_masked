
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_12__ {int FullPathname; int NodeFlags; } ;
struct TYPE_10__ {scalar_t__ Value; } ;
struct TYPE_9__ {scalar_t__ Type; } ;
struct TYPE_11__ {TYPE_2__ Integer; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_4__*,TYPE_3__**,int ,int,int ,int,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_EVALUATE_INFO *VAR_9,
    ACPI_OPERAND_OBJECT **VAR_10,
    UINT32 VAR_11)
{
    UINT32 VAR_12;
    UINT32 VAR_13;
    ACPI_STATUS VAR_14 = VAR_7;


    FUNC_2 (VAR_8);




    if ((*VAR_10)->Common.Type != VAR_3)
    {
        FUNC_3 ((VAR_6, VAR_9->FullPathname, VAR_9->NodeFlags,
            "Return Package has invalid object type for version number"));
        FUNC_5 (VAR_4);
    }

    VAR_13 = (UINT32) (*VAR_10)->Integer.Value;
    VAR_12 = 21;

    if (VAR_13 == 0)
    {
        VAR_12 = 20;
    }

    if (VAR_11 < VAR_12)
    {
        FUNC_3 ((VAR_6, VAR_9->FullPathname, VAR_9->NodeFlags,
            "Return Package is too small - found %u elements, expected %u",
            VAR_11, VAR_12));
        FUNC_5 (VAR_5);
    }
    else if (VAR_11 > VAR_12)
    {
        FUNC_0 ((VAR_0,
            "%s: Return Package is larger than needed - "
            "found %u, expected %u\n",
            VAR_9->FullPathname, VAR_11, VAR_12));
    }



    VAR_14 = FUNC_4 (VAR_9, VAR_10,
        VAR_1, 16,
        VAR_2, 4, 0);
    if (FUNC_1 (VAR_14))
    {
        FUNC_5 (VAR_14);
    }



    if (VAR_13 > 0)
    {
        VAR_14 = FUNC_4 (VAR_9, VAR_10 + 20,
            VAR_1, 1, 0, 0, 20);
    }

    FUNC_5 (VAR_14);
}
