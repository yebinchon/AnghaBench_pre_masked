
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int UINT64 ;
struct TYPE_25__ {scalar_t__ ReturnObject; TYPE_18__* ObjDesc; int FullPathname; int PassNumber; TYPE_13__* Node; } ;
struct TYPE_24__ {int ImplicitReturnObj; int MethodDesc; int ParserState; scalar_t__ ReturnDesc; int ParseFlags; int MethodIsNested; int MethodPathname; } ;
struct TYPE_22__ {int (* Implementation ) (TYPE_4__*) ;} ;
struct TYPE_23__ {int InfoFlags; TYPE_2__ Dispatch; int AmlLength; int AmlStart; int OwnerId; } ;
struct TYPE_21__ {int Ascii; } ;
struct TYPE_20__ {TYPE_3__ Method; } ;
struct TYPE_19__ {TYPE_1__ Name; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_13__*,TYPE_18__*,int *) ;
 TYPE_4__* FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int *,TYPE_13__*,int ,int ,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_4__*) ;

ACPI_STATUS
FUNC_19 (
    ACPI_EVALUATE_INFO *VAR_13)
{
    ACPI_STATUS VAR_14;
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_WALK_STATE *VAR_16;


    FUNC_3 (VAR_10);




    FUNC_15 ();



    if (!VAR_13 || !VAR_13->Node)
    {
        FUNC_17 (VAR_7);
    }



    VAR_14 = FUNC_4 (VAR_13->Node, VAR_13->ObjDesc, ((void*)0));
    if (FUNC_2 (VAR_14))
    {
        FUNC_17 (VAR_14);
    }




    FUNC_14 (VAR_13, VAR_12);




    FUNC_0 ((VAR_0,
        "**** Begin Method Parse/Execute [%4.4s] **** Node=%p Obj=%p\n",
        VAR_13->Node->Name.Ascii, VAR_13->Node, VAR_13->ObjDesc));



    VAR_15 = FUNC_11 (VAR_13->ObjDesc->Method.AmlStart);
    if (!VAR_15)
    {
        VAR_14 = VAR_6;
        goto Cleanup;
    }



    VAR_13->PassNumber = VAR_1;
    VAR_16 = FUNC_5 (
        VAR_13->ObjDesc->Method.OwnerId, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_16)
    {
        VAR_14 = VAR_6;
        goto Cleanup;
    }

    VAR_14 = FUNC_7 (VAR_16, VAR_15, VAR_13->Node,
        VAR_13->ObjDesc->Method.AmlStart,
        VAR_13->ObjDesc->Method.AmlLength, VAR_13, VAR_13->PassNumber);
    if (FUNC_2 (VAR_14))
    {
        FUNC_6 (VAR_16);
        goto Cleanup;
    }

    VAR_16->MethodPathname = VAR_13->FullPathname;
    VAR_16->MethodIsNested = VAR_9;

    if (VAR_13->ObjDesc->Method.InfoFlags & VAR_3)
    {
        VAR_16->ParseFlags |= VAR_4;
    }



    if (VAR_13->ObjDesc->Method.InfoFlags & VAR_2)
    {
        VAR_14 = VAR_13->ObjDesc->Method.Dispatch.Implementation (VAR_16);
        VAR_13->ReturnObject = VAR_16->ReturnDesc;



        FUNC_8 (VAR_16);
        FUNC_10 (&VAR_16->ParserState);
        FUNC_9 (VAR_16->MethodDesc, VAR_16);
        FUNC_6 (VAR_16);
        goto Cleanup;
    }





    if (VAR_8)
    {
        VAR_16->ImplicitReturnObj =
            FUNC_16 ((UINT64) 0);
        if (!VAR_16->ImplicitReturnObj)
        {
            VAR_14 = VAR_6;
            FUNC_6 (VAR_16);
            goto Cleanup;
        }
    }



    VAR_14 = FUNC_13 (VAR_16);



Cleanup:
    FUNC_12 (VAR_15);



    FUNC_14 (VAR_13, VAR_11);



    if (FUNC_2 (VAR_14))
    {
        FUNC_17 (VAR_14);
    }





    if (VAR_13->ReturnObject)
    {
        FUNC_0 ((VAR_0, "Method returned ObjDesc=%p\n",
            VAR_13->ReturnObject));
        FUNC_1 (VAR_13->ReturnObject);

        VAR_14 = VAR_5;
    }

    FUNC_17 (VAR_14);
}
