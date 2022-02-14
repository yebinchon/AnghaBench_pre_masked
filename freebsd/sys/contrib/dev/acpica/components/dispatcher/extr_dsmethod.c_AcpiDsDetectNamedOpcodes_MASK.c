
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int Opcode; TYPE_3__* OpInfo; TYPE_2__* MethodNode; TYPE_4__* MethodDesc; } ;
struct TYPE_13__ {int InfoFlags; scalar_t__ SyncLevel; } ;
struct TYPE_12__ {TYPE_5__ Method; } ;
struct TYPE_11__ {int Flags; int Name; } ;
struct TYPE_9__ {int Ascii; } ;
struct TYPE_10__ {TYPE_1__ Name; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (TYPE_6__*,int **)) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_WALK_STATE *VAR_8,
    ACPI_PARSE_OBJECT **VAR_9)
{

    FUNC_1 (FUNC_2);




    if (!(VAR_8->OpInfo->Flags & (VAR_7 | VAR_5 | VAR_6)))
    {
        return (VAR_4);
    }
    VAR_8->MethodDesc->Method.SyncLevel = 0;
    VAR_8->MethodDesc->Method.InfoFlags |=
        (VAR_2 | VAR_1);

    FUNC_0 ((VAR_0,
        "Method serialized [%4.4s] %p - [%s] (%4.4X)\n",
        VAR_8->MethodNode->Name.Ascii, VAR_8->MethodNode,
        VAR_8->OpInfo->Name, VAR_8->Opcode));



    return (VAR_3);
}
