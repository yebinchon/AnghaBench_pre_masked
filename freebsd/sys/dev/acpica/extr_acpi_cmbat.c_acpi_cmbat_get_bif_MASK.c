
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oeminfo; int type; int serial; int model; int gra2; int gra1; int lcap; int wcap; int dvol; int btech; int lfcap; int dcap; int units; } ;
struct acpi_cmbat_softc {TYPE_1__ bif; } ;
typedef void* device_t ;
struct TYPE_5__ {int * Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_2__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (int ,char*,int *,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int *) ;
 scalar_t__ FUNC_8 (int *,int,int ,int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int VAR_2 ;
 struct acpi_cmbat_softc* FUNC_11 (void*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_3)
{
    struct acpi_cmbat_softc *VAR_4;
    ACPI_STATUS VAR_5;
    ACPI_OBJECT *VAR_6;
    ACPI_HANDLE VAR_7;
    ACPI_BUFFER VAR_8;
    device_t VAR_9;

    FUNC_2(VAR_2);

    VAR_9 = VAR_3;
    VAR_4 = FUNC_11(VAR_9);
    VAR_7 = FUNC_10(VAR_9);
    VAR_8.Pointer = ((void*)0);
    VAR_8.Length = VAR_0;

    VAR_5 = FUNC_4(VAR_7, "_BIF", ((void*)0), &VAR_8);
    if (FUNC_0(VAR_5)) {
 FUNC_3(VAR_9, FUNC_9(VAR_9),
      "error fetching current battery info -- %s\n",
      FUNC_5(VAR_5));
 goto end;
    }

    VAR_6 = (ACPI_OBJECT *)VAR_8.Pointer;
    if (!FUNC_1(VAR_6, 13)) {
 FUNC_3(VAR_9, FUNC_9(VAR_9),
      "battery info corrupted\n");
 goto end;
    }

    if (FUNC_7(VAR_6, 0, &VAR_4->bif.units) != 0)
 goto end;
    if (FUNC_7(VAR_6, 1, &VAR_4->bif.dcap) != 0)
 goto end;
    if (FUNC_7(VAR_6, 2, &VAR_4->bif.lfcap) != 0)
 goto end;
    if (FUNC_7(VAR_6, 3, &VAR_4->bif.btech) != 0)
 goto end;
    if (FUNC_7(VAR_6, 4, &VAR_4->bif.dvol) != 0)
 goto end;
    if (FUNC_7(VAR_6, 5, &VAR_4->bif.wcap) != 0)
 goto end;
    if (FUNC_7(VAR_6, 6, &VAR_4->bif.lcap) != 0)
 goto end;
    if (FUNC_7(VAR_6, 7, &VAR_4->bif.gra1) != 0)
 goto end;
    if (FUNC_7(VAR_6, 8, &VAR_4->bif.gra2) != 0)
 goto end;
    if (FUNC_8(VAR_6, 9, VAR_4->bif.model, VAR_1) != 0)
 goto end;
    if (FUNC_8(VAR_6, 10, VAR_4->bif.serial, VAR_1) != 0)
 goto end;
    if (FUNC_8(VAR_6, 11, VAR_4->bif.type, VAR_1) != 0)
 goto end;
    if (FUNC_8(VAR_6, 12, VAR_4->bif.oeminfo, VAR_1) != 0)
 goto end;

end:
    if (VAR_8.Pointer != ((void*)0))
 FUNC_6(VAR_8.Pointer);
}
