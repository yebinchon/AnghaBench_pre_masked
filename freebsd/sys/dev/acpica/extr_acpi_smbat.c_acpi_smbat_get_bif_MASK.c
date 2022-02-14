
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int dcap; int lfcap; int btech; int dvol; int wcap; int lcap; int gra1; int gra2; int oeminfo; int type; int serial; int model; int units; } ;
struct acpi_smbat_softc {TYPE_1__ bif; int bif_lastupdated; } ;
struct acpi_bif {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct acpi_smbat_softc*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (struct acpi_smbat_softc*,int ,int ,int ,int) ;
 struct acpi_smbat_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct acpi_bif*,TYPE_1__*,int) ;
 int VAR_13 ;
 int FUNC_8 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_14, struct acpi_bif *VAR_15)
{
 struct acpi_smbat_softc *VAR_16;
 int VAR_17;
 uint32_t VAR_18;
 uint16_t VAR_19;
 uint8_t VAR_20;

 FUNC_0(VAR_13);

 VAR_20 = VAR_3;
 VAR_17 = VAR_2;
 VAR_16 = FUNC_6(VAR_14);

 if (!FUNC_2(&VAR_16->bif_lastupdated)) {
  VAR_17 = 0;
  goto out;
 }

 if (FUNC_4(VAR_16, VAR_20, VAR_5, &VAR_19))
  goto out;
 if (VAR_19 & VAR_4) {
  VAR_18 = 10;
  VAR_16->bif.units = VAR_1;
 } else {
  VAR_18 = 1;
  VAR_16->bif.units = VAR_0;
 }

 if (FUNC_4(VAR_16, VAR_20, VAR_6, &VAR_19))
  goto out;
 VAR_16->bif.dcap = VAR_19 * VAR_18;

 if (FUNC_4(VAR_16, VAR_20, VAR_10, &VAR_19))
  goto out;
 VAR_16->bif.lfcap = VAR_19 * VAR_18;
 VAR_16->bif.btech = 1;

 if (FUNC_4(VAR_16, VAR_20, VAR_7, &VAR_19))
  goto out;
 VAR_16->bif.dvol = VAR_19;

 VAR_16->bif.wcap = VAR_16->bif.dcap / 10;
 VAR_16->bif.lcap = VAR_16->bif.dcap / 10;

 VAR_16->bif.gra1 = VAR_18;
 VAR_16->bif.gra2 = VAR_18;

 if (FUNC_5(VAR_16, VAR_20, VAR_9,
     VAR_16->bif.model, sizeof(VAR_16->bif.model)))
  goto out;

 if (FUNC_4(VAR_16, VAR_20, VAR_12, &VAR_19))
  goto out;
 FUNC_8(VAR_16->bif.serial, sizeof(VAR_16->bif.serial), "0x%04x", VAR_19);

 if (FUNC_5(VAR_16, VAR_20, VAR_8,
     VAR_16->bif.type, sizeof(VAR_16->bif.type)))
  goto out;

 if (FUNC_5(VAR_16, VAR_20, VAR_11,
     VAR_16->bif.oeminfo, sizeof(VAR_16->bif.oeminfo)))
  goto out;



 FUNC_3(&VAR_16->bif_lastupdated);
 VAR_17 = 0;

out:
 if (VAR_17 == 0)
  FUNC_7(VAR_15, &VAR_16->bif, sizeof(VAR_16->bif));
 FUNC_1(VAR_13);
 return (VAR_17);
}
