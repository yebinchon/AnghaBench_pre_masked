
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_9__ {size_t Integer; } ;
struct TYPE_8__ {TYPE_2__* LocalVariables; TYPE_1__* Arguments; } ;
struct TYPE_7__ {int Flags; void* Type; void* DescriptorType; TYPE_5__ Name; } ;
struct TYPE_6__ {int Flags; void* Type; void* DescriptorType; TYPE_5__ Name; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_2 (
    ACPI_WALK_STATE *VAR_10)
{
    UINT32 VAR_11;


    FUNC_0 (VAR_6);




    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
    {
        FUNC_1 (&VAR_10->Arguments[VAR_11].Name,
            VAR_7);

        VAR_10->Arguments[VAR_11].Name.Integer |= (VAR_11 << 24);
        VAR_10->Arguments[VAR_11].DescriptorType = VAR_0;
        VAR_10->Arguments[VAR_11].Type = VAR_3;
        VAR_10->Arguments[VAR_11].Flags = VAR_4;
    }



    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
    {
        FUNC_1 (&VAR_10->LocalVariables[VAR_11].Name,
            VAR_8);

        VAR_10->LocalVariables[VAR_11].Name.Integer |= (VAR_11 << 24);
        VAR_10->LocalVariables[VAR_11].DescriptorType = VAR_0;
        VAR_10->LocalVariables[VAR_11].Type = VAR_3;
        VAR_10->LocalVariables[VAR_11].Flags = VAR_5;
    }

    VAR_9;
}
