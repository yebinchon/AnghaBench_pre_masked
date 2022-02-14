
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct acpi_ec_params {int gpe_bit; scalar_t__ glk; int * gpe_handle; scalar_t__ uid; } ;
typedef int * device_t ;
typedef int desc ;
struct TYPE_11__ {int * Pointer; int Length; } ;
struct TYPE_9__ {int * Elements; } ;
struct TYPE_8__ {int Value; } ;
struct TYPE_10__ {int Type; TYPE_2__ Package; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char**,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_1 ;


 int FUNC_3 (int ,char*,int *,TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,scalar_t__*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_3__*,int,int*) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 struct acpi_ec_params* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,struct acpi_ec_params*) ;
 int * FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (struct acpi_ec_params*,int ) ;
 struct acpi_ec_params* FUNC_22 (int,int ,int) ;
 int FUNC_23 (char*,int,char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_7)
{
    ACPI_BUFFER VAR_8;
    ACPI_HANDLE VAR_9;
    ACPI_OBJECT *VAR_10;
    ACPI_STATUS VAR_11;
    device_t VAR_12;
    char VAR_13[64];
    int VAR_14;
    int VAR_15;
    struct acpi_ec_params *VAR_16;
    static char *VAR_17[] = { "PNP0C09", ((void*)0) };

    VAR_15 = VAR_2;


    if (FUNC_12(VAR_7) != VAR_1 || FUNC_9("ec"))
 return (VAR_15);

    if (FUNC_18(VAR_7)) {




        VAR_14 = 1;
        VAR_16 = FUNC_11(VAR_7);
 if (VAR_16 != ((void*)0))
     VAR_15 = 0;

 goto out;
    } else
 VAR_14 = 0;

    VAR_15 = FUNC_1(FUNC_16(VAR_7), VAR_7, VAR_17, ((void*)0));
    if (VAR_15 > 0)
 return (VAR_15);

    VAR_16 = FUNC_22(sizeof(struct acpi_ec_params), VAR_3, VAR_4 | VAR_5);

    VAR_8.Pointer = ((void*)0);
    VAR_8.Length = VAR_0;
    VAR_9 = FUNC_10(VAR_7);





    VAR_11 = FUNC_6(VAR_9, "_UID", &VAR_16->uid);
    if (FUNC_0(VAR_11))
 VAR_16->uid = 0;
    VAR_12 = FUNC_14(VAR_6, VAR_16->uid);
    if (VAR_12 != ((void*)0) && FUNC_17(VAR_12)) {
 FUNC_15(VAR_7);
 VAR_15 = VAR_2;
 goto out;
    }

    VAR_11 = FUNC_6(VAR_9, "_GLK", &VAR_16->glk);
    if (FUNC_0(VAR_11))
 VAR_16->glk = 0;






    VAR_11 = FUNC_3(VAR_9, "_GPE", ((void*)0), &VAR_8);
    if (FUNC_0(VAR_11)) {
 FUNC_19(VAR_7, "can't evaluate _GPE - %s\n", FUNC_4(VAR_11));
 goto out;
    }

    VAR_10 = (ACPI_OBJECT *)VAR_8.Pointer;
    if (VAR_10 == ((void*)0))
 goto out;

    switch (VAR_10->Type) {
    case 129:
 VAR_16->gpe_handle = ((void*)0);
 VAR_16->gpe_bit = VAR_10->Integer.Value;
 break;
    case 128:
 if (!FUNC_2(VAR_10, 2))
     goto out;
 VAR_16->gpe_handle = FUNC_7(((void*)0), &VAR_10->Package.Elements[0]);
 if (VAR_16->gpe_handle == ((void*)0) ||
     FUNC_8(VAR_10, 1, &VAR_16->gpe_bit) != 0)
  goto out;
 break;
    default:
 FUNC_19(VAR_7, "_GPE has invalid type %d\n", VAR_10->Type);
 goto out;
    }


    FUNC_13(VAR_7, VAR_16);

    if (VAR_8.Pointer)
 FUNC_5(VAR_8.Pointer);
out:
    if (VAR_15 <= 0) {
 FUNC_23(VAR_13, sizeof(VAR_13), "Embedded Controller: GPE %#x%s%s",
   VAR_16->gpe_bit, (VAR_16->glk) ? ", GLK" : "",
   VAR_14 ? ", ECDT" : "");
 FUNC_20(VAR_7, VAR_13);
    } else
 FUNC_21(VAR_16, VAR_3);

    return (VAR_15);
}
