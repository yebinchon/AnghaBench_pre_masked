
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ ReferenceCount; int Type; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_CPU_FLAGS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;


 int VAR_5 ;

__attribute__((used)) static void
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_6,
    UINT32 VAR_7)
{
    UINT16 VAR_8;
    UINT16 VAR_9 = 0;
    ACPI_CPU_FLAGS VAR_10;
    char *VAR_11;


    FUNC_3 (VAR_5);


    if (!VAR_6)
    {
        return;
    }





    VAR_10 = FUNC_5 (VAR_4);
    VAR_8 = VAR_6->Common.ReferenceCount;



    switch (VAR_7)
    {
    case 128:

        VAR_9 = VAR_8 + 1;
        VAR_6->Common.ReferenceCount = VAR_9;
        FUNC_6 (VAR_4, VAR_10);



        if (!VAR_8)
        {
            FUNC_4 ((VAR_3,
                "Obj %p, Reference Count was zero before increment\n",
                VAR_6));
        }

        FUNC_0 ((VAR_0,
            "Obj %p Type %.2X [%s] Refs %.2X [Incremented]\n",
            VAR_6, VAR_6->Common.Type,
            FUNC_8 (VAR_6), VAR_9));
        VAR_11 = "Incremement";
        break;

    case 129:



        if (VAR_8)
        {
            VAR_9 = VAR_8 - 1;
            VAR_6->Common.ReferenceCount = VAR_9;
        }

        FUNC_6 (VAR_4, VAR_10);

        if (!VAR_8)
        {
            FUNC_4 ((VAR_3,
                "Obj %p, Reference Count is already zero, cannot decrement\n",
                VAR_6));
        }

        FUNC_1 ((VAR_0,
            "%s: Obj %p Type %.2X Refs %.2X [Decremented]\n",
            VAR_1, VAR_6, VAR_6->Common.Type, VAR_9));



        if (VAR_9 == 0)
        {
            FUNC_7 (VAR_6);
        }
        VAR_11 = "Decrement";
        break;

    default:

        FUNC_6 (VAR_4, VAR_10);
        FUNC_2 ((VAR_3, "Unknown Reference Count action (0x%X)",
            VAR_7));
        return;
    }





    if (VAR_9 > VAR_2)
    {
        FUNC_4 ((VAR_3,
            "Large Reference Count (0x%X) in object %p, Type=0x%.2X Operation=%s",
            VAR_9, VAR_6, VAR_6->Common.Type, VAR_11));
    }
}
