
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ParseOpcode; TYPE_5__* Child; } ;
struct TYPE_13__ {TYPE_1__ Asl; } ;
struct TYPE_12__ {TYPE_3__* Op; } ;
struct TYPE_10__ {int ExternalName; } ;
struct TYPE_11__ {TYPE_2__ Asl; } ;
typedef TYPE_4__ ASL_METHOD_INFO ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_5__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_3,
    ASL_METHOD_INFO *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5;




    VAR_5 = VAR_3->Asl.Child;
    if (VAR_5->Asl.ParseOpcode == VAR_2)
    {
        return;
    }



    FUNC_0 (VAR_1, VAR_0,
        VAR_3, VAR_4->Op->Asl.ExternalName);
}
