
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_softc {int acpi_sysctl_tree; } ;
struct acpi_panasonic_softc {int handle; int power_evh; int sysctl_ctx; int sysctl_tree; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int * name; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct acpi_panasonic_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_6 (int *,int ,int ,int *,int,struct acpi_panasonic_softc*,int,int ,char*,char*) ;
 int FUNC_7 (int ) ;
 struct acpi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct acpi_panasonic_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_12)
{
 struct acpi_panasonic_softc *VAR_13;
 struct acpi_softc *VAR_14;
 ACPI_STATUS VAR_15;
 int VAR_16;

 VAR_13 = FUNC_10(VAR_12);
 VAR_13->dev = VAR_12;
 VAR_13->handle = FUNC_9(VAR_12);

 VAR_14 = FUNC_8(VAR_12);


 FUNC_13(&VAR_13->sysctl_ctx);
 VAR_13->sysctl_tree = FUNC_5(&VAR_13->sysctl_ctx,
     FUNC_7(VAR_14->acpi_sysctl_tree), VAR_6,
     "panasonic", VAR_2, 0, "");
 for (VAR_16 = 0; VAR_11[VAR_16].name != ((void*)0); VAR_16++) {
  FUNC_6(&VAR_13->sysctl_ctx,
      FUNC_7(VAR_13->sysctl_tree), VAR_6,
      VAR_11[VAR_16].name,
      VAR_4 | VAR_3 | VAR_1,
      VAR_13, VAR_16, VAR_9, "I", "");
 }
 VAR_15 = FUNC_3(VAR_13->handle, VAR_0,
     VAR_7, VAR_13);
 if (FUNC_0(VAR_15)) {
  FUNC_11(VAR_12, "couldn't install notify handler - %s\n",
      FUNC_2(VAR_15));
  FUNC_12(&VAR_13->sysctl_ctx);
  return (VAR_5);
 }


 VAR_13->power_evh = FUNC_4(VAR_10,
     VAR_8, VAR_13->handle, 0);

 return (0);
}
