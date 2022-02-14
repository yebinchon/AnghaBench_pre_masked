
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct acpi_prw_data {int power_res_count; TYPE_3__* power_res; int gpe_bit; int * gpe_handle; int lowest_wake; } ;
struct TYPE_12__ {int * Pointer; int Length; } ;
struct TYPE_10__ {int Count; TYPE_3__* Elements; } ;
struct TYPE_9__ {int Value; } ;
struct TYPE_11__ {int Type; TYPE_2__ Package; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_1 ;


 int FUNC_2 (int *,char*,int *,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int,int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8(ACPI_HANDLE VAR_4, struct acpi_prw_data *VAR_5)
{
    ACPI_STATUS VAR_6;
    ACPI_BUFFER VAR_7;
    ACPI_OBJECT *VAR_8, *VAR_9;
    int VAR_10, VAR_11, VAR_12;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 return (VAR_2);





    VAR_10 = VAR_2;
    VAR_7.Pointer = ((void*)0);
    VAR_7.Length = VAR_0;
    VAR_6 = FUNC_2(VAR_4, "_PRW", ((void*)0), &VAR_7);
    if (FUNC_0(VAR_6))
 return (VAR_3);
    VAR_8 = (ACPI_OBJECT *)VAR_7.Pointer;
    if (VAR_8 == ((void*)0))
 return (VAR_3);
    if (!FUNC_1(VAR_8, 2))
 goto out;







    if (FUNC_5(VAR_8, 1, &VAR_5->lowest_wake) != 0)
 goto out;




    switch (VAR_8->Package.Elements[0].Type) {
    case 129:






 VAR_5->gpe_handle = ((void*)0);
 VAR_5->gpe_bit = VAR_8->Package.Elements[0].Integer.Value;
 VAR_10 = 0;
 break;
    case 128:
 VAR_9 = &VAR_8->Package.Elements[0];
 if (!FUNC_1(VAR_9, 2))
     goto out;
 VAR_5->gpe_handle = FUNC_4(((void*)0), &VAR_9->Package.Elements[0]);
 if (VAR_5->gpe_handle == ((void*)0))
     goto out;
 if (FUNC_5(VAR_9, 1, &VAR_5->gpe_bit) != 0)
     goto out;
 VAR_10 = 0;
 break;
    default:
 goto out;
    }


    VAR_12 = VAR_8->Package.Count - 2;
    if (VAR_12 > VAR_1) {
 FUNC_7("ACPI device %s has too many power resources\n", FUNC_6(VAR_4));
 VAR_12 = 0;
    }
    VAR_5->power_res_count = VAR_12;
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
 VAR_5->power_res[VAR_11] = VAR_8->Package.Elements[VAR_11];

out:
    if (VAR_7.Pointer != ((void*)0))
 FUNC_3(VAR_7.Pointer);
    return (VAR_10);
}
