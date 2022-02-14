
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_10__ {int AmlLength; int AmlOpcode; } ;
struct TYPE_8__ {int Integer; } ;
struct TYPE_9__ {TYPE_1__ Value; } ;
struct TYPE_11__ {TYPE_3__ Asl; TYPE_2__ Common; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_9,
    UINT64 VAR_10)
{

    VAR_9->Common.Value.Integer = VAR_10;





    switch (VAR_9->Asl.AmlLength)
    {
    case 1:

        FUNC_1 (VAR_4, VAR_9);
        VAR_9->Asl.AmlOpcode = VAR_0;
        break;

    case 2:

        FUNC_1 (VAR_8, VAR_9);
        VAR_9->Asl.AmlOpcode = VAR_3;
        break;

    case 4:

        FUNC_1 (VAR_5, VAR_9);
        VAR_9->Asl.AmlOpcode = VAR_1;
        break;

    case 8:

        FUNC_1 (VAR_7, VAR_9);
        VAR_9->Asl.AmlOpcode = VAR_2;
        break;

    case 0:
    default:

        FUNC_0 (VAR_9);
        FUNC_1 (VAR_6, VAR_9);
        break;
    }

    VAR_9->Asl.AmlLength = 0;
}
