
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oeminfo; int type; int serial; int model; int gra2; int gra1; int lcap; int wcap; int dvol; int btech; int lfcap; int dcap; int units; } ;
struct acpi_cmbat_softc {TYPE_1__ bif; } ;
struct acpi_bif {int oeminfo; int type; int serial; int model; int gra2; int gra1; int lcap; int wcap; int dvol; int btech; int lfcap; int dcap; int units; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct acpi_cmbat_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, struct acpi_bif *VAR_2)
{
    struct acpi_cmbat_softc *VAR_3;

    VAR_3 = FUNC_2(VAR_1);







    FUNC_0(VAR_0);
    VAR_2->units = VAR_3->bif.units;
    VAR_2->dcap = VAR_3->bif.dcap;
    VAR_2->lfcap = VAR_3->bif.lfcap;
    VAR_2->btech = VAR_3->bif.btech;
    VAR_2->dvol = VAR_3->bif.dvol;
    VAR_2->wcap = VAR_3->bif.wcap;
    VAR_2->lcap = VAR_3->bif.lcap;
    VAR_2->gra1 = VAR_3->bif.gra1;
    VAR_2->gra2 = VAR_3->bif.gra2;
    FUNC_3(VAR_2->model, VAR_3->bif.model, sizeof(VAR_3->bif.model));
    FUNC_3(VAR_2->serial, VAR_3->bif.serial, sizeof(VAR_3->bif.serial));
    FUNC_3(VAR_2->type, VAR_3->bif.type, sizeof(VAR_3->bif.type));
    FUNC_3(VAR_2->oeminfo, VAR_3->bif.oeminfo, sizeof(VAR_3->bif.oeminfo));
    FUNC_1(VAR_0);

    return (0);
}
