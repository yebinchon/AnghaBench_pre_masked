
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_40__ {int * Node; TYPE_14__* Mutex; } ;
struct TYPE_39__ {int OsMutex; } ;
struct TYPE_38__ {int * OsSemaphore; } ;
struct TYPE_37__ {TYPE_14__* Handler; } ;
struct TYPE_36__ {int GpeBlock; } ;
struct TYPE_35__ {void* Elements; int Count; } ;
struct TYPE_34__ {void* Pointer; } ;
struct TYPE_33__ {int Type; int Flags; } ;
struct TYPE_32__ {void* Pointer; } ;
struct TYPE_31__ {int Flags; } ;
struct TYPE_29__ {void* InternalPccBuffer; } ;
struct TYPE_28__ {int RegionContext; } ;
struct TYPE_27__ {int HandlerFlags; int Context; int (* Setup ) (TYPE_14__*,int ,int ,int *) ;TYPE_14__* RegionList; TYPE_14__* Next; } ;
struct TYPE_26__ {TYPE_14__* Next; TYPE_14__* Handler; TYPE_17__* Node; int SpaceId; } ;
struct TYPE_30__ {TYPE_13__ Field; TYPE_12__ Extra; TYPE_11__ AddressSpace; TYPE_10__ Region; TYPE_9__ Method; TYPE_8__ Mutex; TYPE_7__ Event; TYPE_6__ CommonNotify; TYPE_5__ Device; TYPE_4__ Package; TYPE_3__ Buffer; TYPE_2__ Common; TYPE_1__ String; } ;
typedef TYPE_14__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,TYPE_14__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_14__*) ;
 TYPE_14__* VAR_7 ;
 int * VAR_8 ;
 TYPE_14__* FUNC_7 (TYPE_14__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_14__*) ;
 int FUNC_11 (TYPE_14__*) ;
 int FUNC_12 (int ,TYPE_17__*) ;
 int FUNC_13 (TYPE_14__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (TYPE_14__*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_15 (
    ACPI_OPERAND_OBJECT *VAR_11)
{
    void *VAR_12 = ((void*)0);
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14;
    ACPI_OPERAND_OBJECT *VAR_15;
    ACPI_OPERAND_OBJECT *VAR_16;
    ACPI_OPERAND_OBJECT **VAR_17;


    FUNC_4 (VAR_9, VAR_11);


    if (!VAR_11)
    {
        VAR_10;
    }





    switch (VAR_11->Common.Type)
    {
    case 129:

        FUNC_0 ((VAR_1, "**** String %p, ptr %p\n",
            VAR_11, VAR_11->String.Pointer));



        if (!(VAR_11->Common.Flags & VAR_6))
        {


            VAR_12 = VAR_11->String.Pointer;
        }
        break;

    case 139:

        FUNC_0 ((VAR_1, "**** Buffer %p, ptr %p\n",
            VAR_11, VAR_11->Buffer.Pointer));



        if (!(VAR_11->Common.Flags & VAR_6))
        {


            VAR_12 = VAR_11->Buffer.Pointer;
        }
        break;

    case 132:

        FUNC_0 ((VAR_1, " **** Package of count %X\n",
            VAR_11->Package.Count));
        VAR_12 = VAR_11->Package.Elements;
        break;





    case 137:

        if (VAR_11->Device.GpeBlock)
        {
            (void) FUNC_5 (VAR_11->Device.GpeBlock);
        }



    case 131:
    case 128:



        VAR_13 = VAR_11->CommonNotify.Handler;
        while (VAR_13)
        {
            VAR_15 = VAR_13->AddressSpace.Next;
            FUNC_13 (VAR_13);
            VAR_13 = VAR_15;
        }
        break;

    case 133:

        FUNC_0 ((VAR_1,
            "***** Mutex %p, OS Mutex %p\n",
            VAR_11, VAR_11->Mutex.OsMutex));

        if (VAR_11 == VAR_7)
        {


            (void) FUNC_9 (VAR_8);
            VAR_8 = ((void*)0);

            FUNC_8 (VAR_11->Mutex.OsMutex);
            VAR_7 = ((void*)0);
        }
        else
        {
            FUNC_6 (VAR_11);
            FUNC_8 (VAR_11->Mutex.OsMutex);
        }
        break;

    case 136:

        FUNC_0 (*(VAR_1,
            "***** Event %p, OS Semaphore %p\n",
            VAR_11, VAR_11->Event.OsSemaphore));

        (void) FUNC_9 (VAR_11->Event.OsSemaphore);
        VAR_11->Event.OsSemaphore = ((void*)0);
        break;

    case 134:

        FUNC_0 ((VAR_1,
            "***** Method %p\n", VAR_11));



        if (VAR_11->Method.Mutex)
        {
            FUNC_8 (VAR_11->Method.Mutex->Mutex.OsMutex);
            FUNC_10 (VAR_11->Method.Mutex);
            VAR_11->Method.Mutex = ((void*)0);
        }

        if (VAR_11->Method.Node)
        {
            VAR_11->Method.Node = ((void*)0);
        }
        break;

    case 130:

        FUNC_0 ((VAR_1,
            "***** Region %p\n", VAR_11));





        if (!(VAR_11->Region.Node->Flags & VAR_5))
        {
            FUNC_12 (VAR_11->Region.SpaceId,
                VAR_11->Region.Node);
        }

        VAR_14 = FUNC_7 (VAR_11);
        if (VAR_14)
        {





            VAR_13 = VAR_11->Region.Handler;
            if (VAR_13)
            {
                VAR_15 = VAR_13->AddressSpace.RegionList;
                VAR_16 = VAR_15;
                VAR_17 = &VAR_13->AddressSpace.RegionList;



                while (VAR_15)
                {
                    if (VAR_15 == VAR_11)
                    {
                        *VAR_17 = VAR_15->Region.Next;
                        break;
                    }



                    VAR_17 = &VAR_15->Region.Next;
                    VAR_15 = VAR_15->Region.Next;



                    if (VAR_15 == VAR_16)
                    {
                        FUNC_2 ((VAR_4,
                            "Circular region list in address handler object %p",
                            VAR_13));
                        VAR_10;
                    }
                }

                if (VAR_13->AddressSpace.HandlerFlags &
                    VAR_0)
                {


                    if (VAR_13->AddressSpace.Setup)
                    {
                        (void) VAR_13->AddressSpace.Setup (VAR_11,
                            VAR_3,
                            VAR_13->AddressSpace.Context,
                            &VAR_14->Extra.RegionContext);
                    }
                }

                FUNC_13 (VAR_13);
            }



            FUNC_10 (VAR_14);
        }
        if (VAR_11->Field.InternalPccBuffer)
        {
            FUNC_3(VAR_11->Field.InternalPccBuffer);
        }

        break;

    case 138:

        FUNC_0 ((VAR_1,
            "***** Buffer Field %p\n", VAR_11));

        VAR_14 = FUNC_7 (VAR_11);
        if (VAR_14)
        {
            FUNC_10 (VAR_14);
        }
        break;

    case 135:

        FUNC_0 ((VAR_1,
            "***** Bank Field %p\n", VAR_11));

        VAR_14 = FUNC_7 (VAR_11);
        if (VAR_14)
        {
            FUNC_10 (VAR_14);
        }
        break;

    default:

        break;
    }



    if (VAR_12)
    {
        FUNC_0 ((VAR_1, "Deleting Object Subptr %p\n",
            VAR_12));
        FUNC_3 (VAR_12);
    }



    FUNC_1 ((VAR_1, "%s: Deleting Object %p [%s]\n",
        VAR_2, VAR_11, FUNC_11 (VAR_11)));

    FUNC_10 (VAR_11);
    VAR_10;
}
