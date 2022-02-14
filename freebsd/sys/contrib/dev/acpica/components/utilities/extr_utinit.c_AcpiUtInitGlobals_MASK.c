
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_8__ {int * Handler; } ;
struct TYPE_7__ {scalar_t__ UseCount; int ThreadId; int * Mutex; } ;
struct TYPE_5__ {int Integer; } ;
struct TYPE_6__ {int * Object; int * Peer; int * Child; int * Parent; int Type; int DescriptorType; TYPE_1__ Name; } ;
typedef int ACPI_STATUS ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__* VAR_12 ;
 void* VAR_13 ;
 int ** VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;
 void* VAR_28 ;
 int * VAR_29 ;
 TYPE_4__* VAR_30 ;
 int ** VAR_31 ;
 int * VAR_32 ;
 int * VAR_33 ;
 int * VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 TYPE_3__* VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int * VAR_41 ;
 int* VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int * VAR_45 ;
 TYPE_2__ VAR_46 ;
 int * VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 int * VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int FUNC_3 () ;
 int VAR_54 ;
 void* VAR_55 ;
 void* VAR_56 ;
 int VAR_57 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    void)
{
    ACPI_STATUS VAR_58;
    UINT32 VAR_59;


    FUNC_2 (VAR_57);




    VAR_58 = FUNC_3 ();
    if (FUNC_1 (VAR_58))
    {
        FUNC_4 (VAR_58);
    }



    for (VAR_59 = 0; VAR_59 < VAR_0; VAR_59++)
    {
        VAR_14[VAR_59] = ((void*)0);
    }



    for (VAR_59 = 0; VAR_59 < VAR_4; VAR_59++)
    {
        VAR_37[VAR_59].Mutex = ((void*)0);
        VAR_37[VAR_59].ThreadId = VAR_2;
        VAR_37[VAR_59].UseCount = 0;
    }

    for (VAR_59 = 0; VAR_59 < VAR_5; VAR_59++)
    {
        VAR_42[VAR_59] = 0;
    }



    VAR_42[VAR_5 - 1] = 0x80000000;



    VAR_52 = 0;
    VAR_53 = 0;
    VAR_51 = 0;

    for (VAR_59 = 0; VAR_59 < VAR_3; VAR_59++)
    {
        VAR_12[VAR_59] = 0;
    }





    VAR_15 = VAR_55;
    VAR_32 = ((void*)0);
    VAR_31[0] = ((void*)0);
    VAR_31[1] = ((void*)0);
    VAR_11 = 0;

    VAR_24 = ((void*)0);
    VAR_47 = ((void*)0);





    VAR_30[0].Handler = ((void*)0);
    VAR_30[1].Handler = ((void*)0);
    VAR_22 = ((void*)0);
    VAR_33 = ((void*)0);
    VAR_50 = ((void*)0);
    VAR_34 = ((void*)0);



    VAR_29 = ((void*)0);
    VAR_27 = ((void*)0);
    VAR_25 = VAR_55;
    VAR_26 = 0;
    VAR_28 = VAR_55;



    VAR_17 = ((void*)0);
    VAR_16 = VAR_55;
    VAR_48 = VAR_55;
    VAR_39 = 0;
    VAR_43 = 0;
    VAR_13 = VAR_56;
    VAR_35 = 0;
    VAR_38 = 0;
    VAR_18 = VAR_54;
    VAR_41 = ((void*)0);



    VAR_21 = VAR_55;
    VAR_49 = VAR_56;



    VAR_45 = ((void*)0);
    VAR_46.Name.Integer = VAR_6;
    VAR_46.DescriptorType = VAR_1;
    VAR_46.Type = VAR_9;
    VAR_46.Parent = ((void*)0);
    VAR_46.Child = ((void*)0);
    VAR_46.Peer = ((void*)0);
    VAR_46.Object = ((void*)0);
    FUNC_4 (VAR_10);
}
