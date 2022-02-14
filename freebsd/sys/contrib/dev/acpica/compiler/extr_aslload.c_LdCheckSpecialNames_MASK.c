
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_13__ {scalar_t__ Type; } ;
struct TYPE_10__ {int Ascii; } ;
struct TYPE_12__ {scalar_t__ Type; TYPE_8__* Parent; TYPE_2__ Name; } ;
struct TYPE_9__ {char* ExternalName; } ;
struct TYPE_11__ {TYPE_1__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 int FUNC_1 (int ,int ,TYPE_3__*,char*) ;
 char** VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_NAMESPACE_NODE *VAR_8,
    ACPI_PARSE_OBJECT *VAR_9)
{
    UINT32 VAR_10;


    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {
        if (FUNC_0(VAR_8->Name.Ascii, VAR_6[VAR_10]) &&
            VAR_8->Parent != VAR_5)
        {
            FUNC_1 (VAR_2, VAR_4, VAR_9, VAR_9->Asl.ExternalName);
            return;
        }
    }

    if (FUNC_0 (VAR_8->Name.Ascii, "_UID") &&
        VAR_8->Parent->Type == VAR_0 &&
        VAR_8->Type == VAR_1)
    {
        FUNC_1 (VAR_2, VAR_3 , VAR_9, "found a string");
    }
}
