
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct acpi_smbat_softc {int sb_base_addr; int bst_lastupdated; int bif_lastupdated; int * ec_dev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int ) ;
 struct acpi_smbat_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct acpi_smbat_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_6(VAR_1);
 if (FUNC_0(FUNC_1(FUNC_3(VAR_1), "_EC", &VAR_3))) {
  FUNC_7(VAR_1, "cannot get EC base address\n");
  return (VAR_0);
 }
 VAR_2->sb_base_addr = (VAR_3 >> 8) & 0xff;


 VAR_2->ec_dev = FUNC_5(FUNC_4("acpi_ec"), 0);
 if (VAR_2->ec_dev == ((void*)0)) {
  FUNC_7(VAR_1, "cannot find EC device\n");
  return (VAR_0);
 }

 FUNC_8(&VAR_2->bif_lastupdated);
 FUNC_8(&VAR_2->bst_lastupdated);

 if (FUNC_2(VAR_1) != 0) {
  FUNC_7(VAR_1, "cannot register battery\n");
  return (VAR_0);
 }
 return (0);
}
