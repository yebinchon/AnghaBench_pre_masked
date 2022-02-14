
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ ParseOpcode; int ExternalName; int Node; } ;
struct TYPE_7__ {TYPE_1__ Asl; } ;
struct TYPE_6__ {TYPE_3__* CurrentOp; } ;
typedef TYPE_2__ ASL_METHOD_INFO ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_6,
    UINT32 VAR_7,
    void *VAR_8)
{
    ASL_METHOD_INFO *VAR_9 = (ASL_METHOD_INFO *) VAR_8;
    ACPI_PARSE_OBJECT *VAR_10;




    if ((VAR_6->Asl.ParseOpcode != VAR_4) &&
        (VAR_6->Asl.ParseOpcode != VAR_5) &&
        (VAR_6->Asl.ParseOpcode != VAR_3))
    {
        return (VAR_2);
    }



    if (!VAR_6->Asl.Node)
    {
        return (VAR_2);
    }



    VAR_10 = VAR_9->CurrentOp;
    if (VAR_10 == VAR_6)
    {
        return (VAR_1);
    }



    if ((VAR_10->Asl.ParseOpcode == VAR_4) ||
        (VAR_10->Asl.ParseOpcode == VAR_5) ||
        (VAR_10->Asl.ParseOpcode == VAR_3))
    {
        if (!FUNC_0 (VAR_6->Asl.ExternalName, VAR_10->Asl.ExternalName))
        {
            return (VAR_0);
        }
    }

    return (VAR_2);
}
