
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cmbat_softc {int bif; int bst; int bst_lastupdated; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_1 ;
 struct acpi_cmbat_softc* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_2)
{
    struct acpi_cmbat_softc *VAR_3;
    int VAR_4, VAR_5;
    device_t VAR_6;

    VAR_6 = (device_t)VAR_2;
    FUNC_2(VAR_6, FUNC_9(VAR_6),
  "battery initialization start\n");






    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, FUNC_3(10000)) {
 FUNC_0(VAR_1);
 VAR_3 = FUNC_10(VAR_6);
 if (VAR_3 == ((void*)0)) {
     FUNC_1(VAR_1);
     return;
 }

 if (!FUNC_4(VAR_6) || !FUNC_11(VAR_6)) {
     FUNC_1(VAR_1);
     continue;
 }





 if (VAR_4 == 0 || !FUNC_6(&VAR_3->bst)) {
     FUNC_12(&VAR_3->bst_lastupdated);
     FUNC_8(VAR_6);
 }
 if (VAR_4 == 0 || !FUNC_5(&VAR_3->bif))
     FUNC_7(VAR_6);

 VAR_5 = FUNC_6(&VAR_3->bst) &&
     FUNC_5(&VAR_3->bif);
 FUNC_1(VAR_1);

 if (VAR_5)
     break;
    }

    if (VAR_4 == VAR_0) {
 FUNC_2(VAR_6, FUNC_9(VAR_6),
      "battery initialization failed, giving up\n");
    } else {
 FUNC_2(VAR_6, FUNC_9(VAR_6),
      "battery initialization done, tried %d times\n", VAR_4 + 1);
    }
}
