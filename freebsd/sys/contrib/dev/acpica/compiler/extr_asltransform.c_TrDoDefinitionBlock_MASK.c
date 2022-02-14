
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int String; } ;
struct TYPE_7__ {TYPE_1__ Value; TYPE_3__* Next; TYPE_3__* Child; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    UINT32 VAR_7;




    VAR_1 = ((void*)0);

    VAR_6 = VAR_5->Asl.Child;
    for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
    {
        VAR_6 = VAR_6->Asl.Next;
        if (VAR_7 == 0)
        {





            if (!FUNC_0 (VAR_6->Asl.Value.String, VAR_0))
            {
                VAR_3 = VAR_4;
            }
        }
    }

    VAR_2 = VAR_6;
}
