
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_11__ {scalar_t__ Integer; } ;
struct TYPE_12__ {scalar_t__ AmlOpcode; scalar_t__ ParseOpcode; int * Node; TYPE_4__ Value; TYPE_3__* Child; TYPE_6__* Next; } ;
struct TYPE_13__ {TYPE_5__ Asl; } ;
struct TYPE_8__ {scalar_t__ Integer; } ;
struct TYPE_9__ {TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

char *
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4,
    UINT32 VAR_5,
    ACPI_NAMESPACE_NODE **VAR_6,
    char **VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8;
    UINT32 VAR_9;







    if ((VAR_4->Asl.AmlOpcode == VAR_0) ||
        (VAR_4->Asl.ParseOpcode == VAR_2))
    {


        VAR_8 = VAR_4;
        for (VAR_9 = 0; VAR_9 <= VAR_5;)
        {
            VAR_8 = VAR_8->Asl.Next;
            while (VAR_8 &&
                (VAR_8->Asl.ParseOpcode != VAR_3) &&
                (VAR_8->Asl.AmlOpcode != VAR_1))
            {
                VAR_8 = VAR_8->Asl.Next;
            }

            if (!VAR_8)
            {
                return ("UNKNOWN");
            }



            if (VAR_8->Asl.ParseOpcode == VAR_3)
            {
                VAR_9 += (UINT32) VAR_8->Asl.Child->Asl.Value.Integer;
            }
            else
            {
                VAR_9 += (UINT32) VAR_8->Asl.Value.Integer;
            }
        }



        *VAR_6 = VAR_8->Asl.Node;
        *VAR_7 = FUNC_0 (*VAR_6);
        return ("-Field-");
    }

    return (((void*)0));
}
