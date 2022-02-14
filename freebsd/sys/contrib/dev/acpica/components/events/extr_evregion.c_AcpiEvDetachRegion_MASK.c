
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int Flags; TYPE_4__* Next; TYPE_4__* Handler; int SpaceId; } ;
struct TYPE_12__ {int Context; int (* Setup ) (TYPE_4__*,int ,int ,void**) ;TYPE_4__* RegionList; } ;
struct TYPE_11__ {void* RegionContext; } ;
struct TYPE_14__ {TYPE_3__ Region; TYPE_2__ AddressSpace; TYPE_1__ Extra; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef int (* ACPI_ADR_SPACE_SETUP ) (TYPE_4__*,int ,int ,void**) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_11 (
    ACPI_OPERAND_OBJECT *VAR_8,
    BOOLEAN VAR_9)
{
    ACPI_OPERAND_OBJECT *VAR_10;
    ACPI_OPERAND_OBJECT *VAR_11;
    ACPI_OPERAND_OBJECT *VAR_12;
    ACPI_OPERAND_OBJECT **VAR_13;
    ACPI_ADR_SPACE_SETUP VAR_14;
    void **VAR_15;
    ACPI_OPERAND_OBJECT *VAR_16;
    ACPI_STATUS VAR_17;


    FUNC_4 (VAR_6);


    VAR_16 = FUNC_6 (VAR_8);
    if (!VAR_16)
    {
        VAR_7;
    }
    VAR_15 = &VAR_16->Extra.RegionContext;



    VAR_10 = VAR_8->Region.Handler;
    if (!VAR_10)
    {


        VAR_7;
    }



    VAR_11 = VAR_10->AddressSpace.RegionList;
    VAR_12 = VAR_11;
    VAR_13 = &VAR_10->AddressSpace.RegionList;

    while (VAR_11)
    {


        if (VAR_11 == VAR_8)
        {
            FUNC_0 ((VAR_0,
                "Removing Region %p from address handler %p\n",
                VAR_8, VAR_10));



            *VAR_13 = VAR_11->Region.Next;
            VAR_11->Region.Next = ((void*)0);

            if (VAR_9)
            {
                VAR_17 = FUNC_9 (VAR_1);
                if (FUNC_3 (VAR_17))
                {
                    VAR_7;
                }
            }



            VAR_17 = FUNC_5 (VAR_8, VAR_3);
            if (FUNC_3 (VAR_17))
            {
                FUNC_2 ((VAR_4, VAR_17, "from region _REG, [%s]",
                    FUNC_8 (VAR_8->Region.SpaceId)));
            }

            if (VAR_9)
            {
                VAR_17 = FUNC_7 (VAR_1);
                if (FUNC_3 (VAR_17))
                {
                    VAR_7;
                }
            }





            if (VAR_8->Region.Flags & VAR_5)
            {
                VAR_14 = VAR_10->AddressSpace.Setup;
                VAR_17 = VAR_14 (VAR_8, VAR_2,
                    VAR_10->AddressSpace.Context, VAR_15);





                if (VAR_15)
                {
                    *VAR_15 = ((void*)0);
                }



                if (FUNC_3 (VAR_17))
                {
                    FUNC_2 ((VAR_4, VAR_17,
                        "from region handler - deactivate, [%s]",
                        FUNC_8 (VAR_8->Region.SpaceId)));
                }

                VAR_8->Region.Flags &= ~(VAR_5);
            }
            VAR_8->Region.Handler = ((void*)0);
            FUNC_10 (VAR_10);

            VAR_7;
        }



        VAR_13 = &VAR_11->Region.Next;
        VAR_11 = VAR_11->Region.Next;



        if (VAR_11 == VAR_12)
        {
            FUNC_1 ((VAR_4,
                "Circular handler list in region object %p",
                VAR_8));
            VAR_7;
        }
    }



    FUNC_0 ((VAR_0,
        "Cannot remove region %p from address handler %p\n",
        VAR_8, VAR_10));

    VAR_7;
}
