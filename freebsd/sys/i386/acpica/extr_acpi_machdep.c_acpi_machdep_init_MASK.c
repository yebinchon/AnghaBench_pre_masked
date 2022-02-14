
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_softc {int acpi_sysctl_tree; int acpi_sysctl_ctx; } ;
typedef int device_t ;
struct TYPE_2__ {int SciInterrupt; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct acpi_softc*) ;
 int FUNC_5 (struct acpi_softc*) ;
 int VAR_6 ;
 struct acpi_softc* FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;

int
FUNC_7(device_t VAR_8)
{
 struct acpi_softc *VAR_9;

 VAR_9 = FUNC_6(VAR_8);

 FUNC_4(VAR_9);
 FUNC_5(VAR_9);

 if (VAR_7 == VAR_0)
  FUNC_0(VAR_8, VAR_1.SciInterrupt,
      VAR_4, VAR_3);
 else
  FUNC_3(VAR_7);

 FUNC_1(&VAR_9->acpi_sysctl_ctx,
     FUNC_2(VAR_9->acpi_sysctl_tree), VAR_5,
     "reset_video", VAR_2, &VAR_6, 0,
     "Call the VESA reset BIOS vector on the resume path");

 return (0);
}
