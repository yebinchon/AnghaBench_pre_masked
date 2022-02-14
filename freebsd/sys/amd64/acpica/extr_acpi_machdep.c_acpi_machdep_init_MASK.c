
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_sysctl_tree; int acpi_sysctl_ctx; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct acpi_softc*) ;
 int FUNC_4 (struct acpi_softc*) ;
 int VAR_3 ;
 struct acpi_softc* FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;

int
FUNC_6(device_t VAR_5)
{
 struct acpi_softc *VAR_6;

 VAR_6 = FUNC_5(VAR_5);

 FUNC_3(VAR_6);
 FUNC_4(VAR_6);

 if (VAR_4 != VAR_0)
  FUNC_2(VAR_4);

 FUNC_0(&VAR_6->acpi_sysctl_ctx,
     FUNC_1(VAR_6->acpi_sysctl_tree), VAR_2,
     "reset_video", VAR_1, &VAR_3, 0,
     "Call the VESA reset BIOS vector on the resume path");

 return (0);
}
