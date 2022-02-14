
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_14__ {int Integer; } ;
struct TYPE_15__ {void* AmlOpcode; TYPE_5__ Value; TYPE_4__* Parent; } ;
struct TYPE_16__ {TYPE_6__ Asl; } ;
struct TYPE_12__ {TYPE_2__* Parent; } ;
struct TYPE_13__ {TYPE_3__ Asl; } ;
struct TYPE_10__ {scalar_t__ ParseOpcode; } ;
struct TYPE_11__ {TYPE_1__ Asl; } ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;


 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,TYPE_7__*,char*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

UINT32
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_17)
{
    if (VAR_15)
    {
        switch (VAR_17->Asl.Value.Integer)
        {
        case 0:

            VAR_17->Asl.AmlOpcode = VAR_8;
            FUNC_0 (VAR_11, VAR_10,
                VAR_17, "Zero");
            return (1);

        case 1:

            VAR_17->Asl.AmlOpcode = VAR_5;
            FUNC_0 (VAR_11, VAR_10,
                VAR_17, "One");
            return (1);

        case 129:



            if (VAR_13 == 4)
            {
                VAR_17->Asl.AmlOpcode = VAR_4;
                FUNC_0 (VAR_11, VAR_10,
                    VAR_17, "Ones");
                return (1);
            }
            break;

        case 128:



            if (VAR_13 == 8)
            {
                VAR_17->Asl.AmlOpcode = VAR_4;
                FUNC_0 (VAR_11, VAR_10,
                    VAR_17, "Ones");
                return (1);
            }
            break;

        default:

            break;
        }
    }



    if (VAR_17->Asl.Value.Integer <= VAR_1)
    {
        VAR_17->Asl.AmlOpcode = VAR_2;
        return (1);
    }

    if (VAR_17->Asl.Value.Integer <= VAR_0)
    {
        VAR_17->Asl.AmlOpcode = VAR_7;
        return (2);
    }

    if (VAR_17->Asl.Value.Integer <= 129)
    {
        VAR_17->Asl.AmlOpcode = VAR_3;
        return (4);
    }
    else
    {
        if (VAR_13 == 4)
        {
            FUNC_0 (VAR_12, VAR_9,
                VAR_17, ((void*)0));

            if (!VAR_14)
            {


                VAR_17->Asl.Value.Integer &= 129;



                return (FUNC_1 (VAR_17));
            }
        }

        VAR_17->Asl.AmlOpcode = VAR_6;
        return (8);
    }
}
