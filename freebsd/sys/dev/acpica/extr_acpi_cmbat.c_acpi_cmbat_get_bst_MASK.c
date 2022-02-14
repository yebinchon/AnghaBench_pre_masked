
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int rate; int cap; int volt; } ;
struct acpi_cmbat_softc {int flags; TYPE_1__ bst; int bst_lastupdated; } ;
typedef void* device_t ;
struct TYPE_5__ {int * Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_2__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (int ,char*,int *,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int VAR_4 ;
 struct acpi_cmbat_softc* FUNC_12 (void*) ;
 int FUNC_13 (void*,char*) ;

__attribute__((used)) static void
FUNC_14(void *VAR_5)
{
    struct acpi_cmbat_softc *VAR_6;
    ACPI_STATUS VAR_7;
    ACPI_OBJECT *VAR_8;
    ACPI_HANDLE VAR_9;
    ACPI_BUFFER VAR_10;
    device_t VAR_11;

    FUNC_2(VAR_4);

    VAR_11 = VAR_5;
    VAR_6 = FUNC_12(VAR_11);
    VAR_9 = FUNC_11(VAR_11);
    VAR_10.Pointer = ((void*)0);
    VAR_10.Length = VAR_0;

    if (!FUNC_8(&VAR_6->bst_lastupdated))
 goto end;

    VAR_7 = FUNC_4(VAR_9, "_BST", ((void*)0), &VAR_10);
    if (FUNC_0(VAR_7)) {
 FUNC_3(VAR_11, FUNC_10(VAR_11),
      "error fetching current battery status -- %s\n",
      FUNC_5(VAR_7));
 goto end;
    }

    VAR_8 = (ACPI_OBJECT *)VAR_10.Pointer;
    if (!FUNC_1(VAR_8, 4)) {
 FUNC_3(VAR_11, FUNC_10(VAR_11),
      "battery status corrupted\n");
 goto end;
    }

    if (FUNC_7(VAR_8, 0, &VAR_6->bst.state) != 0)
 goto end;
    if (FUNC_7(VAR_8, 1, &VAR_6->bst.rate) != 0)
 goto end;
    if (FUNC_7(VAR_8, 2, &VAR_6->bst.cap) != 0)
 goto end;
    if (FUNC_7(VAR_8, 3, &VAR_6->bst.volt) != 0)
 goto end;
    FUNC_9(&VAR_6->bst_lastupdated);


    VAR_6->bst.state &= VAR_1;
    if ((VAR_6->bst.state & VAR_3) == VAR_3)
 FUNC_3(VAR_11, FUNC_10(VAR_11),
     "battery reports simultaneous charging and discharging\n");


    if (VAR_6->bst.state & VAR_2) {
     if ((VAR_6->flags & VAR_2) == 0) {
     VAR_6->flags |= VAR_2;
     FUNC_13(VAR_11, "critically low charge!\n");
 }
    } else
 VAR_6->flags &= ~VAR_2;

end:
    if (VAR_10.Pointer != ((void*)0))
 FUNC_6(VAR_10.Pointer);
}
