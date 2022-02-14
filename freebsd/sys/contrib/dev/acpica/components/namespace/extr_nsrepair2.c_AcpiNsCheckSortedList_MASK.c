
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_13__ {int FullPathname; int ReturnFlags; } ;
struct TYPE_11__ {scalar_t__ Value; } ;
struct TYPE_10__ {scalar_t__ Count; TYPE_4__** Elements; } ;
struct TYPE_9__ {scalar_t__ Type; } ;
struct TYPE_12__ {TYPE_3__ Integer; TYPE_2__ Package; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_4__**,scalar_t__,scalar_t__,int ) ;
 int VAR_10 ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_EVALUATE_INFO *VAR_11,
    ACPI_OPERAND_OBJECT *VAR_12,
    UINT32 VAR_13,
    UINT32 VAR_14,
    UINT32 VAR_15,
    UINT8 VAR_16,
    char *VAR_17)
{
    UINT32 VAR_18;
    ACPI_OPERAND_OBJECT **VAR_19;
    ACPI_OPERAND_OBJECT **VAR_20;
    ACPI_OPERAND_OBJECT *VAR_21;
    UINT32 VAR_22;
    UINT32 VAR_23;


    FUNC_1 (VAR_10);




    if (VAR_12->Common.Type != VAR_5)
    {
        return (VAR_7);
    }






    VAR_18 = VAR_12->Package.Count;
    if (!VAR_18 || VAR_13 >= VAR_18)
    {
        return (VAR_8);
    }

    VAR_19 = &VAR_12->Package.Elements[VAR_13];
    VAR_18 -= VAR_13;

    VAR_23 = 0;
    if (VAR_16 == VAR_3)
    {
        VAR_23 = VAR_6;
    }



    for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++)
    {


        if ((*VAR_19)->Common.Type != VAR_5)
        {
            return (VAR_7);
        }



        if ((*VAR_19)->Package.Count < VAR_14)
        {
            return (VAR_8);
        }

        VAR_20 = (*VAR_19)->Package.Elements;
        VAR_21 = VAR_20[VAR_15];

        if (VAR_21->Common.Type != VAR_4)
        {
            return (VAR_7);
        }





        if (((VAR_16 == VAR_2) &&
                (VAR_21->Integer.Value < VAR_23)) ||
            ((VAR_16 == VAR_3) &&
                (VAR_21->Integer.Value > VAR_23)))
        {
            FUNC_2 (&VAR_12->Package.Elements[VAR_13],
                VAR_18, VAR_15, VAR_16);

            VAR_11->ReturnFlags |= VAR_1;

            FUNC_0 ((VAR_0,
                "%s: Repaired unsorted list - now sorted by %s\n",
                VAR_11->FullPathname, VAR_17));
            return (VAR_9);
        }

        VAR_23 = (UINT32) VAR_21->Integer.Value;
        VAR_19++;
    }

    return (VAR_9);
}
