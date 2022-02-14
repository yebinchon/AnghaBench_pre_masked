
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volt; int cap; int rate; int state; } ;
struct acpi_cmbat_softc {TYPE_1__ bst; } ;
struct acpi_bst {int state; int volt; int cap; int rate; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct acpi_cmbat_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, struct acpi_bst *VAR_3)
{
    struct acpi_cmbat_softc *VAR_4;

    VAR_4 = FUNC_4(VAR_2);

    FUNC_0(VAR_1);
    if (FUNC_2(VAR_2)) {
 FUNC_3(VAR_2);
 VAR_3->state = VAR_4->bst.state;
 VAR_3->rate = VAR_4->bst.rate;
 VAR_3->cap = VAR_4->bst.cap;
 VAR_3->volt = VAR_4->bst.volt;
    } else
 VAR_3->state = VAR_0;
    FUNC_1(VAR_1);

    return (0);
}
