
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t Length; void* Pointer; } ;
struct TYPE_8__ {size_t Length; void* Pointer; } ;
struct TYPE_7__ {TYPE_4__* Elements; } ;
struct TYPE_9__ {int Type; TYPE_1__ Buffer; TYPE_3__ String; TYPE_2__ Package; } ;
typedef TYPE_4__ ACPI_OBJECT ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,size_t) ;

int
FUNC_1(ACPI_OBJECT *VAR_2, int VAR_3, void *VAR_4, size_t VAR_5)
{
    ACPI_OBJECT *VAR_6;
    void *VAR_7;
    size_t VAR_8;

    VAR_6 = &VAR_2->Package.Elements[VAR_3];
    if (VAR_6 == ((void*)0))
 return (VAR_1);

    switch (VAR_6->Type) {
    case 128:
 VAR_7 = VAR_6->String.Pointer;
 VAR_8 = VAR_6->String.Length;
 break;
    case 129:
 VAR_7 = VAR_6->Buffer.Pointer;
 VAR_8 = VAR_6->Buffer.Length;
 break;
    default:
 return (VAR_1);
    }


    if (++VAR_8 > VAR_5)
 return (VAR_0);

    FUNC_0(VAR_4, VAR_7, VAR_8);
    return (0);
}
