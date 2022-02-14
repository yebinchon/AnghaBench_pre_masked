
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_toshiba_softc {int handle; int sysctl_ctx; int sysctl_tree; int dev; } ;
struct acpi_softc {int acpi_sysctl_tree; } ;
typedef int device_t ;
struct TYPE_2__ {int * name; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ,struct acpi_toshiba_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_4 (int *,int ,int ,int *,int,struct acpi_toshiba_softc*,int,int ,char*,char*) ;
 int FUNC_5 (int ) ;
 struct acpi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct acpi_toshiba_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_12)
{
 struct acpi_toshiba_softc *VAR_13;
 struct acpi_softc *VAR_14;
 ACPI_STATUS VAR_15;
 int VAR_16;

 VAR_13 = FUNC_8(VAR_12);
 VAR_13->dev = VAR_12;
 VAR_13->handle = FUNC_7(VAR_12);

 VAR_14 = FUNC_6(VAR_12);
 FUNC_11(&VAR_13->sysctl_ctx);
 VAR_13->sysctl_tree = FUNC_3(&VAR_13->sysctl_ctx,
     FUNC_5(VAR_14->acpi_sysctl_tree), VAR_7,
     "toshiba", VAR_2, 0, "");

 for (VAR_16 = 0; VAR_11[VAR_16].name != ((void*)0); VAR_16++) {
  FUNC_4(&VAR_13->sysctl_ctx,
      FUNC_5(VAR_13->sysctl_tree), VAR_7,
      VAR_11[VAR_16].name,
      VAR_4 | VAR_3 | VAR_1,
      VAR_13, VAR_16, VAR_9, "I", "");
 }

 if (VAR_10 != 0) {
  VAR_15 = FUNC_1(VAR_13->handle, VAR_6,
         ((void*)0), ((void*)0));
  if (FUNC_0(VAR_15)) {
   FUNC_9(VAR_12, "enable FN keys failed\n");
   FUNC_10(&VAR_13->sysctl_ctx);
   return (VAR_5);
  }
  FUNC_2(VAR_13->handle, VAR_0,
      VAR_8, VAR_13);
 }

 return (0);
}
